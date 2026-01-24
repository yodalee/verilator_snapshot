// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_NV_NVDLA_SDP_CORE_Y_cvt___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_alu_cvt__0(Vsim_NV_NVDLA_SDP_CORE_Y_cvt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_SDP_CORE_Y_cvt___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_alu_cvt__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_6;
    NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_6 = 0;
    CData/*0:0*/ NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_7;
    NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_7 = 0;
    CData/*0:0*/ NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_8;
    NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_8 = 0;
    CData/*0:0*/ NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_9;
    NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_9 = 0;
    CData/*0:0*/ NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_10;
    NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_10 = 0;
    CData/*0:0*/ NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_11;
    NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_11 = 0;
    CData/*0:0*/ NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_12;
    NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_12 = 0;
    CData/*0:0*/ NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_13;
    NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_13 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__0__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__0__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__0__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__0__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__0__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__0__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__0__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__0__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__1__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__1__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__1__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__1__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__1__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__1__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__1__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__1__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__2__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__2__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__2__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__2__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__2__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__2__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__2__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__2__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__3__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__3__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__3__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__3__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__3__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__3__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__3__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__3__sel = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__4__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__4__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__4__input_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__4__input_2 = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__4__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__4__input_1 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__4__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__4__sel = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__5__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__5__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__5__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__5__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__5__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__5__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__6__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__6__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__6__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__6__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__6__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__6__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__6__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__6__sel = 0;
    CData/*5:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_6_2_2__7__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_6_2_2__7__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_6_2_2__7__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_6_2_2__7__input_0 = 0;
    CData/*5:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_6_2_2__7__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_6_2_2__7__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_6_2_2__7__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_6_2_2__7__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__8__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__8__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__8__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__8__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__8__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__8__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__8__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__8__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__9__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__9__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__9__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__9__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__9__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__9__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__9__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__9__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__10__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__10__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__10__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__10__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__10__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__10__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__10__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__10__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__11__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__11__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__11__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__11__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__11__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__11__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__11__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__11__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_s_1_1_2__12__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_s_1_1_2__12__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_s_1_1_2__12__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_s_1_1_2__12__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_s_1_1_2__13__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_s_1_1_2__13__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_s_1_1_2__13__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_s_1_1_2__13__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__14__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__14__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__14__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__14__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__14__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__14__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__15__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__15__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__15__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__15__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__15__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__15__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__16__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__16__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__16__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__16__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__16__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__16__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__17__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__17__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__17__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__17__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__17__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__17__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__18__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__18__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__18__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__18__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__18__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__18__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__19__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__19__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__19__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__19__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__19__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__19__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__20__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__20__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__20__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__20__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__20__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__20__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__21__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__21__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__21__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__21__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__21__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__21__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__22__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__22__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__22__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__22__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__22__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__22__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__23__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__23__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__23__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__23__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__23__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__23__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__24__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__24__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__24__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__24__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__24__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__24__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__25__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__25__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__25__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__25__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__25__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__25__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__42__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__42__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__42__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__42__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__42__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__42__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__43__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__43__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__43__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__43__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__43__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__43__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__44__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__44__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__44__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__44__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__44__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__44__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__45__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__45__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__45__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__45__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__45__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__45__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__46__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__46__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__46__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__46__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__46__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__46__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__46__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__46__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__47__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__47__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__47__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__47__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__47__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__47__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__47__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__47__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__115__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__115__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__115__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__115__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__115__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__115__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__115__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__115__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__116__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__116__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__116__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__116__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__116__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__116__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__116__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__116__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__117__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__117__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__117__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__117__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__117__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__117__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__117__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__117__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__118__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__118__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__118__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__118__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__118__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__118__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__118__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__118__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__119__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__119__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__119__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__119__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__119__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__119__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__119__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__119__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__120__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__120__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__120__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__120__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__120__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__120__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__120__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__120__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__121__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__121__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__121__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__121__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__121__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__121__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__121__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__121__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__122__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__122__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__122__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__122__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__122__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__122__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__122__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__122__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__131__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__131__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__131__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__131__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__131__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__131__sel = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__132__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__132__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__132__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__132__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__132__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__132__sel = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__133__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__133__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__133__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__133__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__133__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__133__sel = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__134__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__134__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__134__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__134__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__134__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__134__sel = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__135__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__135__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__135__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__135__input_0 = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__135__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__135__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__135__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__135__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__136__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__136__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__136__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__136__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__136__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__136__sel = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__137__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__137__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__137__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__137__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__137__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__137__sel = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__139__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__139__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__139__input_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__139__input_2 = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__139__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__139__input_1 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__139__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__139__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__140__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__140__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__140__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__140__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__140__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__140__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__141__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__141__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__141__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__141__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__141__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__141__sel = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__142__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__142__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__142__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__142__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__142__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__142__sel = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__144__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__144__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__144__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__144__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__144__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__144__sel = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__145__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__145__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__145__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__145__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__145__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__145__sel = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__146__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__146__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__146__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__146__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__146__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__146__sel = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__147__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__147__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__147__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__147__input_0 = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__147__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__147__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__147__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__147__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__148__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__148__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__148__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__148__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__148__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__148__sel = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__149__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__149__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__149__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__149__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__149__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__149__sel = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__150__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__150__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__150__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__150__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__150__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__150__sel = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__151__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__151__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__151__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__151__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__151__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__151__sel = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__152__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__152__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__152__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__152__input_0 = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__152__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__152__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__152__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__152__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__153__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__153__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__153__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__153__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__153__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__153__sel = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__154__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__154__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__154__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__154__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__154__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__154__sel = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__156__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__156__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__156__input_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__156__input_2 = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__156__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__156__input_1 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__156__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__156__sel = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__157__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__157__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__157__input_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__157__input_2 = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__157__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__157__input_1 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__157__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__157__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__158__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__158__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__158__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__158__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__158__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__158__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__159__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__159__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__159__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__159__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__159__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__159__sel = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__160__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__160__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__160__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__160__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__160__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__160__sel = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__162__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__162__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__162__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__162__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__162__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__162__sel = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__163__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__163__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__163__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__163__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__163__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__163__sel = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__164__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__164__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__164__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__164__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__164__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__164__sel = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__165__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__165__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__165__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__165__input_0 = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__165__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__165__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__165__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__165__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__166__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__166__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__166__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__166__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__166__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__166__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__166__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__166__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__167__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__167__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__167__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__167__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__167__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__167__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__167__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__167__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__168__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__168__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__168__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__168__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__168__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__168__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__168__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__168__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__169__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__169__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__169__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__169__input_0 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__169__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__169__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__169__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__169__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__171__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__171__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__171__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__171__input_0 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__171__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__171__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__171__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__171__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__173__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__173__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__173__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__173__input_0 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__173__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__173__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__173__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__173__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__175__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__175__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__175__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__175__input_0 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__175__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__175__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__175__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__175__sel = 0;
    VlWide<4>/*111:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__177__Vfuncout;
    VL_ZERO_W(112, __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__177__Vfuncout);
    VlWide<4>/*111:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__177__arg1;
    VL_ZERO_W(112, __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__177__arg1);
    CData/*5:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__177__arg2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__177__arg2 = 0;
    VlWide<4>/*111:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__178__Vfuncout;
    VL_ZERO_W(112, __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__178__Vfuncout);
    VlWide<4>/*111:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__178__arg1;
    VL_ZERO_W(112, __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__178__arg1);
    CData/*5:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__178__arg2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__178__arg2 = 0;
    VlWide<4>/*111:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__179__Vfuncout;
    VL_ZERO_W(112, __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__179__Vfuncout);
    VlWide<4>/*111:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__179__arg1;
    VL_ZERO_W(112, __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__179__arg1);
    CData/*5:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__179__arg2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__179__arg2 = 0;
    VlWide<4>/*111:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__180__Vfuncout;
    VL_ZERO_W(112, __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__180__Vfuncout);
    VlWide<4>/*111:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__180__arg1;
    VL_ZERO_W(112, __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__180__arg1);
    CData/*5:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__180__arg2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__180__arg2 = 0;
    IData/*22:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__181__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__181__Vfuncout = 0;
    IData/*21:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__181__arg1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__181__arg1 = 0;
    CData/*5:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__181__arg2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__181__arg2 = 0;
    IData/*22:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__182__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__182__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__182__arg1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__182__arg1 = 0;
    CData/*5:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__182__arg2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__182__arg2 = 0;
    IData/*22:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__183__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__183__Vfuncout = 0;
    IData/*21:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__183__arg1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__183__arg1 = 0;
    CData/*5:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__183__arg2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__183__arg2 = 0;
    IData/*22:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__184__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__184__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__184__arg1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__184__arg1 = 0;
    CData/*5:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__184__arg2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__184__arg2 = 0;
    IData/*22:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__185__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__185__Vfuncout = 0;
    IData/*21:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__185__arg1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__185__arg1 = 0;
    CData/*5:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__185__arg2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__185__arg2 = 0;
    IData/*22:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__186__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__186__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__186__arg1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__186__arg1 = 0;
    CData/*5:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__186__arg2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__186__arg2 = 0;
    IData/*22:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__187__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__187__Vfuncout = 0;
    IData/*21:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__187__arg1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__187__arg1 = 0;
    CData/*5:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__187__arg2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__187__arg2 = 0;
    IData/*22:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__188__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__188__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__188__arg1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__188__arg1 = 0;
    CData/*5:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__188__arg2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__188__arg2 = 0;
    QData/*63:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__MUX_v_64_2_2__189__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__MUX_v_64_2_2__189__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__MUX_v_64_2_2__189__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__MUX_v_64_2_2__189__input_0 = 0;
    QData/*63:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__MUX_v_64_2_2__189__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__MUX_v_64_2_2__189__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__MUX_v_64_2_2__189__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__MUX_v_64_2_2__189__sel = 0;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_4;
    VlWide<4>/*127:0*/ __Vtemp_6;
    VlWide<4>/*127:0*/ __Vtemp_8;
    // Body
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_63 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_bypass_1_sva_2)) 
           & (2U != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_65 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_bypass_1_sva_2) 
           & (2U != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_3_nl 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_bypass_1_sva_2) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_bypass_1_sva_st_10));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_ctrl_inst__DOT__chn_in_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_iswt0));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__s 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__reg_cfg_truncate_1_itm) 
            << 4U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__reg_cfg_truncate_1_1_itm));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__MUX_v_64_2_2__189__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_bcwt;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__MUX_v_64_2_2__189__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_d_bfwt;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__MUX_v_64_2_2__189__input_0 
        = ((0U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_alu_dmapack__DOT__pack_cnt))
            ? (((QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_alu_dmapack__DOT__pack_data[1U])) 
                << 0x00000020U) | (QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_alu_dmapack__DOT__pack_data[0U])))
            : ((1U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_alu_dmapack__DOT__pack_cnt))
                ? (((QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_alu_dmapack__DOT__pack_data[3U])) 
                    << 0x00000020U) | (QData)((IData)(
                                                      vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_alu_dmapack__DOT__pack_data[2U])))
                : ((2U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_alu_dmapack__DOT__pack_cnt))
                    ? (((QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_alu_dmapack__DOT__pack_data[5U])) 
                        << 0x00000020U) | (QData)((IData)(
                                                          vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_alu_dmapack__DOT__pack_data[4U])))
                    : ((3U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_alu_dmapack__DOT__pack_cnt))
                        ? (((QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_alu_dmapack__DOT__pack_data[7U])) 
                            << 0x00000020U) | (QData)((IData)(
                                                              vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_alu_dmapack__DOT__pack_data[6U])))
                        : 0ULL))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__MUX_v_64_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__MUX_v_64_2_2__189__sel)
            ? __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__MUX_v_64_2_2__189__input_1
            : __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__MUX_v_64_2_2__189__input_0);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__MUX_v_64_2_2__189__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__MUX_v_64_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__MUX_v_64_2_2__189__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_chn_out_wait_ctrl_inst__DOT__chn_out_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_iswt0));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_ctrl_inst__DOT__chn_in_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_ctrl_inst__DOT__chn_in_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_ctrl_inst__DOT__chn_in_rsci_icwt));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__177__arg2 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__s;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__177__arg1[0U] = 0U;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__177__arg1[1U] 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntMulExt_33U_16U_49U_o_mul_itm_2) 
           << 0x0000001fU);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__177__arg1[2U] 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntMulExt_33U_16U_49U_o_mul_itm_2) 
            >> 1U) | ((IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntMulExt_33U_16U_49U_o_mul_itm_2 
                               >> 0x00000020U)) << 0x0000001fU));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__177__arg1[3U] 
        = ((IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntMulExt_33U_16U_49U_o_mul_itm_2 
                    >> 0x00000020U)) >> 1U);
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[0U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__177__arg1[0U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[1U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__177__arg1[1U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[2U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__177__arg1[2U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[3U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__177__arg1[3U];
    VL_SHIFTRS_WWI(112,112,6, __Vtemp_2, vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__177__arg2));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U] 
        = __Vtemp_2[0U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U] 
        = __Vtemp_2[2U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U] 
        = (0x0000ffffU & __Vtemp_2[3U]);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__177__Vfuncout[0U] 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U];
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__177__Vfuncout[1U] 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U];
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__177__Vfuncout[2U] 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U];
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__177__Vfuncout[3U] 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_1_sva[0U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__177__Vfuncout[0U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_1_sva[1U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__177__Vfuncout[1U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_1_sva[2U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__177__Vfuncout[2U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_1_sva[3U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__177__Vfuncout[3U];
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__178__arg2 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__s;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__178__arg1[0U] = 0U;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__178__arg1[1U] 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntMulExt_33U_16U_49U_o_mul_1_itm_2) 
           << 0x0000001fU);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__178__arg1[2U] 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntMulExt_33U_16U_49U_o_mul_1_itm_2) 
            >> 1U) | ((IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntMulExt_33U_16U_49U_o_mul_1_itm_2 
                               >> 0x00000020U)) << 0x0000001fU));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__178__arg1[3U] 
        = ((IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntMulExt_33U_16U_49U_o_mul_1_itm_2 
                    >> 0x00000020U)) >> 1U);
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result_t[0U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__178__arg1[0U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result_t[1U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__178__arg1[1U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result_t[2U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__178__arg1[2U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result_t[3U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__178__arg1[3U];
    VL_SHIFTRS_WWI(112,112,6, __Vtemp_4, vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__178__arg2));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result[0U] 
        = __Vtemp_4[0U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result[1U] 
        = __Vtemp_4[1U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result[2U] 
        = __Vtemp_4[2U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result[3U] 
        = (0x0000ffffU & __Vtemp_4[3U]);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__178__Vfuncout[0U] 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result[0U];
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__178__Vfuncout[1U] 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result[1U];
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__178__Vfuncout[2U] 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result[2U];
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__178__Vfuncout[3U] 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result[3U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_2_sva[0U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__178__Vfuncout[0U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_2_sva[1U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__178__Vfuncout[1U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_2_sva[2U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__178__Vfuncout[2U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_2_sva[3U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__178__Vfuncout[3U];
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__179__arg2 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__s;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__179__arg1[0U] = 0U;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__179__arg1[1U] 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntMulExt_33U_16U_49U_o_mul_itm_2) 
           << 0x0000001fU);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__179__arg1[2U] 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntMulExt_33U_16U_49U_o_mul_itm_2) 
            >> 1U) | ((IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntMulExt_33U_16U_49U_o_mul_itm_2 
                               >> 0x00000020U)) << 0x0000001fU));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__179__arg1[3U] 
        = ((IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntMulExt_33U_16U_49U_o_mul_itm_2 
                    >> 0x00000020U)) >> 1U);
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[0U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__179__arg1[0U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[1U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__179__arg1[1U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[2U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__179__arg1[2U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[3U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__179__arg1[3U];
    VL_SHIFTRS_WWI(112,112,6, __Vtemp_6, vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__179__arg2));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U] 
        = __Vtemp_6[0U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U] 
        = __Vtemp_6[1U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U] 
        = __Vtemp_6[2U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U] 
        = (0x0000ffffU & __Vtemp_6[3U]);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__179__Vfuncout[0U] 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U];
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__179__Vfuncout[1U] 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U];
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__179__Vfuncout[2U] 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U];
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__179__Vfuncout[3U] 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_3_sva[0U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__179__Vfuncout[0U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_3_sva[1U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__179__Vfuncout[1U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_3_sva[2U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__179__Vfuncout[2U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_3_sva[3U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__179__Vfuncout[3U];
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__180__arg2 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__s;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__180__arg1[0U] = 0U;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__180__arg1[1U] 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntMulExt_33U_16U_49U_o_mul_1_itm_2) 
           << 0x0000001fU);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__180__arg1[2U] 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntMulExt_33U_16U_49U_o_mul_1_itm_2) 
            >> 1U) | ((IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntMulExt_33U_16U_49U_o_mul_1_itm_2 
                               >> 0x00000020U)) << 0x0000001fU));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__180__arg1[3U] 
        = ((IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntMulExt_33U_16U_49U_o_mul_1_itm_2 
                    >> 0x00000020U)) >> 1U);
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result_t[0U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__180__arg1[0U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result_t[1U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__180__arg1[1U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result_t[2U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__180__arg1[2U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result_t[3U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__180__arg1[3U];
    VL_SHIFTRS_WWI(112,112,6, __Vtemp_8, vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__180__arg2));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result[0U] 
        = __Vtemp_8[0U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result[1U] 
        = __Vtemp_8[1U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result[2U] 
        = __Vtemp_8[2U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result[3U] 
        = (0x0000ffffU & __Vtemp_8[3U]);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__180__Vfuncout[0U] 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result[0U];
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__180__Vfuncout[1U] 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result[1U];
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__180__Vfuncout[2U] 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result[2U];
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__180__Vfuncout[3U] 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result[3U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_sva[0U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__180__Vfuncout[0U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_sva[1U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__180__Vfuncout[1U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_sva[2U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__180__Vfuncout[2U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_sva[3U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__180__Vfuncout[3U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_cvt_1_IntSubExt_16U_32U_33U_o_acc_nl 
        = (0x00000003ffffffffULL & (VL_EXTEND_QQ(34,33, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__123__vector 
                            = (0x0000ffffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt));
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__123__Vfuncout 
                            = (((QData)((IData)((0x0001ffffU 
                                                 & (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__123__vector) 
                                                                  >> 0x0fU))))))) 
                                << 0x00000010U) | (QData)((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__123__vector)));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__123__Vfuncout)) 
                                    - VL_EXTEND_QQ(34,33, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__124__vector 
                            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_ew_alu_cvt_offset;
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__124__Vfuncout 
                            = (((QData)((IData)((vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__124__vector 
                                                 >> 0x1fU))) 
                                << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__124__vector)));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__124__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_cvt_3_IntSubExt_16U_32U_33U_o_acc_nl 
        = (0x00000003ffffffffULL & (VL_EXTEND_QQ(34,33, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__125__vector 
                            = (0x0000ffffU & (IData)(
                                                     (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt 
                                                      >> 0x20U)));
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__125__Vfuncout 
                            = (((QData)((IData)((0x0001ffffU 
                                                 & (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__125__vector) 
                                                                  >> 0x0fU))))))) 
                                << 0x00000010U) | (QData)((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__125__vector)));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__125__Vfuncout)) 
                                    - VL_EXTEND_QQ(34,33, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__126__vector 
                            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_ew_alu_cvt_offset;
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__126__Vfuncout 
                            = (((QData)((IData)((vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__126__vector 
                                                 >> 0x1fU))) 
                                << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__126__vector)));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__126__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_cvt_2_IntSubExt_16U_32U_33U_o_acc_1_nl 
        = (0x00000003ffffffffULL & (VL_EXTEND_QQ(34,33, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__127__vector 
                            = (0x0000ffffU & (IData)(
                                                     (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt 
                                                      >> 0x10U)));
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__127__Vfuncout 
                            = (((QData)((IData)((0x0001ffffU 
                                                 & (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__127__vector) 
                                                                  >> 0x0fU))))))) 
                                << 0x00000010U) | (QData)((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__127__vector)));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__127__Vfuncout)) 
                                    - VL_EXTEND_QQ(34,33, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__128__vector 
                            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_ew_alu_cvt_offset;
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__128__Vfuncout 
                            = (((QData)((IData)((vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__128__vector 
                                                 >> 0x1fU))) 
                                << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__128__vector)));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__128__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_cvt_4_IntSubExt_16U_32U_33U_o_acc_1_nl 
        = (0x00000003ffffffffULL & (VL_EXTEND_QQ(34,33, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__129__vector 
                            = (0x0000ffffU & (IData)(
                                                     (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt 
                                                      >> 0x30U)));
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__129__Vfuncout 
                            = (((QData)((IData)((0x0001ffffU 
                                                 & (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__129__vector) 
                                                                  >> 0x0fU))))))) 
                                << 0x00000010U) | (QData)((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__129__vector)));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__129__Vfuncout)) 
                                    - VL_EXTEND_QQ(34,33, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__130__vector 
                            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_ew_alu_cvt_offset;
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__130__Vfuncout 
                            = (((QData)((IData)((vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__130__vector 
                                                 >> 0x1fU))) 
                                << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__130__vector)));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__130__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_land_lpi_1_dfm 
        = ((~ (IData)(((0x7c00000000000000ULL != (0x7c00000000000000ULL 
                                                  & vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt)) 
                       | (0U == (0x000003ffU & (IData)(
                                                       (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt 
                                                        >> 0x00000030U))))))) 
           & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_nan_to_zero));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_land_3_lpi_1_dfm 
        = ((~ (IData)(((0x00007c0000000000ULL != (0x00007c0000000000ULL 
                                                  & vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt)) 
                       | (0U == (0x000003ffU & (IData)(
                                                       (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt 
                                                        >> 0x00000020U))))))) 
           & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_nan_to_zero));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_land_2_lpi_1_dfm 
        = ((~ (IData)(((0x000000007c000000ULL != (0x000000007c000000ULL 
                                                  & vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt)) 
                       | (0U == (0x000003ffU & (IData)(
                                                       (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt 
                                                        >> 0x00000010U))))))) 
           & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_nan_to_zero));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_land_1_lpi_1_dfm 
        = ((~ (IData)(((0x0000000000007c00ULL != (0x0000000000007c00ULL 
                                                  & vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt)) 
                       | (0U == (0x000003ffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt)))))) 
           & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_nan_to_zero));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_chn_out_wait_ctrl_inst__DOT__chn_out_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_chn_out_wait_ctrl_inst__DOT__chn_out_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_chn_out_wait_ctrl_inst__DOT__chn_out_rsci_icwt));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__chn_in_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_ld_core_psct) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_ctrl_inst__DOT__chn_in_rsci_ogwt));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_ctrl_inst__DOT__chn_in_rsci_ogwt) 
           & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_alu_dmapack__DOT__pack_pvld));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_obits_fixed_and_nl 
        = (1U & ((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_1_sva[1U] 
                  >> 0x0000001eU) & (((0U != vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_1_sva[0U]) 
                                      | (0U != (0x3fffffffU 
                                                & vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_1_sva[1U]))) 
                                     | (~ (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_1_sva[3U] 
                                           >> 0x0000000fU)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_obits_fixed_and_2_nl 
        = (1U & ((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_2_sva[1U] 
                  >> 0x0000001eU) & (((0U != vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_2_sva[0U]) 
                                      | (0U != (0x3fffffffU 
                                                & vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_2_sva[1U]))) 
                                     | (~ (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_2_sva[3U] 
                                           >> 0x0000000fU)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_obits_fixed_and_nl 
        = (1U & ((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_3_sva[1U] 
                  >> 0x0000001eU) & (((0U != vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_3_sva[0U]) 
                                      | (0U != (0x3fffffffU 
                                                & vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_3_sva[1U]))) 
                                     | (~ (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_3_sva[3U] 
                                           >> 0x0000000fU)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_obits_fixed_and_2_nl 
        = (1U & ((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_sva[1U] 
                  >> 0x0000001eU) & (((0U != vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_sva[0U]) 
                                      | (0U != (0x3fffffffU 
                                                & vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_sva[1U]))) 
                                     | (~ (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_sva[3U] 
                                           >> 0x0000000fU)))));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__16__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_land_lpi_1_dfm)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__16__input_1 
        = (0x0000001fU & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt 
                                  >> 0x3aU)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__16__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__16__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__16__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_lpi_1_dfm 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__16__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__14__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_land_lpi_1_dfm)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__14__input_1 
        = (0x000003ffU & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt 
                                  >> 0x30U)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__14__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__14__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__14__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_lpi_1_dfm 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__14__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__19__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_land_3_lpi_1_dfm)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__19__input_1 
        = (0x0000001fU & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt 
                                  >> 0x2aU)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__19__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__19__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__19__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_3_lpi_1_dfm 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__19__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__17__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_land_3_lpi_1_dfm)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__17__input_1 
        = (0x000003ffU & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt 
                                  >> 0x20U)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__17__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__17__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__17__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_3_lpi_1_dfm 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__17__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__22__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_land_2_lpi_1_dfm)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__22__input_1 
        = (0x0000001fU & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt 
                                  >> 0x1aU)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__22__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__22__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__22__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_2_lpi_1_dfm 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__22__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__20__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_land_2_lpi_1_dfm)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__20__input_1 
        = (0x000003ffU & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt 
                                  >> 0x10U)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__20__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__20__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__20__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_2_lpi_1_dfm 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__20__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__25__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_land_1_lpi_1_dfm)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__25__input_1 
        = (0x0000001fU & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt 
                                  >> 0x0aU)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__25__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__25__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__25__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_1_lpi_1_dfm 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__25__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__23__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_land_1_lpi_1_dfm)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__23__input_1 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__23__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__23__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__23__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_1_lpi_1_dfm 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__23__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_chn_out_wait_dp_inst__DOT__chn_out_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_chn_out_wait_ctrl_inst__DOT__chn_out_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_core__DOT__Y_alu_inst__DOT__Y_alu_core_inst__DOT__chn_alu_op_rsci_ld_core_psct) 
              & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_core__DOT__Y_alu_inst__DOT__Y_alu_core_inst__DOT__Y_alu_core_chn_alu_op_rsci_inst__DOT__Y_alu_core_chn_alu_op_rsci_chn_alu_op_wait_ctrl_inst__DOT__chn_alu_op_rsci_ogwt)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_biwt));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_1_sva 
        = (0x0007ffffffffffffULL & (VL_EXTEND_QQ(51,50, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__28__vector 
                            = (0x0001ffffffffffffULL 
                               & (((QData)((IData)(
                                                   vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_1_sva[3U])) 
                                   << 0x00000021U) 
                                  | (((QData)((IData)(
                                                      vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_1_sva[2U])) 
                                      << 1U) | ((QData)((IData)(
                                                                vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_1_sva[1U])) 
                                                >> 0x0000001fU))));
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__28__Vfuncout 
                            = (((QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__28__vector 
                                                            >> 0x30U))))) 
                                << 0x00000031U) | vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__28__vector);
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__28__Vfuncout)) 
                                    + VL_EXTEND_QQ(51,50, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2s_1_50__29__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_obits_fixed_and_nl;
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2s_1_50__29__Vfuncout 
                            = (QData)((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2s_1_50__29__vector));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2s_1_50__29__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_2_sva 
        = (0x0007ffffffffffffULL & (VL_EXTEND_QQ(51,50, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__32__vector 
                            = (0x0001ffffffffffffULL 
                               & (((QData)((IData)(
                                                   vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_2_sva[3U])) 
                                   << 0x00000021U) 
                                  | (((QData)((IData)(
                                                      vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_2_sva[2U])) 
                                      << 1U) | ((QData)((IData)(
                                                                vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_2_sva[1U])) 
                                                >> 0x0000001fU))));
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__32__Vfuncout 
                            = (((QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__32__vector 
                                                            >> 0x30U))))) 
                                << 0x00000031U) | vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__32__vector);
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__32__Vfuncout)) 
                                    + VL_EXTEND_QQ(51,50, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2s_1_50__33__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_obits_fixed_and_2_nl;
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2s_1_50__33__Vfuncout 
                            = (QData)((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2s_1_50__33__vector));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2s_1_50__33__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_3_sva 
        = (0x0007ffffffffffffULL & (VL_EXTEND_QQ(51,50, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__36__vector 
                            = (0x0001ffffffffffffULL 
                               & (((QData)((IData)(
                                                   vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_3_sva[3U])) 
                                   << 0x00000021U) 
                                  | (((QData)((IData)(
                                                      vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_3_sva[2U])) 
                                      << 1U) | ((QData)((IData)(
                                                                vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_3_sva[1U])) 
                                                >> 0x0000001fU))));
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__36__Vfuncout 
                            = (((QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__36__vector 
                                                            >> 0x30U))))) 
                                << 0x00000031U) | vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__36__vector);
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__36__Vfuncout)) 
                                    + VL_EXTEND_QQ(51,50, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2s_1_50__37__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_obits_fixed_and_nl;
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2s_1_50__37__Vfuncout 
                            = (QData)((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2s_1_50__37__vector));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2s_1_50__37__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_sva 
        = (0x0007ffffffffffffULL & (VL_EXTEND_QQ(51,50, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__40__vector 
                            = (0x0001ffffffffffffULL 
                               & (((QData)((IData)(
                                                   vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_sva[3U])) 
                                   << 0x00000021U) 
                                  | (((QData)((IData)(
                                                      vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_sva[2U])) 
                                      << 1U) | ((QData)((IData)(
                                                                vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_sva[1U])) 
                                                >> 0x0000001fU))));
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__40__Vfuncout 
                            = (((QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__40__vector 
                                                            >> 0x30U))))) 
                                << 0x00000031U) | vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__40__vector);
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__40__Vfuncout)) 
                                    + VL_EXTEND_QQ(51,50, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2s_1_50__41__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_obits_fixed_and_2_nl;
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2s_1_50__41__Vfuncout 
                            = (QData)((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2s_1_50__41__vector));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2s_1_50__41__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_aelse_not_11_nl 
        = ((0U == (0x000003ffU & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt 
                                          >> 0x00000030U)))) 
           | (0x1fU != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_lpi_1_dfm)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__c_h_1_2 
        = (IData)((0U == (0x03c0U & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_lpi_1_dfm))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3 
        = (IData)((0U == (0x003cU & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_lpi_1_dfm))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_aelse_not_10_nl 
        = ((0U == (0x000003ffU & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt 
                                          >> 0x00000020U)))) 
           | (0x1fU != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_3_lpi_1_dfm)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__c_h_1_2 
        = (IData)((0U == (0x03c0U & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_3_lpi_1_dfm))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3 
        = (IData)((0U == (0x003cU & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_3_lpi_1_dfm))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_aelse_not_9_nl 
        = ((0U == (0x000003ffU & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt 
                                          >> 0x00000010U)))) 
           | (0x1fU != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_2_lpi_1_dfm)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__c_h_1_2 
        = (IData)((0U == (0x03c0U & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_2_lpi_1_dfm))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3 
        = (IData)((0U == (0x003cU & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_2_lpi_1_dfm))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_aelse_not_8_nl 
        = ((0U == (0x000003ffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt))) 
           | (0x1fU != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_1_lpi_1_dfm)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__c_h_1_2 
        = (IData)((0U == (0x03c0U & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_1_lpi_1_dfm))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3 
        = (IData)((0U == (0x003cU & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_1_lpi_1_dfm))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_chn_out_wait_dp_inst__DOT__chn_out_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_chn_out_wait_dp_inst__DOT__chn_out_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_chn_out_wait_dp_inst__DOT__chn_out_rsci_biwt));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl 
        = (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_proc_precision) 
            >> 1U) & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_bawt));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_and_unfl_1_sva 
        = ((IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_1_sva 
                    >> 0x00000031U)) & (0x0003ffffU 
                                        != (0x0003ffffU 
                                            & (IData)(
                                                      (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_1_sva 
                                                       >> 0x0000001fU)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_nor_ovfl_1_sva 
        = (1U & (~ ((IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_1_sva 
                             >> 0x00000031U)) | (0U 
                                                 == 
                                                 (0x0003ffffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_1_sva 
                                                             >> 0x0000001fU)))))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_and_unfl_2_sva 
        = ((IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_2_sva 
                    >> 0x00000031U)) & (0x0003ffffU 
                                        != (0x0003ffffU 
                                            & (IData)(
                                                      (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_2_sva 
                                                       >> 0x0000001fU)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_nor_ovfl_2_sva 
        = (1U & (~ ((IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_2_sva 
                             >> 0x00000031U)) | (0U 
                                                 == 
                                                 (0x0003ffffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_2_sva 
                                                             >> 0x0000001fU)))))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_and_unfl_3_sva 
        = ((IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_3_sva 
                    >> 0x00000031U)) & (0x0003ffffU 
                                        != (0x0003ffffU 
                                            & (IData)(
                                                      (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_3_sva 
                                                       >> 0x0000001fU)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_nor_ovfl_3_sva 
        = (1U & (~ ((IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_3_sva 
                             >> 0x00000031U)) | (0U 
                                                 == 
                                                 (0x0003ffffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_3_sva 
                                                             >> 0x0000001fU)))))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_and_unfl_sva 
        = ((IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_sva 
                    >> 0x00000031U)) & (0x0003ffffU 
                                        != (0x0003ffffU 
                                            & (IData)(
                                                      (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_sva 
                                                       >> 0x0000001fU)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_nor_ovfl_sva 
        = (1U & (~ ((IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_sva 
                             >> 0x00000031U)) | (0U 
                                                 == 
                                                 (0x0003ffffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_sva 
                                                             >> 0x0000001fU)))))));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__42__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_aelse_not_11_nl)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__42__input_1 
        = (0x000003ffU & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt 
                                  >> 0x30U)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__42__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__42__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__42__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_9_0_lpi_1_dfm 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__42__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__15__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_aelse_not_11_nl;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__15__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_lpi_1_dfm;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__15__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__15__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__15__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_22_13_lpi_1_dfm 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__15__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__c_h_1_6 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__c_h_1_2) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__43__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_aelse_not_10_nl)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__43__input_1 
        = (0x000003ffU & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt 
                                  >> 0x20U)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__43__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__43__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__43__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_9_0_3_lpi_1_dfm 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__43__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__18__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_aelse_not_10_nl;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__18__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_3_lpi_1_dfm;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__18__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__18__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__18__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_22_13_3_lpi_1_dfm 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__18__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__c_h_1_6 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__c_h_1_2) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__44__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_aelse_not_9_nl)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__44__input_1 
        = (0x000003ffU & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt 
                                  >> 0x10U)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__44__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__44__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__44__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_9_0_2_lpi_1_dfm 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__44__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__21__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_aelse_not_9_nl;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__21__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_2_lpi_1_dfm;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__21__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__21__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__21__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_22_13_2_lpi_1_dfm 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__21__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__c_h_1_6 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__c_h_1_2) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__45__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_aelse_not_8_nl)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__45__input_1 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__45__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__45__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__45__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_9_0_1_lpi_1_dfm 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__45__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__24__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_aelse_not_8_nl;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__24__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_1_lpi_1_dfm;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__24__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__24__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__24__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_22_13_1_lpi_1_dfm 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__24__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__c_h_1_6 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__c_h_1_2) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3));
    vlSelfRef.__PVT__chn_out_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_chn_out_wait_dp_inst__DOT__chn_out_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__reg_chn_out_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl_17 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_chn_out_wait_dp_inst__DOT__chn_out_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__reg_chn_out_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_110_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__reg_chn_out_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_chn_out_wait_dp_inst__DOT__chn_out_rsci_bawt)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_obits_fixed_nor_2_nl 
        = (0x3fffffffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__26__sel 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_nor_ovfl_1_sva;
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__26__input_0 
                        = (0x3fffffffU & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_1_sva 
                                                  >> 1U)));
                    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__26__sel)
                            ? 0x3fffffffU : vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__26__input_0);
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__26__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__Vstatic__result;
                }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__26__Vfuncout)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__115__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_bypass_1_sva_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__115__input_1 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__data_in_data_sva_78));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__115__input_0 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_nor_ovfl_1_sva) 
                        | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_1_sva))) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_and_unfl_1_sva))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__115__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__115__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__115__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__115__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_mux_39_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__115__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__116__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_bypass_1_sva_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__116__input_1 
        = (1U & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__data_in_data_sva_78 
                         >> 0x0fU)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__116__input_0 
        = (1U & (~ ((~ ((IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_1_sva 
                                 >> 0x0000001fU)) | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_and_unfl_1_sva))) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_nor_ovfl_1_sva))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__116__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__116__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__116__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__116__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_mux_40_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__116__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_obits_fixed_nor_7_nl 
        = (0x3fffffffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__30__sel 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_nor_ovfl_2_sva;
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__30__input_0 
                        = (0x3fffffffU & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_2_sva 
                                                  >> 1U)));
                    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__30__sel)
                            ? 0x3fffffffU : vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__30__input_0);
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__30__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__Vstatic__result;
                }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__30__Vfuncout)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__117__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_bypass_1_sva_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__117__input_1 
        = (1U & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__data_in_data_sva_78 
                         >> 0x10U)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__117__input_0 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_nor_ovfl_2_sva) 
                        | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_2_sva))) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_and_unfl_2_sva))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__117__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__117__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__117__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__117__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_mux_41_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__117__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__118__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_bypass_1_sva_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__118__input_1 
        = (1U & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__data_in_data_sva_78 
                         >> 0x1fU)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__118__input_0 
        = (1U & (~ ((~ ((IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_2_sva 
                                 >> 0x0000001fU)) | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_and_unfl_2_sva))) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_nor_ovfl_2_sva))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__118__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__118__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__118__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__118__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_mux_42_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__118__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_obits_fixed_nor_2_nl 
        = (0x3fffffffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__34__sel 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_nor_ovfl_3_sva;
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__34__input_0 
                        = (0x3fffffffU & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_3_sva 
                                                  >> 1U)));
                    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__34__sel)
                            ? 0x3fffffffU : vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__34__input_0);
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__34__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__Vstatic__result;
                }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__34__Vfuncout)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__119__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_bypass_1_sva_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__119__input_1 
        = (1U & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__data_in_data_sva_78 
                         >> 0x20U)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__119__input_0 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_nor_ovfl_3_sva) 
                        | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_3_sva))) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_and_unfl_3_sva))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__119__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__119__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__119__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__119__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_mux_43_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__119__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__120__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_bypass_1_sva_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__120__input_1 
        = (1U & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__data_in_data_sva_78 
                         >> 0x2fU)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__120__input_0 
        = (1U & (~ ((~ ((IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_3_sva 
                                 >> 0x0000001fU)) | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_and_unfl_3_sva))) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_nor_ovfl_3_sva))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__120__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__120__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__120__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__120__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_mux_44_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__120__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_obits_fixed_nor_7_nl 
        = (0x3fffffffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__38__sel 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_nor_ovfl_sva;
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__38__input_0 
                        = (0x3fffffffU & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_sva 
                                                  >> 1U)));
                    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__38__sel)
                            ? 0x3fffffffU : vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__38__input_0);
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__38__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__Vstatic__result;
                }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__38__Vfuncout)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__121__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_bypass_1_sva_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__121__input_1 
        = (1U & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__data_in_data_sva_78 
                         >> 0x30U)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__121__input_0 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_nor_ovfl_sva) 
                        | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_sva))) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_and_unfl_sva))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__121__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__121__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__121__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__121__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_mux_45_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__121__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__122__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_bypass_1_sva_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__122__input_1 
        = (1U & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__data_in_data_sva_78 
                         >> 0x3fU)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__122__input_0 
        = (1U & (~ ((~ ((IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_sva 
                                 >> 0x0000001fU)) | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_and_unfl_sva))) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_nor_ovfl_sva))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__122__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__122__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__122__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__122__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_mux_46_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__122__Vfuncout;
    NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_10 
        = ((0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_22_13_lpi_1_dfm)) 
           | (0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_9_0_lpi_1_dfm)));
    NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_6 
        = (IData)((((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_lpi_1_dfm) 
                    >> 9U) | (0U != (0x01ffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_22_13_lpi_1_dfm)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__c_h_1_10 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__c_h_1_6) 
           & (0U == (3U & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_lpi_1_dfm))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_and_85_nl 
        = ((0U != (3U & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_lpi_1_dfm))) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__c_h_1_6));
    NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_11 
        = ((0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_22_13_3_lpi_1_dfm)) 
           | (0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_9_0_3_lpi_1_dfm)));
    NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_7 
        = (IData)((((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_3_lpi_1_dfm) 
                    >> 9U) | (0U != (0x01ffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_22_13_3_lpi_1_dfm)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__c_h_1_10 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__c_h_1_6) 
           & (0U == (3U & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_3_lpi_1_dfm))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_and_85_nl 
        = ((0U != (3U & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_3_lpi_1_dfm))) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__c_h_1_6));
    NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_12 
        = ((0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_22_13_2_lpi_1_dfm)) 
           | (0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_9_0_2_lpi_1_dfm)));
    NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_8 
        = (IData)((((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_2_lpi_1_dfm) 
                    >> 9U) | (0U != (0x01ffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_22_13_2_lpi_1_dfm)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__c_h_1_10 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__c_h_1_6) 
           & (0U == (3U & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_2_lpi_1_dfm))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_and_85_nl 
        = ((0U != (3U & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_2_lpi_1_dfm))) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__c_h_1_6));
    NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_9 
        = (IData)((((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_1_lpi_1_dfm) 
                    >> 9U) | (0U != (0x01ffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_22_13_1_lpi_1_dfm)))));
    NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_13 
        = ((0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_22_13_1_lpi_1_dfm)) 
           | (0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_9_0_1_lpi_1_dfm)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__c_h_1_10 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__c_h_1_6) 
           & (0U == (3U & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_1_lpi_1_dfm))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_and_85_nl 
        = ((0U != (3U & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_1_lpi_1_dfm))) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__c_h_1_6));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl_23 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__main_stage_v_1)) 
           & (IData)(vlSelfRef.__PVT__chn_out_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__main_stage_v_1_mx0c1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_110_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_bawt)) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__main_stage_v_1)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl_19 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_110_cse) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__main_stage_v_1));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_s_1_1_2__12__sel 
        = (((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_proc_precision)) 
            & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_110_cse) 
               & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl) 
                  & (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_core_fsm_inst__DOT__state_var)
                       ? 2U : 1U) >> 1U)))) | ((IData)(vlSelfRef.__PVT__chn_out_rsci_unreg_inst__DOT__in_0) 
                                               & ((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_proc_precision)) 
                                                  & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_s_1_1_2__12__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_s_1_1_2__12__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_NV_NVDLA_SDP_CORE_Y_cvt_core_nvdla_float_h_ln433_assert_iExpoWidth_le_oExpoWidth_1_sig_mx0w1 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_s_1_1_2__12__Vfuncout;
    vlSelfRef.__PVT__chn_in_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_110_cse) 
           & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_bawt) 
              & (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__10__sel 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__main_stage_v_1)) 
                    | (2U != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6)))));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__10__input_1 
        = (1U & (~ (((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_bawt)) 
                     | (2U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_proc_precision))) 
                    & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_110_cse))));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__10__input_0 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_bawt) 
           & ((2U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_proc_precision)) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_110_cse)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__10__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__10__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__10__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__10__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_25_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__10__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__8__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_110_cse;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__8__input_1 
        = (1U & (~ ((2U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_proc_precision)) 
                    | ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_bawt)) 
                       | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_ew_alu_cvt_bypass)))));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__8__input_0 
        = (1U & (~ ((2U == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_8)) 
                    | ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__main_stage_v_1)) 
                       | ((2U == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6)) 
                          | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_3_nl))))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__8__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__8__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__8__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__8__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_19_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__8__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_6_mdf 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_110_cse));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_tmp_5 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_110_cse)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__46__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_bawt;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__46__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_110_cse)) 
                 | (2U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_proc_precision))));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__46__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_110_cse)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__46__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__46__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__46__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__46__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_tmp 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__46__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl_7 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_110_cse) 
           & (2U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_proc_precision)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_else_o_tct_30_1_1_sva 
        = (0x3fffffffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__27__sel 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_and_unfl_1_sva;
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__27__input_0 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_obits_fixed_nor_2_nl;
                    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__27__sel)
                            ? 0x3fffffffU : vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__27__input_0);
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__27__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__Vstatic__result;
                }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__27__Vfuncout)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_else_o_tct_30_1_2_sva 
        = (0x3fffffffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__31__sel 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_and_unfl_2_sva;
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__31__input_0 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_obits_fixed_nor_7_nl;
                    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__31__sel)
                            ? 0x3fffffffU : vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__31__input_0);
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__31__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__Vstatic__result;
                }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__31__Vfuncout)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_else_o_tct_30_1_3_sva 
        = (0x3fffffffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__35__sel 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_and_unfl_3_sva;
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__35__input_0 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_obits_fixed_nor_2_nl;
                    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__35__sel)
                            ? 0x3fffffffU : vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__35__input_0);
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__35__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__Vstatic__result;
                }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__35__Vfuncout)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_else_o_tct_30_1_sva 
        = (0x3fffffffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__39__sel 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_and_unfl_sva;
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__39__input_0 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_obits_fixed_nor_7_nl;
                    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__39__sel)
                            ? 0x3fffffffU : vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__39__input_0);
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__39__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__Vstatic__result;
                }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__39__Vfuncout)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_1_IsNaN_5U_23U_1_IsNaN_5U_23U_1_and_3_tmp 
        = ((IData)(NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_10) 
           & (0x1fU == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_lpi_1_dfm)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_lpi_1_dfm 
        = (1U & (~ ((0x1fU != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_lpi_1_dfm)) 
                    | (IData)(NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_10))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_exs_71_0 
        = ((0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_lpi_1_dfm)) 
           | (IData)(NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_6));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsDenorm_5U_23U_land_lpi_1_dfm 
        = ((IData)(NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_6) 
           & (0U == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_lpi_1_dfm)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__rtn 
        = ((((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__c_h_1_10) 
             << 4U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_and_85_nl) 
                        << 3U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__c_h_1_2) 
                                   & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3)) 
                                      | (0U == (3U 
                                                & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_lpi_1_dfm))))) 
                                  << 2U))) | (((IData)(
                                                       (((0U 
                                                          == 
                                                          (0x0300U 
                                                           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_lpi_1_dfm))) 
                                                         & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_and_85_nl))) 
                                                        & ((0U 
                                                            != 
                                                            (0x00c0U 
                                                             & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_lpi_1_dfm))) 
                                                           | (0U 
                                                              == 
                                                              (3U 
                                                               & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_lpi_1_dfm) 
                                                                  >> 4U)))))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_lpi_1_dfm) 
                                                       >> 9U) 
                                                      | ((1U 
                                                          == 
                                                          (3U 
                                                           & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_lpi_1_dfm) 
                                                              >> 7U))) 
                                                         | (((((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_lpi_1_dfm) 
                                                               >> 5U) 
                                                              | (1U 
                                                                 == 
                                                                 (3U 
                                                                  & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_lpi_1_dfm) 
                                                                     >> 3U)))) 
                                                             & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__c_h_1_2)) 
                                                            | (((((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_lpi_1_dfm) 
                                                                  >> 1U) 
                                                                 | (1U 
                                                                    == 
                                                                    (2U 
                                                                     & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_lpi_1_dfm) 
                                                                        << 1U)))) 
                                                                & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__c_h_1_6)) 
                                                               | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__c_h_1_10)))))) 
                                                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__c_h_1_10)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_1_IsNaN_5U_23U_1_IsNaN_5U_23U_1_and_2_tmp 
        = ((IData)(NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_11) 
           & (0x1fU == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_3_lpi_1_dfm)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_3_lpi_1_dfm 
        = (1U & (~ ((0x1fU != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_3_lpi_1_dfm)) 
                    | (IData)(NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_11))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_exs_79_0 
        = ((0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_3_lpi_1_dfm)) 
           | (IData)(NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_7));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsDenorm_5U_23U_land_3_lpi_1_dfm 
        = ((IData)(NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_7) 
           & (0U == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_3_lpi_1_dfm)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__rtn 
        = ((((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__c_h_1_10) 
             << 4U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_and_85_nl) 
                        << 3U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__c_h_1_2) 
                                   & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3)) 
                                      | (0U == (3U 
                                                & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_3_lpi_1_dfm))))) 
                                  << 2U))) | (((IData)(
                                                       (((0U 
                                                          == 
                                                          (0x0300U 
                                                           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_3_lpi_1_dfm))) 
                                                         & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_and_85_nl))) 
                                                        & ((0U 
                                                            != 
                                                            (0x00c0U 
                                                             & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_3_lpi_1_dfm))) 
                                                           | (0U 
                                                              == 
                                                              (3U 
                                                               & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_3_lpi_1_dfm) 
                                                                  >> 4U)))))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_3_lpi_1_dfm) 
                                                       >> 9U) 
                                                      | ((1U 
                                                          == 
                                                          (3U 
                                                           & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_3_lpi_1_dfm) 
                                                              >> 7U))) 
                                                         | (((((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_3_lpi_1_dfm) 
                                                               >> 5U) 
                                                              | (1U 
                                                                 == 
                                                                 (3U 
                                                                  & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_3_lpi_1_dfm) 
                                                                     >> 3U)))) 
                                                             & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__c_h_1_2)) 
                                                            | (((((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_3_lpi_1_dfm) 
                                                                  >> 1U) 
                                                                 | (1U 
                                                                    == 
                                                                    (2U 
                                                                     & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_3_lpi_1_dfm) 
                                                                        << 1U)))) 
                                                                & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__c_h_1_6)) 
                                                               | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__c_h_1_10)))))) 
                                                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__c_h_1_10)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_1_IsNaN_5U_23U_1_IsNaN_5U_23U_1_and_1_tmp 
        = ((IData)(NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_12) 
           & (0x1fU == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_2_lpi_1_dfm)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_2_lpi_1_dfm 
        = (1U & (~ ((0x1fU != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_2_lpi_1_dfm)) 
                    | (IData)(NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_12))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_exs_87_0 
        = ((0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_2_lpi_1_dfm)) 
           | (IData)(NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_8));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsDenorm_5U_23U_land_2_lpi_1_dfm 
        = ((IData)(NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_8) 
           & (0U == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_2_lpi_1_dfm)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__rtn 
        = ((((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__c_h_1_10) 
             << 4U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_and_85_nl) 
                        << 3U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__c_h_1_2) 
                                   & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3)) 
                                      | (0U == (3U 
                                                & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_2_lpi_1_dfm))))) 
                                  << 2U))) | (((IData)(
                                                       (((0U 
                                                          == 
                                                          (0x0300U 
                                                           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_2_lpi_1_dfm))) 
                                                         & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_and_85_nl))) 
                                                        & ((0U 
                                                            != 
                                                            (0x00c0U 
                                                             & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_2_lpi_1_dfm))) 
                                                           | (0U 
                                                              == 
                                                              (3U 
                                                               & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_2_lpi_1_dfm) 
                                                                  >> 4U)))))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_2_lpi_1_dfm) 
                                                       >> 9U) 
                                                      | ((1U 
                                                          == 
                                                          (3U 
                                                           & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_2_lpi_1_dfm) 
                                                              >> 7U))) 
                                                         | (((((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_2_lpi_1_dfm) 
                                                               >> 5U) 
                                                              | (1U 
                                                                 == 
                                                                 (3U 
                                                                  & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_2_lpi_1_dfm) 
                                                                     >> 3U)))) 
                                                             & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__c_h_1_2)) 
                                                            | (((((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_2_lpi_1_dfm) 
                                                                  >> 1U) 
                                                                 | (1U 
                                                                    == 
                                                                    (2U 
                                                                     & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_2_lpi_1_dfm) 
                                                                        << 1U)))) 
                                                                & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__c_h_1_6)) 
                                                               | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__c_h_1_10)))))) 
                                                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__c_h_1_10)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_exs_95_0 
        = ((0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_1_lpi_1_dfm)) 
           | (IData)(NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_9));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsDenorm_5U_23U_land_1_lpi_1_dfm 
        = ((IData)(NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_9) 
           & (0U == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_1_lpi_1_dfm)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_1_IsNaN_5U_23U_1_IsNaN_5U_23U_1_and_tmp 
        = ((IData)(NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_13) 
           & (0x1fU == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_1_lpi_1_dfm)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_1_lpi_1_dfm 
        = (1U & (~ ((0x1fU != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_1_lpi_1_dfm)) 
                    | (IData)(NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_13))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__rtn 
        = ((((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__c_h_1_10) 
             << 4U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_and_85_nl) 
                        << 3U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__c_h_1_2) 
                                   & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3)) 
                                      | (0U == (3U 
                                                & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_1_lpi_1_dfm))))) 
                                  << 2U))) | (((IData)(
                                                       (((0U 
                                                          == 
                                                          (0x0300U 
                                                           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_1_lpi_1_dfm))) 
                                                         & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_and_85_nl))) 
                                                        & ((0U 
                                                            != 
                                                            (0x00c0U 
                                                             & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_1_lpi_1_dfm))) 
                                                           | (0U 
                                                              == 
                                                              (3U 
                                                               & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_1_lpi_1_dfm) 
                                                                  >> 4U)))))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_1_lpi_1_dfm) 
                                                       >> 9U) 
                                                      | ((1U 
                                                          == 
                                                          (3U 
                                                           & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_1_lpi_1_dfm) 
                                                              >> 7U))) 
                                                         | (((((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_1_lpi_1_dfm) 
                                                               >> 5U) 
                                                              | (1U 
                                                                 == 
                                                                 (3U 
                                                                  & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_1_lpi_1_dfm) 
                                                                     >> 3U)))) 
                                                             & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__c_h_1_2)) 
                                                            | (((((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_1_lpi_1_dfm) 
                                                                  >> 1U) 
                                                                 | (1U 
                                                                    == 
                                                                    (2U 
                                                                     & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_1_lpi_1_dfm) 
                                                                        << 1U)))) 
                                                                & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__c_h_1_6)) 
                                                               | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__c_h_1_10)))))) 
                                                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__c_h_1_10)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl_22 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl_19) 
           & (2U == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_in_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_bawt)) 
                 & ((~ (IData)(vlSelfRef.__PVT__chn_out_rsci_unreg_inst__DOT__in_0)) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_chn_out_wait_dp_inst__DOT__chn_out_rsci_bawt))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_ld_core_psct_mx0c0 
        = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_6_mdf) 
                 | ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__11__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__11__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_110_cse)) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_bawt)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__11__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_6_mdf;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__11__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__11__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__11__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__11__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_9_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__11__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_s_1_1_2__13__sel 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl_7) 
            & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_bawt) 
               & ((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_ew_alu_cvt_bypass)) 
                  & (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_core_fsm_inst__DOT__state_var)
                       ? 2U : 1U) >> 1U)))) | ((2U 
                                                != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_proc_precision)) 
                                               & ((IData)(vlSelfRef.__PVT__chn_out_rsci_unreg_inst__DOT__in_0) 
                                                  & ((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_ew_alu_cvt_bypass)) 
                                                     & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_bawt)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_s_1_1_2__13__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_s_1_1_2__13__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_NV_NVDLA_SDP_CORE_Y_cvt_core_nvdla_int_h_ln346_assert_oWidth_ge_aWidth_p_bWidth_sig_mx0w1 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_s_1_1_2__13__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__6__sel 
        = (2U != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__6__input_1 
        = ((2U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_proc_precision)) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl_17));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__6__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl_7;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__6__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__6__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__6__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__6__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_30_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__6__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_tmp 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl_7));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_3_nl 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_lpi_1_dfm) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsDenorm_5U_23U_land_lpi_1_dfm));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__175__sel 
        = (IData)(((0ULL == (0x7c00000000000000ULL 
                             & vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt)) 
                   & (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_core_fsm_inst__DOT__state_var)
                        ? 2U : 1U) >> 1U)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__175__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__rtn;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__175__input_0 
        = (6U | (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_lpi_1_dfm) 
                       >> 4U)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__175__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__175__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__175__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__175__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_else_mux_7_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__175__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_2_nl 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_3_lpi_1_dfm) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsDenorm_5U_23U_land_3_lpi_1_dfm));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__173__sel 
        = (IData)(((0ULL == (0x00007c0000000000ULL 
                             & vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt)) 
                   & (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_core_fsm_inst__DOT__state_var)
                        ? 2U : 1U) >> 1U)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__173__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__rtn;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__173__input_0 
        = (6U | (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_3_lpi_1_dfm) 
                       >> 4U)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__173__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__173__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__173__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__173__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_else_mux_6_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__173__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_1_nl 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_2_lpi_1_dfm) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsDenorm_5U_23U_land_2_lpi_1_dfm));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__171__sel 
        = (IData)(((0ULL == (0x000000007c000000ULL 
                             & vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt)) 
                   & (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_core_fsm_inst__DOT__state_var)
                        ? 2U : 1U) >> 1U)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__171__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__rtn;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__171__input_0 
        = (6U | (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_2_lpi_1_dfm) 
                       >> 4U)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__171__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__171__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__171__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__171__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_else_mux_5_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__171__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_nl 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_1_lpi_1_dfm) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsDenorm_5U_23U_land_1_lpi_1_dfm));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__169__sel 
        = (IData)(((0ULL == (0x0000000000007c00ULL 
                             & vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt)) 
                   & (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_core_fsm_inst__DOT__state_var)
                        ? 2U : 1U) >> 1U)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__169__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__rtn;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__169__input_0 
        = (6U | (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_1_lpi_1_dfm) 
                       >> 4U)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__169__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__169__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__169__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__169__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_else_mux_4_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__169__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_and_cse 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__main_stage_v_1)) 
               | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl_17))) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_14 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl_17)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_core_fsm_inst__DOT__core_wen));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__9__sel 
        = ((2U != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__main_stage_v_1));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__9__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_tmp;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__9__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_tmp;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__9__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__9__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__9__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__9__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_47_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__9__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_tmp_3 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_ew_alu_cvt_bypass) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_tmp));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_tmp_2 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_tmp)) 
                 | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_ew_alu_cvt_bypass)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__47__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__47__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_tmp;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__47__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_tmp;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__47__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__47__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__47__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__47__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_tmp_1 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__47__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_dcpl_10 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_110_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_3_nl)) 
              | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_1_IsNaN_5U_23U_1_IsNaN_5U_23U_1_and_3_tmp)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__139__sel 
        = ((4U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_3_nl)) 
                  << 2U)) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsDenorm_5U_23U_land_lpi_1_dfm) 
                              << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_lpi_1_dfm)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__139__input_1 
        = (0x0000000fU & ((IData)(1U) + (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__rtn))));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__139__input_2 
        = (0x0000000fU & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_lpi_1_dfm));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = (0x0eU & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__139__sel)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__139__input_1) 
              & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__139__sel) 
                                  >> 1U))))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__139__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__139__sel) 
                                  >> 2U))))));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__139__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_mux1h_3_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__139__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_z_out_3 
        = (0x0000007fU & ((IData)(1U) + VL_EXTEND_II(7,6, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2u_5_6__176__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_else_mux_7_nl;
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2u_5_6__176__Vfuncout 
                            = vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2u_5_6__176__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2u_5_6__176__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_dcpl_12 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_110_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_2_nl)) 
              | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_1_IsNaN_5U_23U_1_IsNaN_5U_23U_1_and_2_tmp)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__156__sel 
        = ((4U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_2_nl)) 
                  << 2U)) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsDenorm_5U_23U_land_3_lpi_1_dfm) 
                              << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_3_lpi_1_dfm)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__156__input_1 
        = (0x0000000fU & ((IData)(1U) + (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__rtn))));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__156__input_2 
        = (0x0000000fU & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_3_lpi_1_dfm));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = (0x0eU & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__156__sel)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__156__input_1) 
              & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__156__sel) 
                                  >> 1U))))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__156__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__156__sel) 
                                  >> 2U))))));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__156__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_mux1h_2_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__156__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_z_out_2 
        = (0x0000007fU & ((IData)(1U) + VL_EXTEND_II(7,6, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2u_5_6__174__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_else_mux_6_nl;
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2u_5_6__174__Vfuncout 
                            = vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2u_5_6__174__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2u_5_6__174__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_dcpl_11 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_110_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_1_nl)) 
              | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_1_IsNaN_5U_23U_1_IsNaN_5U_23U_1_and_1_tmp)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__157__sel 
        = ((4U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_1_nl)) 
                  << 2U)) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsDenorm_5U_23U_land_2_lpi_1_dfm) 
                              << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_2_lpi_1_dfm)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__157__input_1 
        = (0x0000000fU & ((IData)(1U) + (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__rtn))));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__157__input_2 
        = (0x0000000fU & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_2_lpi_1_dfm));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = (0x0eU & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__157__sel)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__157__input_1) 
              & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__157__sel) 
                                  >> 1U))))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__157__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__157__sel) 
                                  >> 2U))))));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__157__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_mux1h_1_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__157__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_z_out_1 
        = (0x0000007fU & ((IData)(1U) + VL_EXTEND_II(7,6, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2u_5_6__172__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_else_mux_5_nl;
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2u_5_6__172__Vfuncout 
                            = vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2u_5_6__172__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2u_5_6__172__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_dcpl 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_110_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_nl)) 
              | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_1_IsNaN_5U_23U_1_IsNaN_5U_23U_1_and_tmp)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__4__sel 
        = ((4U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_nl)) 
                  << 2U)) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsDenorm_5U_23U_land_1_lpi_1_dfm) 
                              << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_1_lpi_1_dfm)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__4__input_1 
        = (0x0000000fU & ((IData)(1U) + (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__rtn))));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__4__input_2 
        = (0x0000000fU & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_1_lpi_1_dfm));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = (0x0eU & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__4__sel)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__4__input_1) 
              & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__4__sel) 
                                  >> 1U))))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__4__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__4__sel) 
                                  >> 2U))))));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__4__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_mux1h_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__4__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_z_out 
        = (0x0000007fU & ((IData)(1U) + VL_EXTEND_II(7,6, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2u_5_6__170__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_else_mux_4_nl;
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2u_5_6__170__Vfuncout 
                            = vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2u_5_6__170__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2u_5_6__170__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntMulExt_33U_16U_49U_o_and_1_cse 
        = ((IData)(vlSelfRef.NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_14) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_19_nl));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_bypass_and_4_cse 
        = ((IData)(vlSelfRef.NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_14) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_9_nl));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_and_cse 
        = ((IData)(vlSelfRef.NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_14) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_47_nl));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__166__sel 
        = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_ew_alu_cvt_bypass;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__166__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_tmp_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__166__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_tmp_5)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__166__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__166__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__166__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__166__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_26_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__166__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__0__sel 
        = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_ew_alu_cvt_bypass;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__0__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_tmp_5;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__0__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_tmp_1)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__0__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__0__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__0__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__0__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_3_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__0__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__132__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_exs_71_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__132__input_1 
        = (3U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_z_out_3) 
                 >> 2U));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__132__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__132__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__132__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_23_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__132__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__134__sel 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_z_out_3));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__134__input_1 
        = (3U & (- (IData)((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_exs_71_0))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__134__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__134__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__134__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_14_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__134__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__187__arg2 
        = (0x0000003fU & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_z_out_3));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__187__arg1 
        = (0x003fe000U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_22_13_lpi_1_dfm) 
                          << 0x0000000dU));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__188__arg2 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__187__arg2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__188__arg1 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__187__arg1;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__188__arg1;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x007fffffU & VL_SHIFTL_III(23,23,6, vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__188__arg2)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__188__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__Vstatic__result;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__187__Vfuncout 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__188__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_sva_2 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__187__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__149__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_exs_79_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__149__input_1 
        = (3U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_z_out_2) 
                 >> 2U));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__149__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__149__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__149__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_21_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__149__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__151__sel 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_z_out_2));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__151__input_1 
        = (3U & (- (IData)((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_exs_79_0))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__151__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__151__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__151__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_10_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__151__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__185__arg2 
        = (0x0000003fU & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_z_out_2));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__185__arg1 
        = (0x003fe000U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_22_13_3_lpi_1_dfm) 
                          << 0x0000000dU));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__186__arg2 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__185__arg2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__186__arg1 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__185__arg1;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__186__arg1;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x007fffffU & VL_SHIFTL_III(23,23,6, vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__186__arg2)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__186__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__185__Vfuncout 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__186__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_3_sva_2 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__185__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__162__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_exs_87_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__162__input_1 
        = (3U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_z_out_1) 
                 >> 2U));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__162__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__162__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__162__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_19_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__162__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__164__sel 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_z_out_1));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__164__input_1 
        = (3U & (- (IData)((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_exs_87_0))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__164__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__164__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__164__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_6_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__164__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__183__arg2 
        = (0x0000003fU & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_z_out_1));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__183__arg1 
        = (0x003fe000U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_22_13_2_lpi_1_dfm) 
                          << 0x0000000dU));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__184__arg2 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__183__arg2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__184__arg1 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__183__arg1;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__184__arg1;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x007fffffU & VL_SHIFTL_III(23,23,6, vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__184__arg2)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__184__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__Vstatic__result;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__183__Vfuncout 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__184__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_2_sva_2 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__183__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__5__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_1_IsNaN_5U_23U_1_IsNaN_5U_23U_1_and_tmp;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__5__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_mux1h_nl;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__5__sel)
            ? 0x0fU : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__5__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__5__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_or_3_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__5__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__144__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_exs_95_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__144__input_1 
        = (3U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_z_out) 
                 >> 2U));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__144__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__144__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__144__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_17_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__144__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__146__sel 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_z_out));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__146__input_1 
        = (3U & (- (IData)((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_exs_95_0))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__146__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__146__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__146__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_2_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__146__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__181__arg2 
        = (0x0000003fU & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_z_out));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__181__arg1 
        = (0x003fe000U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_22_13_1_lpi_1_dfm) 
                          << 0x0000000dU));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__182__arg2 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__181__arg2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__182__arg1 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__181__arg1;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__182__arg1;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x007fffffU & VL_SHIFTL_III(23,23,6, vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__182__arg2)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__182__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__181__Vfuncout 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__182__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_1_sva_2 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__181__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__167__sel 
        = (2U != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__167__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_26_nl;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__167__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_tmp_3;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__167__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__167__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__167__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__167__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_27_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__167__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__1__sel 
        = (2U != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__1__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_3_nl;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__1__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_tmp_2;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__1__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__1__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__1__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__1__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_4_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__1__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__133__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_3_nl)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__133__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_23_nl;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__133__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__133__input_1)
            : 1U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__133__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_mux_58_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__133__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__135__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_3_nl)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__135__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_14_nl;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__135__input_0 
        = (3U & (((IData)(0x31U) + (0x00000020U | (0x0000001fU 
                                                   & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__rtn))))) 
                 >> 4U));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__135__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__135__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__135__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__135__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_mux_42_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__135__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__140__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_lpi_1_dfm;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__140__input_0 
        = (0x000003ffU & (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_sva_2 
                          >> 0x0dU));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__140__sel)
            ? 0x03ffU : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__140__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__140__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_or_30_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__140__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__141__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_lpi_1_dfm;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__141__input_0 
        = (0x000003ffU & vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_sva_2);
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__141__sel)
            ? 0x03ffU : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__141__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__141__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_or_31_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__141__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__142__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_3_nl;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__142__input_1 
        = (7U & (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_sva_2 
                 >> 0x0aU));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__142__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__142__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__142__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_22_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__142__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__150__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_2_nl)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__150__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_21_nl;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__150__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__150__input_1)
            : 1U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__150__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_mux_54_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__150__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__152__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_2_nl)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__152__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_10_nl;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__152__input_0 
        = (3U & (((IData)(0x31U) + (0x00000020U | (0x0000001fU 
                                                   & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__rtn))))) 
                 >> 4U));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__152__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__152__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__152__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__152__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_mux_40_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__152__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__158__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_3_lpi_1_dfm;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__158__input_0 
        = (0x000003ffU & (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_3_sva_2 
                          >> 0x0dU));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__158__sel)
            ? 0x03ffU : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__158__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__158__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_or_34_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__158__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__159__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_3_lpi_1_dfm;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__159__input_0 
        = (0x000003ffU & vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_3_sva_2);
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__159__sel)
            ? 0x03ffU : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__159__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__159__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_or_35_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__159__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__160__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_2_nl;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__160__input_1 
        = (7U & (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_3_sva_2 
                 >> 0x0aU));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__160__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__160__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__160__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_20_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__160__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__163__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_1_nl)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__163__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_19_nl;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__163__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__163__input_1)
            : 1U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__163__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_mux_50_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__163__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__165__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_1_nl)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__165__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_6_nl;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__165__input_0 
        = (3U & (((IData)(0x31U) + (0x00000020U | (0x0000001fU 
                                                   & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__rtn))))) 
                 >> 4U));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__165__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__165__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__165__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__165__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_mux_38_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__165__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__148__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_2_lpi_1_dfm;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__148__input_0 
        = (0x000003ffU & vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_2_sva_2);
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__148__sel)
            ? 0x03ffU : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__148__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__148__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_or_32_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__148__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__153__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_2_lpi_1_dfm;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__153__input_0 
        = (0x000003ffU & (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_2_sva_2 
                          >> 0x0dU));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__153__sel)
            ? 0x03ffU : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__153__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__153__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_or_33_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__153__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__154__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_1_nl;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__154__input_1 
        = (7U & (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_2_sva_2 
                 >> 0x0aU));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__154__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__154__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__154__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_18_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__154__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_6_2_2__7__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_30_nl;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_6_2_2__7__input_1 
        = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_ew_alu_cvt_truncate;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_6_2_2__7__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_or_3_nl;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_6_2_2__7__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_6_2_2__7__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_6_2_2__7__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_6_2_2__7__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_truncate_mux1h_1_itm 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_6_2_2__7__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__145__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_nl)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__145__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_17_nl;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__145__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__145__input_1)
            : 1U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__145__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_mux_46_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__145__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__147__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_nl)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__147__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_2_nl;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__147__input_0 
        = (3U & (((IData)(0x31U) + (0x00000020U | (0x0000001fU 
                                                   & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__rtn))))) 
                 >> 4U));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__147__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__147__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__147__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__147__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_mux_36_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__147__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__131__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_1_lpi_1_dfm;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__131__input_0 
        = (0x000003ffU & vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_1_sva_2);
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__131__sel)
            ? 0x03ffU : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__131__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__131__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_or_27_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__131__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__136__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_1_lpi_1_dfm;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__136__input_0 
        = (0x000003ffU & (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_1_sva_2 
                          >> 0x0dU));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__136__sel)
            ? 0x03ffU : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__136__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__136__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_or_29_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__136__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__137__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_nl;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__137__input_1 
        = (7U & (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_1_sva_2 
                 >> 0x0aU));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__137__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__137__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__137__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__137__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__168__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_bypass_1_sva_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__168__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_27_nl;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__168__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_tmp_3;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__168__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__168__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__168__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__168__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_28_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__168__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__2__sel 
        = (2U == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__2__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_tmp_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__2__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_4_nl;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__2__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__2__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__2__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__2__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_46_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__2__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_nor_3_nl 
        = (7U & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__143__sel 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_lpi_1_dfm;
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__143__input_0 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_22_nl;
                    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__143__sel)
                            ? 7U : (IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__143__input_0));
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__143__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__143__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_nor_2_nl 
        = (7U & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__161__sel 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_3_lpi_1_dfm;
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__161__input_0 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_20_nl;
                    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__161__sel)
                            ? 7U : (IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__161__input_0));
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__161__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__161__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_nor_1_nl 
        = (7U & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__155__sel 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_2_lpi_1_dfm;
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__155__input_0 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_18_nl;
                    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__155__sel)
                            ? 7U : (IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__155__input_0));
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__155__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__155__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_nor_nl 
        = (7U & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__138__sel 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_1_lpi_1_dfm;
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__138__input_0 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_nl;
                    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__138__sel)
                            ? 7U : (IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__138__input_0));
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__138__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__138__Vfuncout))));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__3__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_3_nl;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__3__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_tmp_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__3__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_46_nl;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__3__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__3__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__3__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__3__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_6_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__3__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntMulExt_33U_16U_49U_o_and_cse 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_6_nl)) 
           & (IData)(vlSelfRef.NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_14));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_SDP_CORE_Y_cvt___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_mul_cvt__0(Vsim_NV_NVDLA_SDP_CORE_Y_cvt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_SDP_CORE_Y_cvt___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_mul_cvt__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_6;
    NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_6 = 0;
    CData/*0:0*/ NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_7;
    NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_7 = 0;
    CData/*0:0*/ NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_8;
    NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_8 = 0;
    CData/*0:0*/ NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_9;
    NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_9 = 0;
    CData/*0:0*/ NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_10;
    NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_10 = 0;
    CData/*0:0*/ NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_11;
    NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_11 = 0;
    CData/*0:0*/ NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_12;
    NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_12 = 0;
    CData/*0:0*/ NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_13;
    NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_13 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__190__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__190__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__190__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__190__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__190__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__190__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__190__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__190__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__191__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__191__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__191__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__191__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__191__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__191__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__191__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__191__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__192__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__192__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__192__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__192__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__192__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__192__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__192__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__192__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__193__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__193__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__193__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__193__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__193__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__193__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__193__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__193__sel = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__194__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__194__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__194__input_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__194__input_2 = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__194__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__194__input_1 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__194__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__194__sel = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__195__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__195__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__195__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__195__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__195__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__195__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__196__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__196__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__196__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__196__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__196__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__196__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__196__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__196__sel = 0;
    CData/*5:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_6_2_2__197__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_6_2_2__197__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_6_2_2__197__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_6_2_2__197__input_0 = 0;
    CData/*5:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_6_2_2__197__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_6_2_2__197__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_6_2_2__197__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_6_2_2__197__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__198__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__198__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__198__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__198__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__198__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__198__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__198__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__198__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__199__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__199__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__199__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__199__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__199__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__199__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__199__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__199__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__200__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__200__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__200__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__200__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__200__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__200__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__200__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__200__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__201__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__201__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__201__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__201__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__201__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__201__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__201__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__201__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_s_1_1_2__202__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_s_1_1_2__202__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_s_1_1_2__202__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_s_1_1_2__202__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_s_1_1_2__203__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_s_1_1_2__203__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_s_1_1_2__203__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_s_1_1_2__203__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__204__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__204__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__204__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__204__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__204__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__204__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__205__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__205__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__205__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__205__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__205__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__205__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__206__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__206__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__206__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__206__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__206__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__206__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__207__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__207__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__207__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__207__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__207__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__207__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__208__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__208__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__208__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__208__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__208__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__208__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__209__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__209__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__209__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__209__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__209__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__209__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__210__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__210__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__210__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__210__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__210__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__210__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__211__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__211__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__211__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__211__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__211__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__211__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__212__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__212__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__212__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__212__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__212__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__212__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__213__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__213__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__213__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__213__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__213__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__213__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__214__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__214__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__214__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__214__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__214__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__214__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__215__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__215__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__215__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__215__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__215__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__215__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__232__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__232__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__232__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__232__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__232__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__232__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__233__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__233__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__233__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__233__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__233__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__233__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__234__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__234__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__234__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__234__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__234__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__234__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__235__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__235__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__235__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__235__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__235__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__235__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__236__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__236__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__236__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__236__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__236__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__236__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__236__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__236__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__237__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__237__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__237__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__237__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__237__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__237__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__237__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__237__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__305__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__305__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__305__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__305__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__305__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__305__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__305__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__305__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__306__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__306__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__306__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__306__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__306__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__306__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__306__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__306__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__307__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__307__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__307__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__307__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__307__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__307__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__307__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__307__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__308__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__308__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__308__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__308__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__308__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__308__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__308__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__308__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__309__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__309__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__309__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__309__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__309__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__309__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__309__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__309__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__310__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__310__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__310__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__310__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__310__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__310__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__310__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__310__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__311__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__311__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__311__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__311__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__311__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__311__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__311__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__311__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__312__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__312__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__312__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__312__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__312__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__312__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__312__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__312__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__321__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__321__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__321__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__321__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__321__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__321__sel = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__322__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__322__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__322__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__322__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__322__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__322__sel = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__323__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__323__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__323__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__323__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__323__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__323__sel = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__324__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__324__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__324__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__324__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__324__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__324__sel = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__325__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__325__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__325__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__325__input_0 = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__325__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__325__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__325__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__325__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__326__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__326__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__326__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__326__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__326__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__326__sel = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__327__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__327__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__327__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__327__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__327__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__327__sel = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__329__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__329__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__329__input_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__329__input_2 = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__329__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__329__input_1 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__329__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__329__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__330__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__330__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__330__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__330__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__330__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__330__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__331__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__331__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__331__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__331__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__331__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__331__sel = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__332__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__332__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__332__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__332__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__332__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__332__sel = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__334__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__334__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__334__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__334__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__334__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__334__sel = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__335__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__335__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__335__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__335__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__335__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__335__sel = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__336__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__336__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__336__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__336__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__336__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__336__sel = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__337__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__337__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__337__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__337__input_0 = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__337__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__337__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__337__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__337__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__338__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__338__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__338__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__338__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__338__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__338__sel = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__339__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__339__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__339__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__339__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__339__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__339__sel = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__340__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__340__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__340__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__340__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__340__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__340__sel = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__341__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__341__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__341__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__341__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__341__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__341__sel = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__342__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__342__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__342__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__342__input_0 = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__342__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__342__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__342__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__342__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__343__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__343__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__343__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__343__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__343__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__343__sel = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__344__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__344__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__344__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__344__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__344__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__344__sel = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__346__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__346__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__346__input_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__346__input_2 = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__346__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__346__input_1 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__346__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__346__sel = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__347__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__347__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__347__input_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__347__input_2 = 0;
    CData/*3:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__347__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__347__input_1 = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__347__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__347__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__348__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__348__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__348__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__348__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__348__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__348__sel = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__349__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__349__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__349__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__349__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__349__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__349__sel = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__350__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__350__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__350__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__350__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__350__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__350__sel = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__352__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__352__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__352__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__352__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__352__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__352__sel = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__353__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__353__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__353__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__353__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__353__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__353__sel = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__354__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__354__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__354__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__354__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__354__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__354__sel = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__355__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__355__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__355__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__355__input_0 = 0;
    CData/*1:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__355__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__355__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__355__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__355__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__356__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__356__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__356__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__356__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__356__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__356__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__356__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__356__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__357__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__357__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__357__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__357__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__357__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__357__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__357__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__357__sel = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__358__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__358__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__358__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__358__input_0 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__358__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__358__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__358__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__358__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__359__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__359__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__359__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__359__input_0 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__359__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__359__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__359__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__359__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__361__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__361__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__361__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__361__input_0 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__361__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__361__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__361__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__361__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__363__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__363__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__363__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__363__input_0 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__363__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__363__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__363__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__363__sel = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__365__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__365__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__365__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__365__input_0 = 0;
    CData/*4:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__365__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__365__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__365__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__365__sel = 0;
    VlWide<4>/*111:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__367__Vfuncout;
    VL_ZERO_W(112, __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__367__Vfuncout);
    VlWide<4>/*111:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__367__arg1;
    VL_ZERO_W(112, __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__367__arg1);
    CData/*5:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__367__arg2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__367__arg2 = 0;
    VlWide<4>/*111:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__368__Vfuncout;
    VL_ZERO_W(112, __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__368__Vfuncout);
    VlWide<4>/*111:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__368__arg1;
    VL_ZERO_W(112, __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__368__arg1);
    CData/*5:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__368__arg2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__368__arg2 = 0;
    VlWide<4>/*111:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__369__Vfuncout;
    VL_ZERO_W(112, __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__369__Vfuncout);
    VlWide<4>/*111:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__369__arg1;
    VL_ZERO_W(112, __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__369__arg1);
    CData/*5:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__369__arg2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__369__arg2 = 0;
    VlWide<4>/*111:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__370__Vfuncout;
    VL_ZERO_W(112, __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__370__Vfuncout);
    VlWide<4>/*111:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__370__arg1;
    VL_ZERO_W(112, __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__370__arg1);
    CData/*5:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__370__arg2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__370__arg2 = 0;
    IData/*22:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__371__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__371__Vfuncout = 0;
    IData/*21:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__371__arg1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__371__arg1 = 0;
    CData/*5:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__371__arg2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__371__arg2 = 0;
    IData/*22:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__372__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__372__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__372__arg1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__372__arg1 = 0;
    CData/*5:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__372__arg2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__372__arg2 = 0;
    IData/*22:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__373__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__373__Vfuncout = 0;
    IData/*21:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__373__arg1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__373__arg1 = 0;
    CData/*5:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__373__arg2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__373__arg2 = 0;
    IData/*22:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__374__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__374__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__374__arg1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__374__arg1 = 0;
    CData/*5:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__374__arg2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__374__arg2 = 0;
    IData/*22:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__375__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__375__Vfuncout = 0;
    IData/*21:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__375__arg1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__375__arg1 = 0;
    CData/*5:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__375__arg2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__375__arg2 = 0;
    IData/*22:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__376__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__376__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__376__arg1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__376__arg1 = 0;
    CData/*5:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__376__arg2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__376__arg2 = 0;
    IData/*22:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__377__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__377__Vfuncout = 0;
    IData/*21:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__377__arg1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__377__arg1 = 0;
    CData/*5:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__377__arg2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__377__arg2 = 0;
    IData/*22:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__378__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__378__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__378__arg1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__378__arg1 = 0;
    CData/*5:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__378__arg2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__378__arg2 = 0;
    QData/*63:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__MUX_v_64_2_2__379__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__MUX_v_64_2_2__379__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__MUX_v_64_2_2__379__input_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__MUX_v_64_2_2__379__input_0 = 0;
    QData/*63:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__MUX_v_64_2_2__379__input_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__MUX_v_64_2_2__379__input_1 = 0;
    CData/*0:0*/ __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__MUX_v_64_2_2__379__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__MUX_v_64_2_2__379__sel = 0;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_4;
    VlWide<4>/*127:0*/ __Vtemp_6;
    VlWide<4>/*127:0*/ __Vtemp_8;
    // Body
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_63 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_bypass_1_sva_2)) 
           & (2U != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_65 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_bypass_1_sva_2) 
           & (2U != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_3_nl 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_bypass_1_sva_2) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_bypass_1_sva_st_10));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_ctrl_inst__DOT__chn_in_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_iswt0));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__s 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__reg_cfg_truncate_1_itm) 
            << 4U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__reg_cfg_truncate_1_1_itm));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_chn_out_wait_ctrl_inst__DOT__chn_out_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_iswt0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__MUX_v_64_2_2__379__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_bcwt;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__MUX_v_64_2_2__379__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_d_bfwt;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__MUX_v_64_2_2__379__input_0 
        = ((0U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_mul_dmapack__DOT__pack_cnt))
            ? (((QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_mul_dmapack__DOT__pack_data[1U])) 
                << 0x00000020U) | (QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_mul_dmapack__DOT__pack_data[0U])))
            : ((1U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_mul_dmapack__DOT__pack_cnt))
                ? (((QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_mul_dmapack__DOT__pack_data[3U])) 
                    << 0x00000020U) | (QData)((IData)(
                                                      vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_mul_dmapack__DOT__pack_data[2U])))
                : ((2U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_mul_dmapack__DOT__pack_cnt))
                    ? (((QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_mul_dmapack__DOT__pack_data[5U])) 
                        << 0x00000020U) | (QData)((IData)(
                                                          vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_mul_dmapack__DOT__pack_data[4U])))
                    : ((3U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_mul_dmapack__DOT__pack_cnt))
                        ? (((QData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_mul_dmapack__DOT__pack_data[7U])) 
                            << 0x00000020U) | (QData)((IData)(
                                                              vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_mul_dmapack__DOT__pack_data[6U])))
                        : 0ULL))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__MUX_v_64_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__MUX_v_64_2_2__379__sel)
            ? __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__MUX_v_64_2_2__379__input_1
            : __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__MUX_v_64_2_2__379__input_0);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__MUX_v_64_2_2__379__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__MUX_v_64_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__MUX_v_64_2_2__379__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_ctrl_inst__DOT__chn_in_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_ctrl_inst__DOT__chn_in_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_ctrl_inst__DOT__chn_in_rsci_icwt));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__367__arg2 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__s;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__367__arg1[0U] = 0U;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__367__arg1[1U] 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntMulExt_33U_16U_49U_o_mul_itm_2) 
           << 0x0000001fU);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__367__arg1[2U] 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntMulExt_33U_16U_49U_o_mul_itm_2) 
            >> 1U) | ((IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntMulExt_33U_16U_49U_o_mul_itm_2 
                               >> 0x00000020U)) << 0x0000001fU));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__367__arg1[3U] 
        = ((IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntMulExt_33U_16U_49U_o_mul_itm_2 
                    >> 0x00000020U)) >> 1U);
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[0U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__367__arg1[0U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[1U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__367__arg1[1U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[2U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__367__arg1[2U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[3U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__367__arg1[3U];
    VL_SHIFTRS_WWI(112,112,6, __Vtemp_2, vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__367__arg2));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U] 
        = __Vtemp_2[0U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U] 
        = __Vtemp_2[2U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U] 
        = (0x0000ffffU & __Vtemp_2[3U]);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__367__Vfuncout[0U] 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U];
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__367__Vfuncout[1U] 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U];
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__367__Vfuncout[2U] 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U];
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__367__Vfuncout[3U] 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_1_sva[0U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__367__Vfuncout[0U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_1_sva[1U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__367__Vfuncout[1U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_1_sva[2U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__367__Vfuncout[2U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_1_sva[3U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__367__Vfuncout[3U];
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__368__arg2 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__s;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__368__arg1[0U] = 0U;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__368__arg1[1U] 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntMulExt_33U_16U_49U_o_mul_1_itm_2) 
           << 0x0000001fU);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__368__arg1[2U] 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntMulExt_33U_16U_49U_o_mul_1_itm_2) 
            >> 1U) | ((IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntMulExt_33U_16U_49U_o_mul_1_itm_2 
                               >> 0x00000020U)) << 0x0000001fU));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__368__arg1[3U] 
        = ((IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntMulExt_33U_16U_49U_o_mul_1_itm_2 
                    >> 0x00000020U)) >> 1U);
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result_t[0U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__368__arg1[0U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result_t[1U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__368__arg1[1U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result_t[2U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__368__arg1[2U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result_t[3U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__368__arg1[3U];
    VL_SHIFTRS_WWI(112,112,6, __Vtemp_4, vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__368__arg2));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result[0U] 
        = __Vtemp_4[0U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result[1U] 
        = __Vtemp_4[1U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result[2U] 
        = __Vtemp_4[2U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result[3U] 
        = (0x0000ffffU & __Vtemp_4[3U]);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__368__Vfuncout[0U] 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result[0U];
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__368__Vfuncout[1U] 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result[1U];
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__368__Vfuncout[2U] 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result[2U];
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__368__Vfuncout[3U] 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result[3U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_2_sva[0U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__368__Vfuncout[0U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_2_sva[1U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__368__Vfuncout[1U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_2_sva[2U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__368__Vfuncout[2U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_2_sva[3U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__368__Vfuncout[3U];
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__369__arg2 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__s;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__369__arg1[0U] = 0U;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__369__arg1[1U] 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntMulExt_33U_16U_49U_o_mul_itm_2) 
           << 0x0000001fU);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__369__arg1[2U] 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntMulExt_33U_16U_49U_o_mul_itm_2) 
            >> 1U) | ((IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntMulExt_33U_16U_49U_o_mul_itm_2 
                               >> 0x00000020U)) << 0x0000001fU));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__369__arg1[3U] 
        = ((IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntMulExt_33U_16U_49U_o_mul_itm_2 
                    >> 0x00000020U)) >> 1U);
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[0U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__369__arg1[0U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[1U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__369__arg1[1U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[2U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__369__arg1[2U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[3U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__369__arg1[3U];
    VL_SHIFTRS_WWI(112,112,6, __Vtemp_6, vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__369__arg2));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U] 
        = __Vtemp_6[0U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U] 
        = __Vtemp_6[1U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U] 
        = __Vtemp_6[2U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U] 
        = (0x0000ffffU & __Vtemp_6[3U]);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__369__Vfuncout[0U] 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U];
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__369__Vfuncout[1U] 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U];
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__369__Vfuncout[2U] 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U];
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__369__Vfuncout[3U] 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_3_sva[0U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__369__Vfuncout[0U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_3_sva[1U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__369__Vfuncout[1U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_3_sva[2U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__369__Vfuncout[2U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_3_sva[3U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__369__Vfuncout[3U];
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__370__arg2 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__s;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__370__arg1[0U] = 0U;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__370__arg1[1U] 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntMulExt_33U_16U_49U_o_mul_1_itm_2) 
           << 0x0000001fU);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__370__arg1[2U] 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntMulExt_33U_16U_49U_o_mul_1_itm_2) 
            >> 1U) | ((IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntMulExt_33U_16U_49U_o_mul_1_itm_2 
                               >> 0x00000020U)) << 0x0000001fU));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__370__arg1[3U] 
        = ((IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntMulExt_33U_16U_49U_o_mul_1_itm_2 
                    >> 0x00000020U)) >> 1U);
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result_t[0U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__370__arg1[0U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result_t[1U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__370__arg1[1U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result_t[2U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__370__arg1[2U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result_t[3U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__370__arg1[3U];
    VL_SHIFTRS_WWI(112,112,6, __Vtemp_8, vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__370__arg2));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result[0U] 
        = __Vtemp_8[0U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result[1U] 
        = __Vtemp_8[1U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result[2U] 
        = __Vtemp_8[2U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result[3U] 
        = (0x0000ffffU & __Vtemp_8[3U]);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__370__Vfuncout[0U] 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result[0U];
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__370__Vfuncout[1U] 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result[1U];
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__370__Vfuncout[2U] 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result[2U];
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__370__Vfuncout[3U] 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result[3U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_sva[0U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__370__Vfuncout[0U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_sva[1U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__370__Vfuncout[1U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_sva[2U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__370__Vfuncout[2U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_sva[3U] 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__370__Vfuncout[3U];
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_chn_out_wait_ctrl_inst__DOT__chn_out_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_chn_out_wait_ctrl_inst__DOT__chn_out_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_chn_out_wait_ctrl_inst__DOT__chn_out_rsci_icwt));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_cvt_1_IntSubExt_16U_32U_33U_o_acc_nl 
        = (0x00000003ffffffffULL & (VL_EXTEND_QQ(34,33, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__313__vector 
                            = (0x0000ffffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt));
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__313__Vfuncout 
                            = (((QData)((IData)((0x0001ffffU 
                                                 & (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__313__vector) 
                                                                  >> 0x0fU))))))) 
                                << 0x00000010U) | (QData)((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__313__vector)));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__313__Vfuncout)) 
                                    - VL_EXTEND_QQ(34,33, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__314__vector 
                            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_ew_mul_cvt_offset;
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__314__Vfuncout 
                            = (((QData)((IData)((vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__314__vector 
                                                 >> 0x1fU))) 
                                << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__314__vector)));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__314__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_cvt_3_IntSubExt_16U_32U_33U_o_acc_nl 
        = (0x00000003ffffffffULL & (VL_EXTEND_QQ(34,33, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__315__vector 
                            = (0x0000ffffU & (IData)(
                                                     (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt 
                                                      >> 0x20U)));
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__315__Vfuncout 
                            = (((QData)((IData)((0x0001ffffU 
                                                 & (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__315__vector) 
                                                                  >> 0x0fU))))))) 
                                << 0x00000010U) | (QData)((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__315__vector)));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__315__Vfuncout)) 
                                    - VL_EXTEND_QQ(34,33, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__316__vector 
                            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_ew_mul_cvt_offset;
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__316__Vfuncout 
                            = (((QData)((IData)((vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__316__vector 
                                                 >> 0x1fU))) 
                                << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__316__vector)));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__316__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_cvt_2_IntSubExt_16U_32U_33U_o_acc_1_nl 
        = (0x00000003ffffffffULL & (VL_EXTEND_QQ(34,33, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__317__vector 
                            = (0x0000ffffU & (IData)(
                                                     (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt 
                                                      >> 0x10U)));
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__317__Vfuncout 
                            = (((QData)((IData)((0x0001ffffU 
                                                 & (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__317__vector) 
                                                                  >> 0x0fU))))))) 
                                << 0x00000010U) | (QData)((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__317__vector)));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__317__Vfuncout)) 
                                    - VL_EXTEND_QQ(34,33, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__318__vector 
                            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_ew_mul_cvt_offset;
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__318__Vfuncout 
                            = (((QData)((IData)((vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__318__vector 
                                                 >> 0x1fU))) 
                                << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__318__vector)));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__318__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_cvt_4_IntSubExt_16U_32U_33U_o_acc_1_nl 
        = (0x00000003ffffffffULL & (VL_EXTEND_QQ(34,33, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__319__vector 
                            = (0x0000ffffU & (IData)(
                                                     (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt 
                                                      >> 0x30U)));
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__319__Vfuncout 
                            = (((QData)((IData)((0x0001ffffU 
                                                 & (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__319__vector) 
                                                                  >> 0x0fU))))))) 
                                << 0x00000010U) | (QData)((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__319__vector)));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__319__Vfuncout)) 
                                    - VL_EXTEND_QQ(34,33, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__320__vector 
                            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_ew_mul_cvt_offset;
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__320__Vfuncout 
                            = (((QData)((IData)((vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__320__vector 
                                                 >> 0x1fU))) 
                                << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__320__vector)));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__320__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_land_lpi_1_dfm 
        = ((~ (IData)(((0x7c00000000000000ULL != (0x7c00000000000000ULL 
                                                  & vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt)) 
                       | (0U == (0x000003ffU & (IData)(
                                                       (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt 
                                                        >> 0x00000030U))))))) 
           & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_nan_to_zero));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_land_3_lpi_1_dfm 
        = ((~ (IData)(((0x00007c0000000000ULL != (0x00007c0000000000ULL 
                                                  & vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt)) 
                       | (0U == (0x000003ffU & (IData)(
                                                       (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt 
                                                        >> 0x00000020U))))))) 
           & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_nan_to_zero));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_land_2_lpi_1_dfm 
        = ((~ (IData)(((0x000000007c000000ULL != (0x000000007c000000ULL 
                                                  & vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt)) 
                       | (0U == (0x000003ffU & (IData)(
                                                       (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt 
                                                        >> 0x00000010U))))))) 
           & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_nan_to_zero));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_land_1_lpi_1_dfm 
        = ((~ (IData)(((0x0000000000007c00ULL != (0x0000000000007c00ULL 
                                                  & vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt)) 
                       | (0U == (0x000003ffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt)))))) 
           & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_nan_to_zero));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__chn_in_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_ld_core_psct) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_ctrl_inst__DOT__chn_in_rsci_ogwt));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_ctrl_inst__DOT__chn_in_rsci_ogwt) 
           & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_mul_dmapack__DOT__pack_pvld));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_obits_fixed_and_nl 
        = (1U & ((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_1_sva[1U] 
                  >> 0x0000001eU) & (((0U != vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_1_sva[0U]) 
                                      | (0U != (0x3fffffffU 
                                                & vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_1_sva[1U]))) 
                                     | (~ (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_1_sva[3U] 
                                           >> 0x0000000fU)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_obits_fixed_and_2_nl 
        = (1U & ((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_2_sva[1U] 
                  >> 0x0000001eU) & (((0U != vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_2_sva[0U]) 
                                      | (0U != (0x3fffffffU 
                                                & vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_2_sva[1U]))) 
                                     | (~ (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_2_sva[3U] 
                                           >> 0x0000000fU)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_obits_fixed_and_nl 
        = (1U & ((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_3_sva[1U] 
                  >> 0x0000001eU) & (((0U != vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_3_sva[0U]) 
                                      | (0U != (0x3fffffffU 
                                                & vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_3_sva[1U]))) 
                                     | (~ (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_3_sva[3U] 
                                           >> 0x0000000fU)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_obits_fixed_and_2_nl 
        = (1U & ((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_sva[1U] 
                  >> 0x0000001eU) & (((0U != vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_sva[0U]) 
                                      | (0U != (0x3fffffffU 
                                                & vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_sva[1U]))) 
                                     | (~ (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_sva[3U] 
                                           >> 0x0000000fU)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_chn_out_wait_dp_inst__DOT__chn_out_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_chn_out_wait_ctrl_inst__DOT__chn_out_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_core__DOT__Y_mul_inst__DOT__Y_mul_core_inst__DOT__chn_mul_op_rsci_ld_core_psct) 
              & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_core__DOT__Y_mul_inst__DOT__Y_mul_core_inst__DOT__Y_mul_core_chn_mul_op_rsci_inst__DOT__Y_mul_core_chn_mul_op_rsci_chn_mul_op_wait_ctrl_inst__DOT__chn_mul_op_rsci_ogwt)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__206__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_land_lpi_1_dfm)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__206__input_1 
        = (0x0000001fU & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt 
                                  >> 0x3aU)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__206__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__206__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__206__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_lpi_1_dfm 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__206__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__204__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_land_lpi_1_dfm)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__204__input_1 
        = (0x000003ffU & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt 
                                  >> 0x30U)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__204__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__204__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__204__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_lpi_1_dfm 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__204__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__209__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_land_3_lpi_1_dfm)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__209__input_1 
        = (0x0000001fU & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt 
                                  >> 0x2aU)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__209__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__209__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__209__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_3_lpi_1_dfm 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__209__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__207__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_land_3_lpi_1_dfm)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__207__input_1 
        = (0x000003ffU & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt 
                                  >> 0x20U)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__207__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__207__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__207__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_3_lpi_1_dfm 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__207__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__212__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_land_2_lpi_1_dfm)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__212__input_1 
        = (0x0000001fU & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt 
                                  >> 0x1aU)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__212__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__212__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__212__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_2_lpi_1_dfm 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__212__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__210__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_land_2_lpi_1_dfm)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__210__input_1 
        = (0x000003ffU & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt 
                                  >> 0x10U)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__210__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__210__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__210__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_2_lpi_1_dfm 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__210__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__215__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_land_1_lpi_1_dfm)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__215__input_1 
        = (0x0000001fU & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt 
                                  >> 0x0aU)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__215__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__215__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__215__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_1_lpi_1_dfm 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__215__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__213__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_land_1_lpi_1_dfm)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__213__input_1 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__213__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__213__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__213__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_1_lpi_1_dfm 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__213__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_biwt));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_1_sva 
        = (0x0007ffffffffffffULL & (VL_EXTEND_QQ(51,50, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__218__vector 
                            = (0x0001ffffffffffffULL 
                               & (((QData)((IData)(
                                                   vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_1_sva[3U])) 
                                   << 0x00000021U) 
                                  | (((QData)((IData)(
                                                      vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_1_sva[2U])) 
                                      << 1U) | ((QData)((IData)(
                                                                vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_1_sva[1U])) 
                                                >> 0x0000001fU))));
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__218__Vfuncout 
                            = (((QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__218__vector 
                                                            >> 0x30U))))) 
                                << 0x00000031U) | vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__218__vector);
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__218__Vfuncout)) 
                                    + VL_EXTEND_QQ(51,50, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2s_1_50__219__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_obits_fixed_and_nl;
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2s_1_50__219__Vfuncout 
                            = (QData)((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2s_1_50__219__vector));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2s_1_50__219__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_2_sva 
        = (0x0007ffffffffffffULL & (VL_EXTEND_QQ(51,50, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__222__vector 
                            = (0x0001ffffffffffffULL 
                               & (((QData)((IData)(
                                                   vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_2_sva[3U])) 
                                   << 0x00000021U) 
                                  | (((QData)((IData)(
                                                      vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_2_sva[2U])) 
                                      << 1U) | ((QData)((IData)(
                                                                vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_2_sva[1U])) 
                                                >> 0x0000001fU))));
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__222__Vfuncout 
                            = (((QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__222__vector 
                                                            >> 0x30U))))) 
                                << 0x00000031U) | vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__222__vector);
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__222__Vfuncout)) 
                                    + VL_EXTEND_QQ(51,50, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2s_1_50__223__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_obits_fixed_and_2_nl;
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2s_1_50__223__Vfuncout 
                            = (QData)((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2s_1_50__223__vector));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2s_1_50__223__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_3_sva 
        = (0x0007ffffffffffffULL & (VL_EXTEND_QQ(51,50, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__226__vector 
                            = (0x0001ffffffffffffULL 
                               & (((QData)((IData)(
                                                   vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_3_sva[3U])) 
                                   << 0x00000021U) 
                                  | (((QData)((IData)(
                                                      vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_3_sva[2U])) 
                                      << 1U) | ((QData)((IData)(
                                                                vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_3_sva[1U])) 
                                                >> 0x0000001fU))));
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__226__Vfuncout 
                            = (((QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__226__vector 
                                                            >> 0x30U))))) 
                                << 0x00000031U) | vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__226__vector);
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__226__Vfuncout)) 
                                    + VL_EXTEND_QQ(51,50, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2s_1_50__227__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_obits_fixed_and_nl;
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2s_1_50__227__Vfuncout 
                            = (QData)((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2s_1_50__227__vector));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2s_1_50__227__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_sva 
        = (0x0007ffffffffffffULL & (VL_EXTEND_QQ(51,50, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__230__vector 
                            = (0x0001ffffffffffffULL 
                               & (((QData)((IData)(
                                                   vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_sva[3U])) 
                                   << 0x00000021U) 
                                  | (((QData)((IData)(
                                                      vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_sva[2U])) 
                                      << 1U) | ((QData)((IData)(
                                                                vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_sva[1U])) 
                                                >> 0x0000001fU))));
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__230__Vfuncout 
                            = (((QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__230__vector 
                                                            >> 0x30U))))) 
                                << 0x00000031U) | vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__230__vector);
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__230__Vfuncout)) 
                                    + VL_EXTEND_QQ(51,50, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2s_1_50__231__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_obits_fixed_and_2_nl;
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2s_1_50__231__Vfuncout 
                            = (QData)((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2s_1_50__231__vector));
                    }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2s_1_50__231__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_chn_out_wait_dp_inst__DOT__chn_out_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_chn_out_wait_dp_inst__DOT__chn_out_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_chn_out_wait_dp_inst__DOT__chn_out_rsci_biwt));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_aelse_not_11_nl 
        = ((0U == (0x000003ffU & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt 
                                          >> 0x00000030U)))) 
           | (0x1fU != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_lpi_1_dfm)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__c_h_1_2 
        = (IData)((0U == (0x03c0U & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_lpi_1_dfm))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3 
        = (IData)((0U == (0x003cU & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_lpi_1_dfm))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_aelse_not_10_nl 
        = ((0U == (0x000003ffU & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt 
                                          >> 0x00000020U)))) 
           | (0x1fU != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_3_lpi_1_dfm)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__c_h_1_2 
        = (IData)((0U == (0x03c0U & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_3_lpi_1_dfm))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3 
        = (IData)((0U == (0x003cU & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_3_lpi_1_dfm))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_aelse_not_9_nl 
        = ((0U == (0x000003ffU & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt 
                                          >> 0x00000010U)))) 
           | (0x1fU != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_2_lpi_1_dfm)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__c_h_1_2 
        = (IData)((0U == (0x03c0U & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_2_lpi_1_dfm))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3 
        = (IData)((0U == (0x003cU & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_2_lpi_1_dfm))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_aelse_not_8_nl 
        = ((0U == (0x000003ffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt))) 
           | (0x1fU != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_1_lpi_1_dfm)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__c_h_1_2 
        = (IData)((0U == (0x03c0U & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_1_lpi_1_dfm))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3 
        = (IData)((0U == (0x003cU & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_1_lpi_1_dfm))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl 
        = (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_proc_precision) 
            >> 1U) & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_bawt));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_and_unfl_1_sva 
        = ((IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_1_sva 
                    >> 0x00000031U)) & (0x0003ffffU 
                                        != (0x0003ffffU 
                                            & (IData)(
                                                      (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_1_sva 
                                                       >> 0x0000001fU)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_nor_ovfl_1_sva 
        = (1U & (~ ((IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_1_sva 
                             >> 0x00000031U)) | (0U 
                                                 == 
                                                 (0x0003ffffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_1_sva 
                                                             >> 0x0000001fU)))))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_and_unfl_2_sva 
        = ((IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_2_sva 
                    >> 0x00000031U)) & (0x0003ffffU 
                                        != (0x0003ffffU 
                                            & (IData)(
                                                      (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_2_sva 
                                                       >> 0x0000001fU)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_nor_ovfl_2_sva 
        = (1U & (~ ((IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_2_sva 
                             >> 0x00000031U)) | (0U 
                                                 == 
                                                 (0x0003ffffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_2_sva 
                                                             >> 0x0000001fU)))))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_and_unfl_3_sva 
        = ((IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_3_sva 
                    >> 0x00000031U)) & (0x0003ffffU 
                                        != (0x0003ffffU 
                                            & (IData)(
                                                      (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_3_sva 
                                                       >> 0x0000001fU)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_nor_ovfl_3_sva 
        = (1U & (~ ((IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_3_sva 
                             >> 0x00000031U)) | (0U 
                                                 == 
                                                 (0x0003ffffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_3_sva 
                                                             >> 0x0000001fU)))))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_and_unfl_sva 
        = ((IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_sva 
                    >> 0x00000031U)) & (0x0003ffffU 
                                        != (0x0003ffffU 
                                            & (IData)(
                                                      (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_sva 
                                                       >> 0x0000001fU)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_nor_ovfl_sva 
        = (1U & (~ ((IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_sva 
                             >> 0x00000031U)) | (0U 
                                                 == 
                                                 (0x0003ffffU 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_sva 
                                                             >> 0x0000001fU)))))));
    vlSelfRef.__PVT__chn_out_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_chn_out_wait_dp_inst__DOT__chn_out_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__reg_chn_out_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl_17 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_chn_out_wait_dp_inst__DOT__chn_out_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__reg_chn_out_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_110_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__reg_chn_out_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_chn_out_wait_dp_inst__DOT__chn_out_rsci_bawt)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__232__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_aelse_not_11_nl)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__232__input_1 
        = (0x000003ffU & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt 
                                  >> 0x30U)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__232__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__232__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__232__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_9_0_lpi_1_dfm 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__232__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__205__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_aelse_not_11_nl;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__205__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_lpi_1_dfm;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__205__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__205__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__205__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_22_13_lpi_1_dfm 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__205__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__c_h_1_6 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__c_h_1_2) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__233__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_aelse_not_10_nl)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__233__input_1 
        = (0x000003ffU & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt 
                                  >> 0x20U)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__233__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__233__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__233__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_9_0_3_lpi_1_dfm 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__233__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__208__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_aelse_not_10_nl;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__208__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_3_lpi_1_dfm;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__208__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__208__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__208__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_22_13_3_lpi_1_dfm 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__208__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__c_h_1_6 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__c_h_1_2) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__234__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_aelse_not_9_nl)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__234__input_1 
        = (0x000003ffU & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt 
                                  >> 0x10U)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__234__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__234__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__234__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_9_0_2_lpi_1_dfm 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__234__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__211__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_aelse_not_9_nl;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__211__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_2_lpi_1_dfm;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__211__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__211__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__211__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_22_13_2_lpi_1_dfm 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__211__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__c_h_1_6 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__c_h_1_2) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__235__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_aelse_not_8_nl)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__235__input_1 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__235__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__235__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__235__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_9_0_1_lpi_1_dfm 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__235__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__214__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_aelse_not_8_nl;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__214__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_1_lpi_1_dfm;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__214__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__214__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__214__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_22_13_1_lpi_1_dfm 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__214__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__c_h_1_6 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__c_h_1_2) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_obits_fixed_nor_2_nl 
        = (0x3fffffffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__216__sel 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_nor_ovfl_1_sva;
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__216__input_0 
                        = (0x3fffffffU & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_1_sva 
                                                  >> 1U)));
                    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__216__sel)
                            ? 0x3fffffffU : vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__216__input_0);
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__216__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__Vstatic__result;
                }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__216__Vfuncout)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__305__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_bypass_1_sva_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__305__input_1 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__data_in_data_sva_78));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__305__input_0 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_nor_ovfl_1_sva) 
                        | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_1_sva))) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_and_unfl_1_sva))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__305__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__305__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__305__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__305__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_mux_39_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__305__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__306__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_bypass_1_sva_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__306__input_1 
        = (1U & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__data_in_data_sva_78 
                         >> 0x0fU)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__306__input_0 
        = (1U & (~ ((~ ((IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_1_sva 
                                 >> 0x0000001fU)) | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_and_unfl_1_sva))) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_nor_ovfl_1_sva))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__306__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__306__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__306__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__306__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_mux_40_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__306__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_obits_fixed_nor_7_nl 
        = (0x3fffffffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__220__sel 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_nor_ovfl_2_sva;
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__220__input_0 
                        = (0x3fffffffU & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_2_sva 
                                                  >> 1U)));
                    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__220__sel)
                            ? 0x3fffffffU : vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__220__input_0);
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__220__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__Vstatic__result;
                }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__220__Vfuncout)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__307__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_bypass_1_sva_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__307__input_1 
        = (1U & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__data_in_data_sva_78 
                         >> 0x10U)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__307__input_0 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_nor_ovfl_2_sva) 
                        | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_2_sva))) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_and_unfl_2_sva))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__307__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__307__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__307__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__307__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_mux_41_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__307__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__308__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_bypass_1_sva_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__308__input_1 
        = (1U & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__data_in_data_sva_78 
                         >> 0x1fU)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__308__input_0 
        = (1U & (~ ((~ ((IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_2_sva 
                                 >> 0x0000001fU)) | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_and_unfl_2_sva))) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_nor_ovfl_2_sva))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__308__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__308__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__308__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__308__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_mux_42_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__308__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_obits_fixed_nor_2_nl 
        = (0x3fffffffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__224__sel 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_nor_ovfl_3_sva;
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__224__input_0 
                        = (0x3fffffffU & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_3_sva 
                                                  >> 1U)));
                    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__224__sel)
                            ? 0x3fffffffU : vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__224__input_0);
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__224__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__Vstatic__result;
                }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__224__Vfuncout)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__309__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_bypass_1_sva_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__309__input_1 
        = (1U & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__data_in_data_sva_78 
                         >> 0x20U)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__309__input_0 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_nor_ovfl_3_sva) 
                        | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_3_sva))) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_and_unfl_3_sva))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__309__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__309__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__309__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__309__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_mux_43_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__309__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__310__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_bypass_1_sva_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__310__input_1 
        = (1U & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__data_in_data_sva_78 
                         >> 0x2fU)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__310__input_0 
        = (1U & (~ ((~ ((IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_3_sva 
                                 >> 0x0000001fU)) | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_and_unfl_3_sva))) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_nor_ovfl_3_sva))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__310__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__310__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__310__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__310__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_mux_44_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__310__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_obits_fixed_nor_7_nl 
        = (0x3fffffffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__228__sel 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_nor_ovfl_sva;
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__228__input_0 
                        = (0x3fffffffU & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_sva 
                                                  >> 1U)));
                    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__228__sel)
                            ? 0x3fffffffU : vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__228__input_0);
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__228__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__Vstatic__result;
                }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__228__Vfuncout)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__311__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_bypass_1_sva_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__311__input_1 
        = (1U & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__data_in_data_sva_78 
                         >> 0x30U)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__311__input_0 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_nor_ovfl_sva) 
                        | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_sva))) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_and_unfl_sva))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__311__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__311__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__311__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__311__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_mux_45_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__311__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__312__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_bypass_1_sva_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__312__input_1 
        = (1U & (IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__data_in_data_sva_78 
                         >> 0x3fU)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__312__input_0 
        = (1U & (~ ((~ ((IData)((vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_sva 
                                 >> 0x0000001fU)) | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_and_unfl_sva))) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_nor_ovfl_sva))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__312__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__312__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__312__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__312__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_mux_46_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__312__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl_23 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__main_stage_v_1)) 
           & (IData)(vlSelfRef.__PVT__chn_out_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__main_stage_v_1_mx0c1 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_110_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_bawt)) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__main_stage_v_1)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl_19 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_110_cse) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__main_stage_v_1));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_s_1_1_2__202__sel 
        = (((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_proc_precision)) 
            & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_110_cse) 
               & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl) 
                  & (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_core_fsm_inst__DOT__state_var)
                       ? 2U : 1U) >> 1U)))) | ((IData)(vlSelfRef.__PVT__chn_out_rsci_unreg_inst__DOT__in_0) 
                                               & ((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_proc_precision)) 
                                                  & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_s_1_1_2__202__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_s_1_1_2__202__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_NV_NVDLA_SDP_CORE_Y_cvt_core_nvdla_float_h_ln433_assert_iExpoWidth_le_oExpoWidth_1_sig_mx0w1 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_s_1_1_2__202__Vfuncout;
    vlSelfRef.__PVT__chn_in_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_110_cse) 
           & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_bawt) 
              & (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__200__sel 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__main_stage_v_1)) 
                    | (2U != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6)))));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__200__input_1 
        = (1U & (~ (((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_bawt)) 
                     | (2U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_proc_precision))) 
                    & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_110_cse))));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__200__input_0 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_bawt) 
           & ((2U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_proc_precision)) 
              & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_110_cse)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__200__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__200__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__200__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__200__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_25_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__200__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__198__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_110_cse;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__198__input_1 
        = (1U & (~ ((2U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_proc_precision)) 
                    | ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_bawt)) 
                       | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_ew_mul_cvt_bypass)))));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__198__input_0 
        = (1U & (~ ((2U == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_8)) 
                    | ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__main_stage_v_1)) 
                       | ((2U == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6)) 
                          | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_3_nl))))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__198__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__198__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__198__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__198__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_19_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__198__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_6_mdf 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_110_cse));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_tmp_5 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_110_cse)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__236__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_bawt;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__236__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_110_cse)) 
                 | (2U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_proc_precision))));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__236__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_110_cse)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__236__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__236__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__236__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__236__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_tmp 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__236__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl_7 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_110_cse) 
           & (2U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_proc_precision)));
    NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_10 
        = ((0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_22_13_lpi_1_dfm)) 
           | (0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_9_0_lpi_1_dfm)));
    NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_6 
        = (IData)((((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_lpi_1_dfm) 
                    >> 9U) | (0U != (0x01ffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_22_13_lpi_1_dfm)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__c_h_1_10 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__c_h_1_6) 
           & (0U == (3U & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_lpi_1_dfm))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_and_85_nl 
        = ((0U != (3U & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_lpi_1_dfm))) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__c_h_1_6));
    NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_11 
        = ((0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_22_13_3_lpi_1_dfm)) 
           | (0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_9_0_3_lpi_1_dfm)));
    NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_7 
        = (IData)((((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_3_lpi_1_dfm) 
                    >> 9U) | (0U != (0x01ffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_22_13_3_lpi_1_dfm)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__c_h_1_10 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__c_h_1_6) 
           & (0U == (3U & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_3_lpi_1_dfm))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_and_85_nl 
        = ((0U != (3U & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_3_lpi_1_dfm))) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__c_h_1_6));
    NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_12 
        = ((0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_22_13_2_lpi_1_dfm)) 
           | (0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_9_0_2_lpi_1_dfm)));
    NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_8 
        = (IData)((((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_2_lpi_1_dfm) 
                    >> 9U) | (0U != (0x01ffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_22_13_2_lpi_1_dfm)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__c_h_1_10 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__c_h_1_6) 
           & (0U == (3U & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_2_lpi_1_dfm))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_and_85_nl 
        = ((0U != (3U & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_2_lpi_1_dfm))) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__c_h_1_6));
    NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_9 
        = (IData)((((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_1_lpi_1_dfm) 
                    >> 9U) | (0U != (0x01ffU & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_22_13_1_lpi_1_dfm)))));
    NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_13 
        = ((0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_22_13_1_lpi_1_dfm)) 
           | (0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_9_0_1_lpi_1_dfm)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__c_h_1_10 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__c_h_1_6) 
           & (0U == (3U & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_1_lpi_1_dfm))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_and_85_nl 
        = ((0U != (3U & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_1_lpi_1_dfm))) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__c_h_1_6));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_else_o_tct_30_1_1_sva 
        = (0x3fffffffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__217__sel 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_and_unfl_1_sva;
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__217__input_0 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_obits_fixed_nor_2_nl;
                    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__217__sel)
                            ? 0x3fffffffU : vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__217__input_0);
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__217__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__Vstatic__result;
                }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__217__Vfuncout)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_else_o_tct_30_1_2_sva 
        = (0x3fffffffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__221__sel 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_and_unfl_2_sva;
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__221__input_0 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_obits_fixed_nor_7_nl;
                    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__221__sel)
                            ? 0x3fffffffU : vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__221__input_0);
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__221__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__Vstatic__result;
                }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__221__Vfuncout)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_else_o_tct_30_1_3_sva 
        = (0x3fffffffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__225__sel 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_and_unfl_3_sva;
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__225__input_0 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_obits_fixed_nor_2_nl;
                    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__225__sel)
                            ? 0x3fffffffU : vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__225__input_0);
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__225__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__Vstatic__result;
                }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__225__Vfuncout)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_else_o_tct_30_1_sva 
        = (0x3fffffffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__229__sel 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_and_unfl_sva;
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__229__input_0 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_obits_fixed_nor_7_nl;
                    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__229__sel)
                            ? 0x3fffffffU : vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__229__input_0);
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__229__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__Vstatic__result;
                }(), vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__229__Vfuncout)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl_22 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl_19) 
           & (2U == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_in_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_bawt)) 
                 & ((~ (IData)(vlSelfRef.__PVT__chn_out_rsci_unreg_inst__DOT__in_0)) 
                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_chn_out_wait_dp_inst__DOT__chn_out_rsci_bawt))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_ld_core_psct_mx0c0 
        = (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_6_mdf) 
                 | ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__201__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__201__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_110_cse)) 
                 | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_bawt)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__201__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_6_mdf;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__201__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__201__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__201__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__201__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_9_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__201__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_s_1_1_2__203__sel 
        = (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl_7) 
            & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_bawt) 
               & ((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_ew_mul_cvt_bypass)) 
                  & (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_core_fsm_inst__DOT__state_var)
                       ? 2U : 1U) >> 1U)))) | ((2U 
                                                != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_proc_precision)) 
                                               & ((IData)(vlSelfRef.__PVT__chn_out_rsci_unreg_inst__DOT__in_0) 
                                                  & ((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_ew_mul_cvt_bypass)) 
                                                     & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_bawt)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_s_1_1_2__203__sel;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_s_1_1_2__203__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_NV_NVDLA_SDP_CORE_Y_cvt_core_nvdla_int_h_ln346_assert_oWidth_ge_aWidth_p_bWidth_sig_mx0w1 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_s_1_1_2__203__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__196__sel 
        = (2U != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__196__input_1 
        = ((2U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_proc_precision)) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl_17));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__196__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl_7;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__196__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__196__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__196__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__196__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_30_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__196__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_tmp 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl_7));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_1_IsNaN_5U_23U_1_IsNaN_5U_23U_1_and_3_tmp 
        = ((IData)(NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_10) 
           & (0x1fU == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_lpi_1_dfm)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_lpi_1_dfm 
        = (1U & (~ ((0x1fU != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_lpi_1_dfm)) 
                    | (IData)(NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_10))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_exs_71_0 
        = ((0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_lpi_1_dfm)) 
           | (IData)(NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_6));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsDenorm_5U_23U_land_lpi_1_dfm 
        = ((IData)(NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_6) 
           & (0U == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_lpi_1_dfm)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__rtn 
        = ((((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__c_h_1_10) 
             << 4U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_and_85_nl) 
                        << 3U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__c_h_1_2) 
                                   & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3)) 
                                      | (0U == (3U 
                                                & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_lpi_1_dfm))))) 
                                  << 2U))) | (((IData)(
                                                       (((0U 
                                                          == 
                                                          (0x0300U 
                                                           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_lpi_1_dfm))) 
                                                         & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_and_85_nl))) 
                                                        & ((0U 
                                                            != 
                                                            (0x00c0U 
                                                             & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_lpi_1_dfm))) 
                                                           | (0U 
                                                              == 
                                                              (3U 
                                                               & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_lpi_1_dfm) 
                                                                  >> 4U)))))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_lpi_1_dfm) 
                                                       >> 9U) 
                                                      | ((1U 
                                                          == 
                                                          (3U 
                                                           & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_lpi_1_dfm) 
                                                              >> 7U))) 
                                                         | (((((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_lpi_1_dfm) 
                                                               >> 5U) 
                                                              | (1U 
                                                                 == 
                                                                 (3U 
                                                                  & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_lpi_1_dfm) 
                                                                     >> 3U)))) 
                                                             & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__c_h_1_2)) 
                                                            | (((((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_lpi_1_dfm) 
                                                                  >> 1U) 
                                                                 | (1U 
                                                                    == 
                                                                    (2U 
                                                                     & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_lpi_1_dfm) 
                                                                        << 1U)))) 
                                                                & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__c_h_1_6)) 
                                                               | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__c_h_1_10)))))) 
                                                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__c_h_1_10)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_1_IsNaN_5U_23U_1_IsNaN_5U_23U_1_and_2_tmp 
        = ((IData)(NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_11) 
           & (0x1fU == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_3_lpi_1_dfm)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_3_lpi_1_dfm 
        = (1U & (~ ((0x1fU != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_3_lpi_1_dfm)) 
                    | (IData)(NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_11))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_exs_79_0 
        = ((0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_3_lpi_1_dfm)) 
           | (IData)(NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_7));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsDenorm_5U_23U_land_3_lpi_1_dfm 
        = ((IData)(NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_7) 
           & (0U == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_3_lpi_1_dfm)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__rtn 
        = ((((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__c_h_1_10) 
             << 4U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_and_85_nl) 
                        << 3U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__c_h_1_2) 
                                   & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3)) 
                                      | (0U == (3U 
                                                & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_3_lpi_1_dfm))))) 
                                  << 2U))) | (((IData)(
                                                       (((0U 
                                                          == 
                                                          (0x0300U 
                                                           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_3_lpi_1_dfm))) 
                                                         & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_and_85_nl))) 
                                                        & ((0U 
                                                            != 
                                                            (0x00c0U 
                                                             & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_3_lpi_1_dfm))) 
                                                           | (0U 
                                                              == 
                                                              (3U 
                                                               & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_3_lpi_1_dfm) 
                                                                  >> 4U)))))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_3_lpi_1_dfm) 
                                                       >> 9U) 
                                                      | ((1U 
                                                          == 
                                                          (3U 
                                                           & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_3_lpi_1_dfm) 
                                                              >> 7U))) 
                                                         | (((((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_3_lpi_1_dfm) 
                                                               >> 5U) 
                                                              | (1U 
                                                                 == 
                                                                 (3U 
                                                                  & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_3_lpi_1_dfm) 
                                                                     >> 3U)))) 
                                                             & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__c_h_1_2)) 
                                                            | (((((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_3_lpi_1_dfm) 
                                                                  >> 1U) 
                                                                 | (1U 
                                                                    == 
                                                                    (2U 
                                                                     & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_3_lpi_1_dfm) 
                                                                        << 1U)))) 
                                                                & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__c_h_1_6)) 
                                                               | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__c_h_1_10)))))) 
                                                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__c_h_1_10)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_1_IsNaN_5U_23U_1_IsNaN_5U_23U_1_and_1_tmp 
        = ((IData)(NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_12) 
           & (0x1fU == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_2_lpi_1_dfm)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_2_lpi_1_dfm 
        = (1U & (~ ((0x1fU != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_2_lpi_1_dfm)) 
                    | (IData)(NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_12))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_exs_87_0 
        = ((0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_2_lpi_1_dfm)) 
           | (IData)(NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_8));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsDenorm_5U_23U_land_2_lpi_1_dfm 
        = ((IData)(NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_8) 
           & (0U == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_2_lpi_1_dfm)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__rtn 
        = ((((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__c_h_1_10) 
             << 4U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_and_85_nl) 
                        << 3U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__c_h_1_2) 
                                   & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3)) 
                                      | (0U == (3U 
                                                & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_2_lpi_1_dfm))))) 
                                  << 2U))) | (((IData)(
                                                       (((0U 
                                                          == 
                                                          (0x0300U 
                                                           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_2_lpi_1_dfm))) 
                                                         & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_and_85_nl))) 
                                                        & ((0U 
                                                            != 
                                                            (0x00c0U 
                                                             & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_2_lpi_1_dfm))) 
                                                           | (0U 
                                                              == 
                                                              (3U 
                                                               & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_2_lpi_1_dfm) 
                                                                  >> 4U)))))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_2_lpi_1_dfm) 
                                                       >> 9U) 
                                                      | ((1U 
                                                          == 
                                                          (3U 
                                                           & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_2_lpi_1_dfm) 
                                                              >> 7U))) 
                                                         | (((((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_2_lpi_1_dfm) 
                                                               >> 5U) 
                                                              | (1U 
                                                                 == 
                                                                 (3U 
                                                                  & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_2_lpi_1_dfm) 
                                                                     >> 3U)))) 
                                                             & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__c_h_1_2)) 
                                                            | (((((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_2_lpi_1_dfm) 
                                                                  >> 1U) 
                                                                 | (1U 
                                                                    == 
                                                                    (2U 
                                                                     & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_2_lpi_1_dfm) 
                                                                        << 1U)))) 
                                                                & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__c_h_1_6)) 
                                                               | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__c_h_1_10)))))) 
                                                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__c_h_1_10)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_exs_95_0 
        = ((0U != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_1_lpi_1_dfm)) 
           | (IData)(NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_9));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsDenorm_5U_23U_land_1_lpi_1_dfm 
        = ((IData)(NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_9) 
           & (0U == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_1_lpi_1_dfm)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_1_IsNaN_5U_23U_1_IsNaN_5U_23U_1_and_tmp 
        = ((IData)(NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_13) 
           & (0x1fU == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_1_lpi_1_dfm)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_1_lpi_1_dfm 
        = (1U & (~ ((0x1fU != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_1_lpi_1_dfm)) 
                    | (IData)(NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_13))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__rtn 
        = ((((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__c_h_1_10) 
             << 4U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_and_85_nl) 
                        << 3U) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__c_h_1_2) 
                                   & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3)) 
                                      | (0U == (3U 
                                                & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_1_lpi_1_dfm))))) 
                                  << 2U))) | (((IData)(
                                                       (((0U 
                                                          == 
                                                          (0x0300U 
                                                           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_1_lpi_1_dfm))) 
                                                         & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_and_85_nl))) 
                                                        & ((0U 
                                                            != 
                                                            (0x00c0U 
                                                             & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_1_lpi_1_dfm))) 
                                                           | (0U 
                                                              == 
                                                              (3U 
                                                               & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_1_lpi_1_dfm) 
                                                                  >> 4U)))))) 
                                               << 1U) 
                                              | (1U 
                                                 & ((~ 
                                                     (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_1_lpi_1_dfm) 
                                                       >> 9U) 
                                                      | ((1U 
                                                          == 
                                                          (3U 
                                                           & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_1_lpi_1_dfm) 
                                                              >> 7U))) 
                                                         | (((((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_1_lpi_1_dfm) 
                                                               >> 5U) 
                                                              | (1U 
                                                                 == 
                                                                 (3U 
                                                                  & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_1_lpi_1_dfm) 
                                                                     >> 3U)))) 
                                                             & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__c_h_1_2)) 
                                                            | (((((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_1_lpi_1_dfm) 
                                                                  >> 1U) 
                                                                 | (1U 
                                                                    == 
                                                                    (2U 
                                                                     & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_1_lpi_1_dfm) 
                                                                        << 1U)))) 
                                                                & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__c_h_1_6)) 
                                                               | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__c_h_1_10)))))) 
                                                    | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__c_h_1_10)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_and_cse 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__main_stage_v_1)) 
               | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl_17))) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_14 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl_17)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_core_fsm_inst__DOT__core_wen));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__199__sel 
        = ((2U != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6)) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__main_stage_v_1));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__199__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_tmp;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__199__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_tmp;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__199__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__199__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__199__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__199__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_47_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__199__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_tmp_3 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_ew_mul_cvt_bypass) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_tmp));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_tmp_2 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_tmp)) 
                 | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_ew_mul_cvt_bypass)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__237__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__main_stage_v_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__237__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_tmp;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__237__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_tmp;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__237__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__237__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__237__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__237__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_tmp_1 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__237__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_3_nl 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_lpi_1_dfm) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsDenorm_5U_23U_land_lpi_1_dfm));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__365__sel 
        = (IData)(((0ULL == (0x7c00000000000000ULL 
                             & vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt)) 
                   & (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_core_fsm_inst__DOT__state_var)
                        ? 2U : 1U) >> 1U)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__365__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__rtn;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__365__input_0 
        = (6U | (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_lpi_1_dfm) 
                       >> 4U)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__365__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__365__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__365__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__365__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_else_mux_7_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__365__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_2_nl 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_3_lpi_1_dfm) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsDenorm_5U_23U_land_3_lpi_1_dfm));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__363__sel 
        = (IData)(((0ULL == (0x00007c0000000000ULL 
                             & vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt)) 
                   & (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_core_fsm_inst__DOT__state_var)
                        ? 2U : 1U) >> 1U)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__363__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__rtn;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__363__input_0 
        = (6U | (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_3_lpi_1_dfm) 
                       >> 4U)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__363__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__363__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__363__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__363__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_else_mux_6_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__363__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_1_nl 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_2_lpi_1_dfm) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsDenorm_5U_23U_land_2_lpi_1_dfm));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__361__sel 
        = (IData)(((0ULL == (0x000000007c000000ULL 
                             & vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt)) 
                   & (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_core_fsm_inst__DOT__state_var)
                        ? 2U : 1U) >> 1U)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__361__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__rtn;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__361__input_0 
        = (6U | (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_2_lpi_1_dfm) 
                       >> 4U)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__361__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__361__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__361__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__361__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_else_mux_5_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__361__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_nl 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_1_lpi_1_dfm) 
           | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsDenorm_5U_23U_land_1_lpi_1_dfm));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__359__sel 
        = (IData)(((0ULL == (0x0000000000007c00ULL 
                             & vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt)) 
                   & (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_core_fsm_inst__DOT__state_var)
                        ? 2U : 1U) >> 1U)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__359__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__rtn;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__359__input_0 
        = (6U | (1U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_1_lpi_1_dfm) 
                       >> 4U)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__359__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__359__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__359__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__359__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_else_mux_4_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__359__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntMulExt_33U_16U_49U_o_and_1_cse 
        = ((IData)(vlSelfRef.NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_14) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_19_nl));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_bypass_and_4_cse 
        = ((IData)(vlSelfRef.NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_14) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_9_nl));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_and_cse 
        = ((IData)(vlSelfRef.NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_14) 
           & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_47_nl));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__356__sel 
        = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_ew_mul_cvt_bypass;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__356__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_tmp_1;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__356__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_tmp_5)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__356__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__356__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__356__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__356__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_26_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__356__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__190__sel 
        = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_ew_mul_cvt_bypass;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__190__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_tmp_5;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__190__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_tmp_1)));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__190__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__190__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__190__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__190__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_3_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__190__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_dcpl_10 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_110_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_3_nl)) 
              | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_1_IsNaN_5U_23U_1_IsNaN_5U_23U_1_and_3_tmp)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__329__sel 
        = ((4U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_3_nl)) 
                  << 2U)) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsDenorm_5U_23U_land_lpi_1_dfm) 
                              << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_lpi_1_dfm)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__329__input_1 
        = (0x0000000fU & ((IData)(1U) + (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__rtn))));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__329__input_2 
        = (0x0000000fU & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_lpi_1_dfm));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = (0x0eU & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__329__sel)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__329__input_1) 
              & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__329__sel) 
                                  >> 1U))))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__329__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__329__sel) 
                                  >> 2U))))));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__329__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_mux1h_3_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__329__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_z_out_3 
        = (0x0000007fU & ((IData)(1U) + VL_EXTEND_II(7,6, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2u_5_6__366__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_else_mux_7_nl;
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2u_5_6__366__Vfuncout 
                            = vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2u_5_6__366__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2u_5_6__366__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_dcpl_12 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_110_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_2_nl)) 
              | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_1_IsNaN_5U_23U_1_IsNaN_5U_23U_1_and_2_tmp)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__346__sel 
        = ((4U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_2_nl)) 
                  << 2U)) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsDenorm_5U_23U_land_3_lpi_1_dfm) 
                              << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_3_lpi_1_dfm)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__346__input_1 
        = (0x0000000fU & ((IData)(1U) + (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__rtn))));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__346__input_2 
        = (0x0000000fU & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_3_lpi_1_dfm));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = (0x0eU & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__346__sel)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__346__input_1) 
              & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__346__sel) 
                                  >> 1U))))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__346__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__346__sel) 
                                  >> 2U))))));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__346__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_mux1h_2_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__346__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_z_out_2 
        = (0x0000007fU & ((IData)(1U) + VL_EXTEND_II(7,6, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2u_5_6__364__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_else_mux_6_nl;
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2u_5_6__364__Vfuncout 
                            = vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2u_5_6__364__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2u_5_6__364__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_dcpl_11 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_110_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_1_nl)) 
              | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_1_IsNaN_5U_23U_1_IsNaN_5U_23U_1_and_1_tmp)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__347__sel 
        = ((4U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_1_nl)) 
                  << 2U)) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsDenorm_5U_23U_land_2_lpi_1_dfm) 
                              << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_2_lpi_1_dfm)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__347__input_1 
        = (0x0000000fU & ((IData)(1U) + (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__rtn))));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__347__input_2 
        = (0x0000000fU & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_2_lpi_1_dfm));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = (0x0eU & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__347__sel)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__347__input_1) 
              & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__347__sel) 
                                  >> 1U))))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__347__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__347__sel) 
                                  >> 2U))))));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__347__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_mux1h_1_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__347__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_z_out_1 
        = (0x0000007fU & ((IData)(1U) + VL_EXTEND_II(7,6, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2u_5_6__362__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_else_mux_5_nl;
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2u_5_6__362__Vfuncout 
                            = vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2u_5_6__362__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2u_5_6__362__Vfuncout)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_dcpl 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_110_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_nl)) 
              | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_1_IsNaN_5U_23U_1_IsNaN_5U_23U_1_and_tmp)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__194__sel 
        = ((4U & ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_nl)) 
                  << 2U)) | (((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsDenorm_5U_23U_land_1_lpi_1_dfm) 
                              << 1U) | (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_1_lpi_1_dfm)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__194__input_1 
        = (0x0000000fU & ((IData)(1U) + (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__rtn))));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__194__input_2 
        = (0x0000000fU & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_1_lpi_1_dfm));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = (0x0eU & (- (IData)((1U & (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__194__sel)))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__194__input_1) 
              & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__194__sel) 
                                  >> 1U))))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__194__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__194__sel) 
                                  >> 2U))))));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__194__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_mux1h_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__194__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_z_out 
        = (0x0000007fU & ((IData)(1U) + VL_EXTEND_II(7,6, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2u_5_6__360__vector 
                            = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_else_mux_4_nl;
                        vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2u_5_6__360__Vfuncout 
                            = vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2u_5_6__360__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2u_5_6__360__Vfuncout)))));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__357__sel 
        = (2U != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__357__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_26_nl;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__357__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_tmp_3;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__357__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__357__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__357__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__357__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_27_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__357__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__191__sel 
        = (2U != (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__191__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_3_nl;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__191__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_tmp_2;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__191__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__191__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__191__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__191__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_4_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__191__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__322__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_exs_71_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__322__input_1 
        = (3U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_z_out_3) 
                 >> 2U));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__322__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__322__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__322__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_23_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__322__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__324__sel 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_z_out_3));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__324__input_1 
        = (3U & (- (IData)((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_exs_71_0))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__324__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__324__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__324__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_14_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__324__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__377__arg2 
        = (0x0000003fU & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_z_out_3));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__377__arg1 
        = (0x003fe000U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_22_13_lpi_1_dfm) 
                          << 0x0000000dU));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__378__arg2 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__377__arg2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__378__arg1 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__377__arg1;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__378__arg1;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x007fffffU & VL_SHIFTL_III(23,23,6, vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__378__arg2)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__378__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__Vstatic__result;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__377__Vfuncout 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__378__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_sva_2 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__377__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__339__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_exs_79_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__339__input_1 
        = (3U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_z_out_2) 
                 >> 2U));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__339__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__339__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__339__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_21_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__339__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__341__sel 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_z_out_2));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__341__input_1 
        = (3U & (- (IData)((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_exs_79_0))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__341__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__341__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__341__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_10_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__341__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__375__arg2 
        = (0x0000003fU & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_z_out_2));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__375__arg1 
        = (0x003fe000U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_22_13_3_lpi_1_dfm) 
                          << 0x0000000dU));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__376__arg2 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__375__arg2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__376__arg1 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__375__arg1;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__376__arg1;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x007fffffU & VL_SHIFTL_III(23,23,6, vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__376__arg2)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__376__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__375__Vfuncout 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__376__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_3_sva_2 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__375__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__352__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_exs_87_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__352__input_1 
        = (3U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_z_out_1) 
                 >> 2U));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__352__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__352__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__352__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_19_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__352__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__354__sel 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_z_out_1));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__354__input_1 
        = (3U & (- (IData)((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_exs_87_0))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__354__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__354__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__354__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_6_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__354__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__373__arg2 
        = (0x0000003fU & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_z_out_1));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__373__arg1 
        = (0x003fe000U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_22_13_2_lpi_1_dfm) 
                          << 0x0000000dU));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__374__arg2 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__373__arg2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__374__arg1 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__373__arg1;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__374__arg1;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x007fffffU & VL_SHIFTL_III(23,23,6, vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__374__arg2)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__374__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__Vstatic__result;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__373__Vfuncout 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__374__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_2_sva_2 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u__373__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__195__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_1_IsNaN_5U_23U_1_IsNaN_5U_23U_1_and_tmp;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__195__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_mux1h_nl;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__195__sel)
            ? 0x0fU : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__195__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__195__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_or_3_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__195__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__334__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_exs_95_0;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__334__input_1 
        = (3U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_z_out) 
                 >> 2U));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__334__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__334__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__334__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_17_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__334__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__336__sel 
        = (1U & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_z_out));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__336__input_1 
        = (3U & (- (IData)((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_exs_95_0))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__336__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__336__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__336__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_2_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__336__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__371__arg2 
        = (0x0000003fU & (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_z_out));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__371__arg1 
        = (0x003fe000U & ((IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_22_13_1_lpi_1_dfm) 
                          << 0x0000000dU));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__372__arg2 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__371__arg2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__372__arg1 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__371__arg1;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__372__arg1;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x007fffffU & VL_SHIFTL_III(23,23,6, vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__372__arg2)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__372__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__371__Vfuncout 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__372__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_1_sva_2 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__371__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__358__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_bypass_1_sva_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__358__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_27_nl;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__358__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_tmp_3;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__358__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__358__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__358__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__358__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_28_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__358__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__192__sel 
        = (2U == (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__192__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_tmp_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__192__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_4_nl;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__192__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__192__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__192__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__192__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_46_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__192__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__323__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_3_nl)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__323__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_23_nl;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__323__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__323__input_1)
            : 1U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__323__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_mux_58_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__323__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__325__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_3_nl)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__325__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_14_nl;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__325__input_0 
        = (3U & (((IData)(0x31U) + (0x00000020U | (0x0000001fU 
                                                   & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__rtn))))) 
                 >> 4U));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__325__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__325__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__325__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__325__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_mux_42_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__325__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__330__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_lpi_1_dfm;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__330__input_0 
        = (0x000003ffU & (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_sva_2 
                          >> 0x0dU));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__330__sel)
            ? 0x03ffU : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__330__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__330__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_or_30_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__330__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__331__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_lpi_1_dfm;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__331__input_0 
        = (0x000003ffU & vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_sva_2);
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__331__sel)
            ? 0x03ffU : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__331__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__331__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_or_31_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__331__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__332__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_3_nl;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__332__input_1 
        = (7U & (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_sva_2 
                 >> 0x0aU));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__332__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__332__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__332__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_22_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__332__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__340__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_2_nl)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__340__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_21_nl;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__340__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__340__input_1)
            : 1U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__340__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_mux_54_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__340__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__342__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_2_nl)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__342__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_10_nl;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__342__input_0 
        = (3U & (((IData)(0x31U) + (0x00000020U | (0x0000001fU 
                                                   & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__rtn))))) 
                 >> 4U));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__342__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__342__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__342__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__342__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_mux_40_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__342__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__348__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_3_lpi_1_dfm;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__348__input_0 
        = (0x000003ffU & (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_3_sva_2 
                          >> 0x0dU));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__348__sel)
            ? 0x03ffU : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__348__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__348__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_or_34_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__348__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__349__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_3_lpi_1_dfm;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__349__input_0 
        = (0x000003ffU & vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_3_sva_2);
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__349__sel)
            ? 0x03ffU : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__349__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__349__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_or_35_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__349__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__350__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_2_nl;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__350__input_1 
        = (7U & (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_3_sva_2 
                 >> 0x0aU));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__350__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__350__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__350__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_20_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__350__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__353__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_1_nl)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__353__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_19_nl;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__353__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__353__input_1)
            : 1U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__353__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_mux_50_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__353__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__355__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_1_nl)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__355__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_6_nl;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__355__input_0 
        = (3U & (((IData)(0x31U) + (0x00000020U | (0x0000001fU 
                                                   & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__rtn))))) 
                 >> 4U));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__355__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__355__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__355__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__355__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_mux_38_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__355__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__338__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_2_lpi_1_dfm;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__338__input_0 
        = (0x000003ffU & vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_2_sva_2);
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__338__sel)
            ? 0x03ffU : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__338__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__338__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_or_32_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__338__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__343__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_2_lpi_1_dfm;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__343__input_0 
        = (0x000003ffU & (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_2_sva_2 
                          >> 0x0dU));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__343__sel)
            ? 0x03ffU : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__343__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__343__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_or_33_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__343__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__344__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_1_nl;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__344__input_1 
        = (7U & (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_2_sva_2 
                 >> 0x0aU));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__344__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__344__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__344__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_18_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__344__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_6_2_2__197__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_30_nl;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_6_2_2__197__input_1 
        = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__cfg_ew_mul_cvt_truncate;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_6_2_2__197__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_or_3_nl;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_6_2_2__197__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_6_2_2__197__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_6_2_2__197__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_6_2_2__197__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_truncate_mux1h_1_itm 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_6_2_2__197__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__335__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_nl)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__335__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_17_nl;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__335__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__335__input_1)
            : 1U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__335__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_mux_46_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__335__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__337__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_nl)));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__337__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_2_nl;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__337__input_0 
        = (3U & (((IData)(0x31U) + (0x00000020U | (0x0000001fU 
                                                   & (~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__rtn))))) 
                 >> 4U));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__337__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__337__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__337__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__337__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_mux_36_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__337__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__321__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_1_lpi_1_dfm;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__321__input_0 
        = (0x000003ffU & vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_1_sva_2);
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__321__sel)
            ? 0x03ffU : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__321__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__321__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_or_27_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__321__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__326__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_1_lpi_1_dfm;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__326__input_0 
        = (0x000003ffU & (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_1_sva_2 
                          >> 0x0dU));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__326__sel)
            ? 0x03ffU : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__326__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__326__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_or_29_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__326__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__327__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_nl;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__327__input_1 
        = (7U & (vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_1_sva_2 
                 >> 0x0aU));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__327__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__327__input_1)
            : 0U);
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__327__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__327__Vfuncout;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__193__sel 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_3_nl;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__193__input_1 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_tmp_2;
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__193__input_0 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_46_nl;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__193__sel)
            ? (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__193__input_1)
            : (IData)(__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__193__input_0));
    __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__193__Vfuncout 
        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_6_nl 
        = __Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__193__Vfuncout;
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_nor_3_nl 
        = (7U & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__333__sel 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_lpi_1_dfm;
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__333__input_0 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_22_nl;
                    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__333__sel)
                            ? 7U : (IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__333__input_0));
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__333__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__333__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_nor_2_nl 
        = (7U & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__351__sel 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_3_lpi_1_dfm;
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__351__input_0 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_20_nl;
                    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__351__sel)
                            ? 7U : (IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__351__input_0));
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__351__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__351__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_nor_1_nl 
        = (7U & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__345__sel 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_2_lpi_1_dfm;
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__345__input_0 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_18_nl;
                    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__345__sel)
                            ? 7U : (IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__345__input_0));
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__345__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__345__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_nor_nl 
        = (7U & (~ ([&]() {
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__328__sel 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_1_lpi_1_dfm;
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__328__input_0 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_nl;
                    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__328__sel)
                            ? 7U : (IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__328__input_0));
                    vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__328__Vfuncout 
                        = vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__328__Vfuncout))));
    vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntMulExt_33U_16U_49U_o_and_cse 
        = ((~ (IData)(vlSelfRef.__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_6_nl)) 
           & (IData)(vlSelfRef.NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_14));
}

VL_ATTR_COLD void Vsim_NV_NVDLA_SDP_CORE_Y_cvt___ctor_var_reset(Vsim_NV_NVDLA_SDP_CORE_Y_cvt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_NV_NVDLA_SDP_CORE_Y_cvt___ctor_var_reset\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->nvdla_core_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13795098205236914507ull);
    vlSelf->nvdla_core_rstn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15781730201853965120ull);
    vlSelf->chn_in_rsc_z = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11387112048336801650ull);
    vlSelf->chn_in_rsc_vz = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11747931537122778583ull);
    vlSelf->chn_in_rsc_lz = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1132440173762854550ull);
    vlSelf->cfg_bypass_rsc_z = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 300329256700532220ull);
    vlSelf->cfg_offset_rsc_z = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13992543623661228148ull);
    vlSelf->cfg_scale_rsc_z = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2687687723390649976ull);
    vlSelf->cfg_truncate_rsc_z = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7587395491218575582ull);
    vlSelf->cfg_nan_to_zero_rsc_z = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7337238092229602695ull);
    vlSelf->cfg_precision_rsc_z = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1006618378060035410ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->chn_out_rsc_z, __VscopeHash, 6772901213845646204ull);
    vlSelf->chn_out_rsc_vz = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9909495920200153470ull);
    vlSelf->chn_out_rsc_lz = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6257812264970986956ull);
    vlSelf->__PVT__chn_in_rsci_unreg_inst__DOT__in_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1071313524087314472ull);
    vlSelf->__PVT__chn_out_rsci_unreg_inst__DOT__in_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11794708927658098623ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_iswt0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9872374515542590573ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_ld_core_psct = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14255677664758163372ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_d_mxwt = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4541480988781393428ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__core_wten = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 114657867952360756ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_iswt0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5444980057079733074ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_127 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7049229467837283069ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_122_119 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10820207458213396214ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_96 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16977781592730575444ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_95 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17868337602742515384ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_90_87 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9466231686777919047ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_64 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9530772284488833628ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_63 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13808352898821668369ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_58_55 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9327006039085849606ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_32 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9966936826449197092ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_31 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8119385426812322024ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_26_23 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16407991419725797062ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13091755854026326010ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_126_125 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11959680932980732823ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_124_123 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13550460023539140572ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_118_109 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 11574067322133816129ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_108_106 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4644686758452699635ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_105_97 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 6457497431258555313ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_94_93 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6051148287440104847ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_92_91 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3957458601831627581ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_86_77 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 17459644450065221757ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_76_74 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15991205112266822842ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_73_65 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 14559189531177646362ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_62_61 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14384998309456378340ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_60_59 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3172824489514794983ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_54_45 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 14127642957366457509ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_44_42 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2470333352122636283ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_41_33 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 8832276139316120834ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_30_29 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7502597737233912097ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_28_27 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12932387510402960634ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_22_13 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 8956657900161798745ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_12_10 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16431262515780057702ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_rsci_d_9_1 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 9246633380123431604ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_1_IsNaN_5U_23U_1_IsNaN_5U_23U_1_and_3_tmp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4549605116829698945ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_1_IsNaN_5U_23U_1_IsNaN_5U_23U_1_and_2_tmp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12651724172326982680ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_1_IsNaN_5U_23U_1_IsNaN_5U_23U_1_and_1_tmp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5565837011727807146ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_1_IsNaN_5U_23U_1_IsNaN_5U_23U_1_and_tmp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8995043044218011730ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5669969831393957749ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl_7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12378794075105575764ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_tmp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10772079160548738025ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_tmp_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15792094204848779506ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_tmp_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6960033458364831780ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_tmp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11131585895805621034ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_tmp_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11366182929759219127ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_tmp_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2119427998814783696ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl_17 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18162420541184169240ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl_19 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10641470192955779248ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl_22 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11880102591541779234ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_dcpl_23 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3480250995794834926ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__main_stage_v_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15050224101709561962ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_3_0_lpi_1_dfm_6 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5525339643162041449ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_3_0_3_lpi_1_dfm_6 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17213875711156658223ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_3_0_2_lpi_1_dfm_6 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2771264828484377914ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_bypass_1_sva_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7143059256945688777ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__data_in_data_sva_78 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 155917803693762480ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntMulExt_33U_16U_49U_o_mul_itm_2 = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 14898426231631241075ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntMulExt_33U_16U_49U_o_mul_1_itm_2 = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 8220412704720300491ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntMulExt_33U_16U_49U_o_mul_itm_2 = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 3810164385501208173ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntMulExt_33U_16U_49U_o_mul_1_itm_2 = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 4642157676450850774ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_cvt_1_if_and_9_itm_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4995558326827972941ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_cvt_1_if_and_3_itm_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10314146068825428031ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_cvt_1_if_and_6_itm_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1643036252359495452ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_cvt_1_if_and_itm_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 762414309428994151ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_6 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11965777770298713549ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_bypass_1_sva_st_10 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7233785628094671237ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_1_sva_st_8 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15025941211365566292ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_lpi_1_dfm_5_3_2_1 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1900783225899920117ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_lpi_1_dfm_5_1_0_1 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15173694094358478954ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_lpi_1_dfm_5_22_13_1 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 16771302281256685647ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_lpi_1_dfm_5_12_10_1 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6055150543008469838ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_lpi_1_dfm_5_9_0_1 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 15901931602190657029ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_3_lpi_1_dfm_5_3_2_1 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17167649946229264016ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_3_lpi_1_dfm_5_1_0_1 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5632300151389860242ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_3_lpi_1_dfm_5_22_13_1 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 8703697702716140939ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_3_lpi_1_dfm_5_12_10_1 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 265370076044357056ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_3_lpi_1_dfm_5_9_0_1 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 3536908160502481989ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_2_lpi_1_dfm_5_3_2_1 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14086535636673154932ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_2_lpi_1_dfm_5_1_0_1 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10589848221453687952ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_2_lpi_1_dfm_5_22_13_1 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 11339492132705980930ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_2_lpi_1_dfm_5_12_10_1 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6589063819603342319ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_2_lpi_1_dfm_5_9_0_1 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 8101274875947631536ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_1_lpi_1_dfm_5_3_2_1 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2179477171879354346ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_expo_7_4_1_lpi_1_dfm_5_1_0_1 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11421255531756152189ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_1_lpi_1_dfm_5_22_13_1 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 6655334312065740552ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_1_lpi_1_dfm_5_12_10_1 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4754725569672116892ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_1_lpi_1_dfm_5_9_0_1 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 4899144144325398715ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__and_6_mdf = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3911645593830119101ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsDenorm_5U_23U_land_lpi_1_dfm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13304849390925953153ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_lpi_1_dfm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8693125562021619079ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsDenorm_5U_23U_land_3_lpi_1_dfm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10535474401951763552ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_3_lpi_1_dfm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16944256686959356401ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsDenorm_5U_23U_land_2_lpi_1_dfm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6000893961515095802ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_2_lpi_1_dfm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12514236987193092809ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsDenorm_5U_23U_land_1_lpi_1_dfm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10282132858858404610ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsInf_5U_23U_land_1_lpi_1_dfm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3132947329435423596ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_land_lpi_1_dfm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1957207938191570766ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_land_3_lpi_1_dfm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7817790336443705398ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_land_2_lpi_1_dfm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15972498951324206203ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_land_1_lpi_1_dfm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11183376721493055137ull);
    VL_SCOPED_RAND_RESET_W(112, vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_sva, __VscopeHash, 17003124573083044696ull);
    VL_SCOPED_RAND_RESET_W(112, vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_3_sva, __VscopeHash, 15970681502842782282ull);
    VL_SCOPED_RAND_RESET_W(112, vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_2_sva, __VscopeHash, 3484911410559733334ull);
    VL_SCOPED_RAND_RESET_W(112, vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_mbits_fixed_1_sva, __VscopeHash, 11096030560627515657ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_22_13_lpi_1_dfm = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 15051426444371030720ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_lpi_1_dfm = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 872809207626656585ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_22_13_3_lpi_1_dfm = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 8733911809723540379ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_3_lpi_1_dfm = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3749704746576856885ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_22_13_2_lpi_1_dfm = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 10894107851270660550ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_2_lpi_1_dfm = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13312839039388853534ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_22_13_1_lpi_1_dfm = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 2821515761908718560ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_expo_1_lpi_1_dfm = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6409475142146005526ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_lpi_1_dfm = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 17706263070220360421ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_3_lpi_1_dfm = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 11662994833898782457ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_2_lpi_1_dfm = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 12082229487150085411ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_if_op_mant_1_lpi_1_dfm = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 7219238757550174088ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_sva = VL_SCOPED_RAND_RESET_Q(51, __VscopeHash, 16554482632658714413ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_3_sva = VL_SCOPED_RAND_RESET_Q(51, __VscopeHash, 16530983099678724371ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_2_sva = VL_SCOPED_RAND_RESET_Q(51, __VscopeHash, 9016254034699799539ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_IntShiftRight_49U_6U_32U_obits_fixed_acc_sat_1_sva = VL_SCOPED_RAND_RESET_Q(51, __VscopeHash, 11356343942217647778ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_9_0_lpi_1_dfm = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 8328364366700896493ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_9_0_3_lpi_1_dfm = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 17227311780096389159ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_9_0_2_lpi_1_dfm = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 5347926838028131247ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpMantWidthInc_5U_10U_23U_1U_1U_o_mant_9_0_1_lpi_1_dfm = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 1744797954613559584ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_out_and_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12223119579196917692ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__reg_chn_out_rsci_ld_core_psct_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12969080400243355849ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_dcpl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7268571257085641309ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_dcpl_10 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12870379371036158289ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_dcpl_11 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15075195109185987140ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_dcpl_12 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5934499517545089312ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_1_sva_2 = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 11374440099520685067ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_sva_2 = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 11032629986309934425ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_2_sva_2 = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 734732229071824381ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_o_mant_3_sva_2 = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 11205168169441823970ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_truncate_mux1h_1_itm = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 16103583792707759326ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__reg_cfg_truncate_1_itm = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16055736231510057920ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__reg_cfg_truncate_1_1_itm = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9713707642975326938ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_z_out = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17796855911513107243ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_z_out_1 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13468684671783057749ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_z_out_2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2057601348987068501ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_z_out_3 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4832798071041435026ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__chn_in_rsci_ld_core_psct_mx0c0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10185453955686772062ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_NV_NVDLA_SDP_CORE_Y_cvt_core_nvdla_float_h_ln433_assert_iExpoWidth_le_oExpoWidth_1_sig_mx0w1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 88478940419267514ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_NV_NVDLA_SDP_CORE_Y_cvt_core_nvdla_int_h_ln346_assert_oWidth_ge_aWidth_p_bWidth_sig_mx0w1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13534068888898944343ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__main_stage_v_1_mx0c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1585842849575894214ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_else_o_tct_30_1_1_sva = VL_SCOPED_RAND_RESET_I(30, __VscopeHash, 6718697907247011532ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_nor_ovfl_1_sva = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16761902957641298931ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_and_unfl_1_sva = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15200951875471744261ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_else_o_tct_30_1_2_sva = VL_SCOPED_RAND_RESET_I(30, __VscopeHash, 16582536003335839665ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_nor_ovfl_2_sva = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13219898468706013853ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_and_unfl_2_sva = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11305821232038416767ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_else_o_tct_30_1_3_sva = VL_SCOPED_RAND_RESET_I(30, __VscopeHash, 18173602465888971342ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_nor_ovfl_3_sva = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15601922548211038081ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_and_unfl_3_sva = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11814960214997207927ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_else_o_tct_30_1_sva = VL_SCOPED_RAND_RESET_I(30, __VscopeHash, 14243602882358241973ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_nor_ovfl_sva = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3921112293044407355ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntShiftRight_49U_6U_32U_obits_fixed_and_unfl_sva = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16097079084963581738ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_63 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13510564081267317504ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_asn_65 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3199863255910548336ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_exs_71_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11465651888358173085ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_exs_79_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10808815914931875383ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_exs_87_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17950243918894733792ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_exs_95_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9842651975659202758ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_110_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1080284920921836998ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_precision_and_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5698673774579516818ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cfg_bypass_and_4_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2443217273860239016ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntMulExt_33U_16U_49U_o_and_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11141616122873806073ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IntMulExt_33U_16U_49U_o_and_1_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3761961024911887093ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_mux_39_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 713684746943562163ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_mux_40_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 560012241751021351ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_mux_41_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14406584913106799042ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_mux_42_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18432465577894937448ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_mux_43_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2458157749475662979ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_mux_44_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4220328951924510894ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_mux_45_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1883867011909994678ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_else_mux_46_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16253488961310985788ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_6_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16673493952653632733ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_46_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6589236482712867701ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_4_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17218812861370378454ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_3_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17455661551330723267ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__or_3_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 946203662940355206ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_cvt_1_IntSubExt_16U_32U_33U_o_acc_nl = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 12046592727895704659ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_or_3_nl = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4221019815954291948ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_mux1h_nl = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2000225244951456435ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_30_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14515868152645131210ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_19_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2671907002413830608ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_cvt_2_IntSubExt_16U_32U_33U_o_acc_1_nl = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 4891730031648456970ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_cvt_3_IntSubExt_16U_32U_33U_o_acc_nl = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 3383167655373033958ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__nl_cvt_4_IntSubExt_16U_32U_33U_o_acc_1_nl = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 5671628720769997106ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_47_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7734648507930524153ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_25_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6445786179214503497ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_28_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4985602956270582584ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_27_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16018850686686589804ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_26_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9465806086554452188ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__mux_9_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6008350201965346713ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_or_27_nl = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 8851145137055444925ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_mux_58_nl = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9401845343803653534ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_23_nl = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15558455418153211862ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_mux_42_nl = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7842152075607803881ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_14_nl = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2399534918798933221ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_or_29_nl = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 11378462207862833636ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_nor_nl = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1566044639065311375ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_nl = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3767398434631704804ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4358966125919056878ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_mux1h_3_nl = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13053673841518473286ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_or_30_nl = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 4862407435084789050ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_or_31_nl = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 13721246953356009272ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_nor_3_nl = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1280274359523516533ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_22_nl = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 963416671043357130ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_3_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13852130053084834069ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_mux_46_nl = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2272131946338488739ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_17_nl = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15906503204000825603ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_mux_36_nl = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17262477319513955903ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_2_nl = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4068016320034308280ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_or_32_nl = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 4082861405970861609ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_mux_54_nl = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4600813933098500693ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_21_nl = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6669864817508908078ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_mux_40_nl = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9600863774438979346ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_10_nl = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8242183142420352957ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_or_33_nl = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 5522000495270040292ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_nor_1_nl = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4979789885102428530ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_18_nl = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11995776847309959145ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_1_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4594910796517272133ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_mux1h_2_nl = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8865074723162703051ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_mux1h_1_nl = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13413872860109422225ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_or_34_nl = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 10333435100669383520ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_or_35_nl = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 13719202638199365113ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_nor_2_nl = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16635527765933836807ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_20_nl = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7705851995449633716ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_not_2_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8893568020822617154ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_mux_50_nl = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7246478707473638577ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_19_nl = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17310268562112844448ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_mux_38_nl = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 395593115979360981ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_FpExpoWidthInc_5U_8U_23U_1U_1U_and_6_nl = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3887969554473218093ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_aelse_not_11_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9188613100740447662ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_aelse_not_10_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18183385387281053306ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_aelse_not_9_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9004984169645506645ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__IsNaN_5U_23U_aelse_not_8_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13454892982973184402ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_obits_fixed_nor_2_nl = VL_SCOPED_RAND_RESET_I(30, __VscopeHash, 5207086459881057089ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_obits_fixed_and_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12770192978979865615ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_obits_fixed_nor_7_nl = VL_SCOPED_RAND_RESET_I(30, __VscopeHash, 11920756070262383160ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_obits_fixed_and_2_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16649911648000148195ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_obits_fixed_nor_2_nl = VL_SCOPED_RAND_RESET_I(30, __VscopeHash, 7271800032931181366ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_obits_fixed_and_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15526741582759164784ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_obits_fixed_nor_7_nl = VL_SCOPED_RAND_RESET_I(30, __VscopeHash, 5062256838516872892ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_obits_fixed_and_2_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3217716087661521741ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_else_mux_4_nl = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 18354240889500107883ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_else_mux_5_nl = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11773795126071769479ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_else_mux_6_nl = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3920065957430094630ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__FpExpoWidthInc_5U_8U_23U_1U_1U_else_mux_7_nl = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12769957974190862169ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10888221953399281040ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_10_3_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 12316359791321927514ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_2_3_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6437287990187304884ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_3_3_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9681512861135031116ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13715582937605289735ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX1HOT_v_9_3_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 2878319883855914227ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15699143850114646392ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 7229411559239745916ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_2_2_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13813013077483103043ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(30, __VscopeHash, 2676578109359731934ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13396846094047696026ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_4_2_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5391073114364373005ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_5_2_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10124468740713612888ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_6_2_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6580559683037485550ull);
    vlSelf->NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT____VdfgRegularize_hb732280c_0_14 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15086890090668304344ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__s = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4013360173330234230ull);
    VL_SCOPED_RAND_RESET_W(112, vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result, __VscopeHash, 16316088297805876090ull);
    VL_SCOPED_RAND_RESET_W(112, vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t, __VscopeHash, 9181497065086728077ull);
    VL_SCOPED_RAND_RESET_W(112, vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result, __VscopeHash, 11935335535845475368ull);
    VL_SCOPED_RAND_RESET_W(112, vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result_t, __VscopeHash, 514424735216324282ull);
    VL_SCOPED_RAND_RESET_W(112, vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result, __VscopeHash, 1157479620447381272ull);
    VL_SCOPED_RAND_RESET_W(112, vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t, __VscopeHash, 2248191521336533831ull);
    VL_SCOPED_RAND_RESET_W(112, vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result, __VscopeHash, 11944189152469579607ull);
    VL_SCOPED_RAND_RESET_W(112, vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_IntShiftRight_49U_6U_32U_mbits_fixed_rshift_1_rg__DOT__fshr_u__Vstatic__result_t, __VscopeHash, 5772320748668099663ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 12001873754333548132ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result_t = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 9016674519934668294ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__rtn = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16511096117723072021ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7308582303520812496ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__c_h_1_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4183291628010674121ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__c_h_1_6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16295174477988222782ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__c_h_1_10 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14469041966708073014ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_1_leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_and_85_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16497567903521530003ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__Vstatic__result = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 13713689610145369569ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__Vstatic__result_t = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 14753690948466883461ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__rtn = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6562711306773167497ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17572663212961511806ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__c_h_1_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6860816713522069332ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__c_h_1_6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6866227361645661227ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__c_h_1_10 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12389656135713504010ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_2_leading_sign_23_0_1_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_and_85_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 326179421325889406ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 16499023540675100675ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result_t = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 5869983714080327960ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__rtn = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8050820061883865275ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14554283512773342251ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__c_h_1_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3501250586664434040ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__c_h_1_6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2301793130301249411ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__c_h_1_10 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1549812529831143716ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_3_leading_sign_23_0_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_and_85_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8142892940626951445ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__Vstatic__result = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 15573842526166544497ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_FpExpoWidthInc_5U_8U_23U_1U_1U_if_1_if_lshift_1_rg__DOT__fshl_u_1__Vstatic__result_t = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 12035672968391686373ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__rtn = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9186326884376333410ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_wrs_c_18_3_sdt_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13693230891807372550ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__c_h_1_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 760302830428665791ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__c_h_1_6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11232295131328210366ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__c_h_1_10 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9867773977496340729ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__cvt_4_leading_sign_23_0_1_rg__DOT__IntLeadZero_23U_leading_sign_23_0_rtn_and_85_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4357766985956039605ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__chn_in_rsci__DOT__ld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9214329950791128011ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_ctrl_inst__DOT__chn_in_rsci_ogwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10127568769972790665ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_ctrl_inst__DOT__chn_in_rsci_pdswt0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18071436050430896271ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_ctrl_inst__DOT__chn_in_rsci_icwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6609704873681851347ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_bawt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16251956270392930540ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_biwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11507009848382995421ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_bcwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8143169912470125306ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__chn_in_rsci_d_bfwt = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 637728746979044411ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_in_rsci_chn_in_wait_dp_inst__DOT__MUX_v_64_2_2__Vstatic__result = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8053548002699023848ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_chn_out_wait_ctrl_inst__DOT__chn_out_rsci_ogwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3707372488658847690ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_chn_out_wait_ctrl_inst__DOT__chn_out_rsci_pdswt0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9502636645830240192ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_chn_out_wait_ctrl_inst__DOT__chn_out_rsci_icwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7505678753352064775ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_chn_out_wait_dp_inst__DOT__chn_out_rsci_bawt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8426981095867750750ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_chn_out_wait_dp_inst__DOT__chn_out_rsci_biwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12064219986413504426ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_chn_out_rsci_chn_out_wait_dp_inst__DOT__chn_out_rsci_bcwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9657448024291579672ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_core_fsm_inst__DOT__core_wen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7834519003395523092ull);
    vlSelf->__PVT__NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__NV_NVDLA_SDP_CORE_Y_cvt_core_core_fsm_inst__DOT__state_var = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7499288041292313233ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__26__Vfuncout = VL_SCOPED_RAND_RESET_I(30, __VscopeHash, 8282259403504089954ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__26__input_0 = VL_SCOPED_RAND_RESET_I(30, __VscopeHash, 18374296395287479364ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__26__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 900231272739260484ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__27__Vfuncout = VL_SCOPED_RAND_RESET_I(30, __VscopeHash, 5380393973629466934ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__27__input_0 = VL_SCOPED_RAND_RESET_I(30, __VscopeHash, 6141268140097522428ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__27__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7584800250299036726ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__28__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 12235531295786867252ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__28__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 18067334272707017982ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2s_1_50__29__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 619266289853810744ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2s_1_50__29__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 697982383124478361ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__30__Vfuncout = VL_SCOPED_RAND_RESET_I(30, __VscopeHash, 6727354427874160485ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__30__input_0 = VL_SCOPED_RAND_RESET_I(30, __VscopeHash, 14300903966547235655ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__30__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6644720397745759508ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__31__Vfuncout = VL_SCOPED_RAND_RESET_I(30, __VscopeHash, 8826548699536653378ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__31__input_0 = VL_SCOPED_RAND_RESET_I(30, __VscopeHash, 15117095465351498690ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__31__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8837492603159365096ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__32__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 12523958753894384124ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__32__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 5075772422403485426ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2s_1_50__33__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 1445434090777818444ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2s_1_50__33__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2900320736805469641ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__34__Vfuncout = VL_SCOPED_RAND_RESET_I(30, __VscopeHash, 14234738865928952965ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__34__input_0 = VL_SCOPED_RAND_RESET_I(30, __VscopeHash, 11929713193821305501ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__34__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13603153358467401054ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__35__Vfuncout = VL_SCOPED_RAND_RESET_I(30, __VscopeHash, 15768935994851711697ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__35__input_0 = VL_SCOPED_RAND_RESET_I(30, __VscopeHash, 7680767458104942073ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__35__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16030509573726276284ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__36__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 9089861079297868999ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__36__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 7604190937841845449ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2s_1_50__37__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 8065688005995032766ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2s_1_50__37__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1943307685020104799ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__38__Vfuncout = VL_SCOPED_RAND_RESET_I(30, __VscopeHash, 11226289265765395686ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__38__input_0 = VL_SCOPED_RAND_RESET_I(30, __VscopeHash, 13307893753580241503ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__38__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3661942502093229247ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__39__Vfuncout = VL_SCOPED_RAND_RESET_I(30, __VscopeHash, 16163115861458801750ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__39__input_0 = VL_SCOPED_RAND_RESET_I(30, __VscopeHash, 12915395992250928078ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__39__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1174417070274692985ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__40__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 10468737619283522797ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__40__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 4499642401883802259ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2s_1_50__41__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 5097636305367470837ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2s_1_50__41__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6669328204182247241ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__123__Vfuncout = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 16169167617741473260ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__123__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 18311714368756235773ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__124__Vfuncout = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 4384213893321834972ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__124__vector = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 798733949077719615ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__125__Vfuncout = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 2489425586527864592ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__125__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8911713039925665884ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__126__Vfuncout = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 15784192594975666833ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__126__vector = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13142853727553537577ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__127__Vfuncout = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 7997593725637678402ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__127__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16221873852245820894ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__128__Vfuncout = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 2940199199700174356ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__128__vector = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16861235873510397503ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__129__Vfuncout = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 5540723621255547911ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__129__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14016463000593508504ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__130__Vfuncout = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 3355832154635495246ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__130__vector = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4287010324887146133ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__138__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16190248593168004137ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__138__input_0 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1601393398302755111ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__138__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6333818491474219690ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__143__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17900319955076508709ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__143__input_0 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15956201100807048742ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__143__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16401843478815853141ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__155__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13483679967315744924ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__155__input_0 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 405402746535219049ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__155__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11552111835404511881ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__161__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12175667765228758104ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__161__input_0 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13806429349871807578ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__161__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12457722335300226976ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2u_5_6__170__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12528423106933343733ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2u_5_6__170__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8919456025270373557ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2u_5_6__172__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9103124890598178524ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2u_5_6__172__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14542713633235441067ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2u_5_6__174__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5869400164365980491ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2u_5_6__174__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17058119623768290007ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2u_5_6__176__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13061327233883493590ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2u_5_6__176__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6914858324781509993ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__216__Vfuncout = VL_SCOPED_RAND_RESET_I(30, __VscopeHash, 13310285925089471979ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__216__input_0 = VL_SCOPED_RAND_RESET_I(30, __VscopeHash, 4045137732731569511ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__216__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16912164964608377318ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__217__Vfuncout = VL_SCOPED_RAND_RESET_I(30, __VscopeHash, 17680064349170386211ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__217__input_0 = VL_SCOPED_RAND_RESET_I(30, __VscopeHash, 3725075866782162354ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__217__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9800818037653971896ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__218__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 9903102558600830203ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__218__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 13109007348283681910ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2s_1_50__219__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 80712510777749173ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2s_1_50__219__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13341150770700696202ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__220__Vfuncout = VL_SCOPED_RAND_RESET_I(30, __VscopeHash, 540452887466692795ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__220__input_0 = VL_SCOPED_RAND_RESET_I(30, __VscopeHash, 2211728003486684350ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__220__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5569986048527938554ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__221__Vfuncout = VL_SCOPED_RAND_RESET_I(30, __VscopeHash, 13591247888752353418ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__221__input_0 = VL_SCOPED_RAND_RESET_I(30, __VscopeHash, 993546285871812744ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__221__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8615680690436326510ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__222__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 16003909547446706747ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__222__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 13194701957937192971ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2s_1_50__223__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 10435520445265732078ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2s_1_50__223__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7205377189190026507ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__224__Vfuncout = VL_SCOPED_RAND_RESET_I(30, __VscopeHash, 2172552916393577723ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__224__input_0 = VL_SCOPED_RAND_RESET_I(30, __VscopeHash, 7769266588474516665ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__224__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13248511440463067033ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__225__Vfuncout = VL_SCOPED_RAND_RESET_I(30, __VscopeHash, 15310300515884288856ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__225__input_0 = VL_SCOPED_RAND_RESET_I(30, __VscopeHash, 9502081502550863863ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__225__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12887255953390447944ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__226__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 15243993334887308411ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__226__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 15039189350182416210ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2s_1_50__227__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 5076067308877658494ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2s_1_50__227__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8052140473180912876ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__228__Vfuncout = VL_SCOPED_RAND_RESET_I(30, __VscopeHash, 17205072783392066050ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__228__input_0 = VL_SCOPED_RAND_RESET_I(30, __VscopeHash, 14241476629868312013ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__228__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8142012143426579330ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__229__Vfuncout = VL_SCOPED_RAND_RESET_I(30, __VscopeHash, 9201894015516563941ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__229__input_0 = VL_SCOPED_RAND_RESET_I(30, __VscopeHash, 4110839038605406295ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_30_2_2__229__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6355299674114029509ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__230__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 11290533368349903437ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_49_50__230__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 11032602713995067387ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2s_1_50__231__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 14815821874271385793ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2s_1_50__231__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8150882487891426645ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__313__Vfuncout = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 16670271458258490126ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__313__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17114414465300638779ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__314__Vfuncout = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 11791595139754104642ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__314__vector = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3091526663564839942ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__315__Vfuncout = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 15918745158179504507ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__315__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3467459183966213575ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__316__Vfuncout = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 5696248319363862475ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__316__vector = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14710494048694797049ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__317__Vfuncout = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 10932428640154475843ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__317__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7632428286356811460ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__318__Vfuncout = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 17108058271258632157ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__318__vector = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12339647577210649342ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__319__Vfuncout = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 9680199008421161625ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_16_33__319__vector = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4058945818740302972ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__320__Vfuncout = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 1026081263714911203ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_s2s_32_33__320__vector = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11622708493110933175ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__328__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15701699490819886545ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__328__input_0 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2556036700103006953ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__328__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3594730667278517390ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__333__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9974964645387058181ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__333__input_0 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10807343618270341590ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__333__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17582714448908749962ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__345__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 451800994311427859ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__345__input_0 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17443359758295555642ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__345__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17757835093264518085ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__351__Vfuncout = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1373412544775762904ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__351__input_0 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6630261529113098520ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__MUX_v_3_2_2__351__sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9629322362704310784ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2u_5_6__360__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8020148069354505180ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2u_5_6__360__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16096104440725493270ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2u_5_6__362__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7113529555734120202ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2u_5_6__362__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10388818551002649281ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2u_5_6__364__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 1796986024682757213ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2u_5_6__364__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10532147457839131506ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2u_5_6__366__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 18278478283984505640ull);
    vlSelf->__Vfunc_NV_NVDLA_SDP_CORE_Y_cvt_core_inst__DOT__conv_u2u_5_6__366__vector = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 18420350519576693239ull);
}
