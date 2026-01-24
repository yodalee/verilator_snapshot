// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_HLS_fp32_sub___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X5__u_fp_sub__0(Vsim_HLS_fp32_sub* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_sub___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X5__u_fp_sub__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__741__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__741__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__741__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__741__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__741__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__741__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__741__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__741__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__742__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__742__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__742__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__742__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__742__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__742__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__742__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__742__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__743__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__743__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__743__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__743__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__743__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__743__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__743__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__743__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__744__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__744__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__744__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__744__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__744__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__744__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__744__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__744__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_9_1_8__748__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_9_1_8__748__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_9_1_8__748__vector;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_9_1_8__748__vector = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__749__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__749__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__749__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__749__input_0 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__749__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__749__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__749__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__749__sel = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__750__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__750__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__750__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__750__input_0 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__750__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__750__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__750__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__750__sel = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_50_2_2__754__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_50_2_2__754__Vfuncout = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_50_2_2__754__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_50_2_2__754__input_0 = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_50_2_2__754__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_50_2_2__754__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_50_2_2__754__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_50_2_2__754__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_8_1_7__755__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_8_1_7__755__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_8_1_7__755__vector;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_8_1_7__755__vector = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__756__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__756__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__756__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__756__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__756__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__756__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_3_2__757__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_3_2__757__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_3_2__757__input_2;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_3_2__757__input_2 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_3_2__757__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_3_2__757__input_1 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_3_2__757__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_3_2__757__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_3_2__757__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_3_2__757__sel = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__758__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__758__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__758__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__758__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__758__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__758__sel = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__759__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__759__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__759__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__759__input_0 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__759__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__759__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__759__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__759__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__760__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__760__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__760__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__760__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__760__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__760__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__760__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__760__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_8_1_7__761__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_8_1_7__761__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_8_1_7__761__vector;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_8_1_7__761__vector = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__762__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__762__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__762__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__762__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__762__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__762__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__763__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__763__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__763__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__763__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__763__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__763__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__766__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__766__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__766__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__766__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__766__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__766__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__766__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__766__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__767__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__767__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__767__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__767__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__767__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__767__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__767__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__767__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_24_1_23__769__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_24_1_23__769__Vfuncout = 0;
    IData/*23:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_24_1_23__769__vector;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_24_1_23__769__vector = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_23_2_2__778__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_23_2_2__778__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_23_2_2__778__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_23_2_2__778__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_23_2_2__778__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_23_2_2__778__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__779__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__779__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__779__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__779__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__779__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__779__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__779__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__779__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__780__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__780__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__780__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__780__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__780__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__780__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__780__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__780__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__781__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__781__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__781__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__781__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__781__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__781__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__781__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__781__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__782__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__782__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__782__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__782__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__782__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__782__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__782__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__782__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__783__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__783__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__783__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__783__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__783__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__783__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__783__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__783__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__784__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__784__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__784__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__784__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__784__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__784__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__784__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__784__sel = 0;
    IData/*23:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__786__arg1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__786__arg1 = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__786__arg2;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__786__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__786__sbit;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__786__sbit = 0;
    IData/*23:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__790__arg1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__790__arg1 = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__790__arg2;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__790__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__790__sbit;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__790__sbit = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__794__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__794__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__794__arg1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__794__arg1 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__794__arg2;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__794__arg2 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__795__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__795__Vfuncout = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__795__arg1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__795__arg1 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__795__arg2;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__795__arg2 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__796__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__796__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__796__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__796__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__796__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__796__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__796__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__796__sel = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__797__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__797__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__797__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__797__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__797__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__797__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__797__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__797__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_or_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_6));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__762__sel 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_4;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__762__input_1 
        = (0x000000ffU & ((vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_sva_36 
                           >> 0x00000017U) - (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__b_sva_36 
                                              >> 0x00000017U)));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__762__sel)
            ? (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__762__input_1)
            : 0U);
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__762__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_right_shift_qr_lpi_1_dfm 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__762__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__763__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_4)));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__763__input_1 
        = (0x000000ffU & ((vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__b_sva_36 
                           >> 0x00000017U) - (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_sva_36 
                                              >> 0x00000017U)));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__763__sel)
            ? (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__763__input_1)
            : 0U);
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__763__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_right_shift_qr_lpi_1_dfm 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__763__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_8_1_7__755__vector 
        = (0x000000ffU & ((IData)(1U) + (0x00000080U 
                                         | (0x0000007fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_8_1_7__755__vector), 7U));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_8_1_7__755__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_if_3_if_acc_1_itm_7_1 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_8_1_7__755__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nor_tmp_11 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3) 
            | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_5)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_tmp_16 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_1_IsNaN_8U_23U_1_nand_itm_2) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_1_nor_itm_2));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__749__sel 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_5;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__749__input_1 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_sva_2;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__749__input_0 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_sva_2;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__749__sel)
            ? __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__749__input_1
            : __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__749__input_0);
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__749__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_addend_larger_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__749__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__750__sel 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_5;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__750__input_1 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_sva_2;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__750__input_0 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_sva_2;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__750__sel)
            ? __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__750__input_1
            : __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__750__input_0);
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__750__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_addend_smaller_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__750__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_iswt0));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_20 
        = (IData)((0ULL == (0x00000000000001e0ULL & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_12 
        = (IData)((0ULL == (0x0000000001e00000ULL & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_110_3_sdt_3 
        = (IData)((0ULL == (0x0000000000001e00ULL & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_62_3_sdt_3 
        = (IData)((0ULL == (0x000000001e000000ULL & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_17 
        = (IData)((0ULL == (0x000000000001e000ULL & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_5 
        = (IData)((0ULL == (0x000001e000000000ULL & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_9 
        = (IData)((0ULL == (0x00000001e0000000ULL & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_18_3_sdt_3 
        = (IData)((0ULL == (0x00001e0000000000ULL & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_2 
        = (IData)((0ULL == (0x0001e00000000000ULL & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__reg_chn_a_rsci_iswt0_cse));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__797__sel 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__797__input_1 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__797__input_0 
        = (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X5.interp_in0_pd);
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__797__sel)
            ? __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__797__input_1
            : __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__797__input_0);
    __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__797__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__chn_b_rsci_d_mxwt 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__797__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__796__sel 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__796__input_1 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__796__input_0 
        = (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X5.interp_in1_pd);
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__796__sel)
            ? __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__796__input_1
            : __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__796__input_0);
    __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__796__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__796__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__790__sbit = 0U;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__790__arg2 
        = ((0x000001feU & (((IData)(0x0dU) + (0x00000080U 
                                              | (0x0000007fU 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_right_shift_qr_lpi_1_dfm) 
                                                     >> 1U))))) 
                           << 1U)) | (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_right_shift_qr_lpi_1_dfm))));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__790__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_IsZero_8U_23U_1_or_itm_2) 
            << 0x00000017U) | (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__b_sva_36));
    if ((0x00000100U & (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__790__arg2))) {
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__790__sbit) 
                << 0x00000018U) | __Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__790__arg1);
        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__791__sbit 
            = __Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__790__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__791__arg2 
            = (0x000001ffU & (~ (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__790__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__791__arg1 
            = (0x00ffffffU & (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__791__sbit))));
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x0001ffffff000000ULL & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__791__arg1)));
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTRS_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__791__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__791__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__790__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__791__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__792__sbit 
            = __Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__790__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__792__arg2 
            = __Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__790__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__792__arg1 
            = __Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__790__arg1;
        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__793__sbit 
            = vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__792__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__793__arg2 
            = vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__792__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__793__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__792__sbit) 
                << 0x00000018U) | vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__792__arg1);
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__793__sbit))));
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x0001fffffe000000ULL & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__793__arg1)));
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTL_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__793__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__793__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__792__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__793__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__790__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__792__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_itm 
        = vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__790__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__786__sbit = 0U;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__786__arg2 
        = ((0x000001feU & (((IData)(0x0dU) + (0x00000080U 
                                              | (0x0000007fU 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_right_shift_qr_lpi_1_dfm) 
                                                     >> 1U))))) 
                           << 1U)) | (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_right_shift_qr_lpi_1_dfm))));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__786__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_IsZero_8U_23U_or_itm_2) 
            << 0x00000017U) | (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_sva_36));
    if ((0x00000100U & (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__786__arg2))) {
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__786__sbit) 
                << 0x00000018U) | __Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__786__arg1);
        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__787__sbit 
            = __Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__786__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__787__arg2 
            = (0x000001ffU & (~ (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__786__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__787__arg1 
            = (0x00ffffffU & (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__787__sbit))));
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x0001ffffff000000ULL & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__787__arg1)));
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTRS_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__787__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__787__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__786__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__787__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__788__sbit 
            = __Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__786__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__788__arg2 
            = __Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__786__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__788__arg1 
            = __Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__786__arg1;
        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__789__sbit 
            = vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__788__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__789__arg2 
            = vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__788__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__789__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__788__sbit) 
                << 0x00000018U) | vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__788__arg1);
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__789__sbit))));
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x0001fffffe000000ULL & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__789__arg1)));
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTL_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__789__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__789__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__788__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__789__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__786__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__788__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_itm 
        = vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__786__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm 
        = (1U & (~ ((~ (IData)((vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                >> 0x00000031U))) | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_if_3_if_acc_1_itm_7_1))));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nor_32_nl 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_tmp_16))));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nl_FpAdd_8U_23U_asn_4_mx0w1 
        = (0x000fffffffffffffULL & (1ULL + ((0x0002000000000000ULL 
                                             | (0x0001ffffffffffffULL 
                                                & (~ vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_addend_smaller_qr_lpi_1_dfm_mx0))) 
                                            + VL_EXTEND_QQ(52,50, 
                                                           ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__753__vector 
                                = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_addend_larger_qr_lpi_1_dfm_mx0;
                            vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__753__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__753__vector;
                        }(), vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__753__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nl_FpAdd_8U_23U_asn_5_mx0w0 
        = (0x0007ffffffffffffULL & (VL_EXTEND_QQ(51,50, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__751__vector 
                            = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_addend_larger_qr_lpi_1_dfm_mx0;
                        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__751__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__751__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__751__Vfuncout)) 
                                    + VL_EXTEND_QQ(51,50, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__752__vector 
                            = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_addend_smaller_qr_lpi_1_dfm_mx0;
                        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__752__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__752__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__752__Vfuncout))));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_134_4_sdt_4 
        = (IData)(((0ULL == (0x000000000000001eULL 
                             & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_20)));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_21 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_17) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_110_3_sdt_3));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_42_4_sdt_4 
        = (IData)(((0ULL == (0x0000001e00000000ULL 
                             & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_5)));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_13 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_9) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_62_3_sdt_3));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_6 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_2) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_18_3_sdt_3));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_equal_tmp 
        = ((0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__chn_a_rsci_d_mxwt 
                           >> 0x00000017U)) == (0x000000ffU 
                                                & (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__chn_b_rsci_d_mxwt 
                                                   >> 0x00000017U)));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nl_FpAdd_8U_23U_is_a_greater_oif_aelse_acc_nl 
        = (0x03ffffffU & ((IData)(1U) + ((0x00800000U 
                                          | (0x007fffffU 
                                             & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                                         + VL_EXTEND_II(26,24, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_23_24__768__vector 
                                = (0x007fffffU & (~ vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__chn_b_rsci_d_mxwt));
                            vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_23_24__768__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_23_24__768__vector;
                        }(), vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_23_24__768__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nl_FpAdd_8U_23U_is_a_greater_acc_1_nl 
        = (0x000007ffU & ((IData)(1U) + ((0x00000100U 
                                          | (0x000000ffU 
                                             & (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__chn_b_rsci_d_mxwt 
                                                >> 0x17U))) 
                                         + VL_EXTEND_II(11,9, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_8_9__747__vector 
                                = (0x000000ffU & (~ 
                                                  (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__chn_a_rsci_d_mxwt 
                                                   >> 0x17U)));
                            vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_8_9__747__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_8_9__747__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_8_9__747__Vfuncout))))));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_IsNaN_8U_23U_nor_tmp 
        = (1U & (~ (IData)(((0x7f800000U != (0x7f800000U 
                                             & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                            | (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__chn_a_rsci_d_mxwt))))));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__781__sel 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__781__input_1 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__781__input_0 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nor_32_nl;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__781__sel)
            ? (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__781__input_1)
            : (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__781__input_0));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__781__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__mux_22_nl 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__781__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__783__sel 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__783__input_1 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__783__input_0 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nor_32_nl;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__783__sel)
            ? (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__783__input_1)
            : (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__783__input_0));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__783__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__mux_24_nl 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__783__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_50_2_2__754__sel 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__reg_FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_xor_svs_2_cse;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_50_2_2__754__input_1 
        = (0x0003ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nl_FpAdd_8U_23U_asn_5_mx0w0);
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_50_2_2__754__input_0 
        = (0x0003ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nl_FpAdd_8U_23U_asn_4_mx0w1);
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_v_50_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_50_2_2__754__sel)
            ? __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_50_2_2__754__input_1
            : __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_50_2_2__754__input_0);
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_50_2_2__754__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_v_50_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_50_2_2__754__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__766__sel 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__reg_FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_xor_svs_2_cse;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__766__input_1 
        = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nl_FpAdd_8U_23U_asn_5_mx0w0 
                         >> 0x00000031U)));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__766__input_0 
        = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nl_FpAdd_8U_23U_asn_4_mx0w1 
                         >> 0x00000031U)));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__766__sel)
            ? (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__766__input_1)
            : (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__766__input_0));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__766__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_mux_2_tmp_49 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__766__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X5.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct) 
              & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X5.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt)));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_22 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_21) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_134_4_sdt_4));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_90_5_sdt_5 
        = (IData)((((0ULL == (0x00000000001e0000ULL 
                              & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_12)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_13)));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_14 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_6) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_42_4_sdt_4));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__reg_chn_a_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__reg_chn_a_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_24_1_23__769__vector 
        = (0x00ffffffU & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nl_FpAdd_8U_23U_is_a_greater_oif_aelse_acc_nl);
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__readslicef_24_1_23__Vstatic__tmp 
        = (0x00ffffffU & VL_SHIFTR_III(24,24,32, __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_24_1_23__769__vector, 0x00000017U));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_24_1_23__769__Vfuncout 
        = (1U & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__readslicef_24_1_23__Vstatic__tmp);
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_aelse_acc_itm_23_1 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_24_1_23__769__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_9_1_8__748__vector 
        = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nl_FpAdd_8U_23U_is_a_greater_acc_1_nl));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp 
        = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_9_1_8__748__vector), 8U));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_9_1_8__748__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_a_greater_acc_1_itm_8_1 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_9_1_8__748__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_23 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_14) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_90_5_sdt_5));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_a_greater_FpAdd_8U_23U_is_a_greater_or_cse 
        = (((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_aelse_acc_itm_23_1)) 
            & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_equal_tmp)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_a_greater_acc_1_itm_8_1));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__and_dcpl_7 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__743__sel 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__743__input_1 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nor_tmp_11;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__743__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nor_tmp_11)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__743__sel)
            ? (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__743__input_1)
            : (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__743__input_0));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__743__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__mux_9_nl 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__743__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__767__sel 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__767__input_1 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__767__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__767__sel)
            ? (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__767__input_1)
            : (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__767__input_0));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__767__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__mux_tmp_5 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__767__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_and_195_nl 
        = (IData)(((0ULL == (0x0001800000000000ULL 
                             & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                   & (((~ (((~ (IData)(((0ULL == (0x0000000180000000ULL 
                                                  & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                                        & ((~ ((~ (IData)(
                                                          ((0ULL 
                                                            == 
                                                            (0x0000000001800000ULL 
                                                             & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                                                           & ((0ULL 
                                                               != 
                                                               (0x0000000000600000ULL 
                                                                & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                                                              | (0U 
                                                                 == 
                                                                 (3U 
                                                                  & (IData)(
                                                                            (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                             >> 0x00000013U)))))))) 
                                               & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_13))) 
                                           & ((0ULL 
                                               != (0x0000000060000000ULL 
                                                   & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                                              | (0U 
                                                 == 
                                                 (3U 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                             >> 0x0000001bU))))))))) 
                            & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_14)) 
                           | (((~ (IData)(((0ULL == 
                                            (0x0000000000018000ULL 
                                             & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                                           & ((~ ((~ (IData)(
                                                             ((0ULL 
                                                               == 
                                                               (0x0000000000000180ULL 
                                                                & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                                                              & ((0ULL 
                                                                  != 
                                                                  (0x0000000000000060ULL 
                                                                   & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                                                                 | (0U 
                                                                    == 
                                                                    (3U 
                                                                     & (IData)(
                                                                               (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                                >> 3U)))))))) 
                                                  & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_21))) 
                                              & ((0ULL 
                                                  != 
                                                  (0x0000000000006000ULL 
                                                   & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                                                 | (0U 
                                                    == 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                >> 0x0000000bU))))))))) 
                               | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_22)) 
                              & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_23)))) 
                       & (~ ((~ (IData)(((0ULL == (0x0000018000000000ULL 
                                                   & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                                         & ((0ULL != 
                                             (0x0000006000000000ULL 
                                              & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                                            | (0U == 
                                               (3U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                           >> 0x00000023U)))))))) 
                             & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_6)))) 
                      & ((0ULL != (0x0000600000000000ULL 
                                   & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                         | (0U == (3U & (IData)((vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                 >> 0x0000002bU))))))));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_IntLeadZero_49U_leading_sign_49_0_rtn_or_1_nl 
        = (1U & ((~ ((IData)((vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                              >> 0x00000030U)) | ((1U 
                                                   == 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                               >> 0x0000002eU)))) 
                                                  | ((((IData)(
                                                               (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                >> 0x00000020U)) 
                                                       | ((1U 
                                                           == 
                                                           (3U 
                                                            & (IData)(
                                                                      (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                       >> 0x0000001eU)))) 
                                                          | ((((IData)(
                                                                       (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                        >> 0x0000001cU)) 
                                                               | (1U 
                                                                  == 
                                                                  (3U 
                                                                   & (IData)(
                                                                             (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                              >> 0x0000001aU))))) 
                                                              & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_9)) 
                                                             | (((IData)(
                                                                         (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                          >> 0x00000018U)) 
                                                                 | ((1U 
                                                                     == 
                                                                     (3U 
                                                                      & (IData)(
                                                                                (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                                >> 0x00000016U)))) 
                                                                    | (((IData)(
                                                                                (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                                >> 0x00000014U)) 
                                                                        | (1U 
                                                                           == 
                                                                           (3U 
                                                                            & (IData)(
                                                                                (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                                >> 0x00000012U))))) 
                                                                       & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_12)))) 
                                                                & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_13))))) 
                                                      & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_14)) 
                                                     | (((((IData)(
                                                                   (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                    >> 0x00000010U)) 
                                                           | (1U 
                                                              == 
                                                              (3U 
                                                               & (IData)(
                                                                         (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                          >> 0x0000000eU))))) 
                                                          | (((((IData)(
                                                                        (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                         >> 0x0000000cU)) 
                                                                | (1U 
                                                                   == 
                                                                   (3U 
                                                                    & (IData)(
                                                                              (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                               >> 0x0000000aU))))) 
                                                               & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_17)) 
                                                              | (((IData)(
                                                                          (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                           >> 8U)) 
                                                                  | ((1U 
                                                                      == 
                                                                      (3U 
                                                                       & (IData)(
                                                                                (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                                >> 6U)))) 
                                                                     | (((IData)(
                                                                                (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                                >> 4U)) 
                                                                         | (1U 
                                                                            == 
                                                                            (3U 
                                                                             & (IData)(
                                                                                (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                                >> 2U))))) 
                                                                        & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_20)))) 
                                                                 & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_21))) 
                                                             | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_22))) 
                                                         & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_23)) 
                                                        | ((((IData)(
                                                                     (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                      >> 0x0000002cU)) 
                                                             | (1U 
                                                                == 
                                                                (3U 
                                                                 & (IData)(
                                                                           (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                            >> 0x0000002aU))))) 
                                                            & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_2)) 
                                                           | (((IData)(
                                                                       (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                        >> 0x00000028U)) 
                                                               | ((1U 
                                                                   == 
                                                                   (3U 
                                                                    & (IData)(
                                                                              (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                               >> 0x00000026U)))) 
                                                                  | (((IData)(
                                                                              (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                               >> 0x00000024U)) 
                                                                      | (1U 
                                                                         == 
                                                                         (3U 
                                                                          & (IData)(
                                                                                (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                                >> 0x00000022U))))) 
                                                                     & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_5)))) 
                                                              & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_6)))))))) 
                 | ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                    & ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_22) 
                       & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_23)))));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__and_dcpl_15 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_3)) 
           & (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_2_mx0c1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_2) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_1)) 
              & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_cse)));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_3_mx0c1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_2)) 
              & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_3)));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__and_dcpl_28 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__and_dcpl_13 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_3));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__and_dcpl_29 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_cse));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__782__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__782__input_1 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nor_tmp_11;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__782__input_0 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__mux_22_nl;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__782__sel)
            ? (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__782__input_1)
            : (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__782__input_0));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__782__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__mux_23_nl 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__782__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__784__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__784__input_1 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nor_tmp_11;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__784__input_0 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__mux_24_nl;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__784__sel)
            ? (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__784__input_1)
            : (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__784__input_0));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__784__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__mux_25_nl 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__784__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__741__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__741__input_1 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__741__input_0 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_1;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__741__sel)
            ? (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__741__input_1)
            : (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__741__input_0));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__741__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__mux_4_cse 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__741__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__744__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_or_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_3));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__744__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nor_tmp_11)));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__744__input_0 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__mux_9_nl;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__744__sel)
            ? (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__744__input_1)
            : (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__744__input_0));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__744__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__mux_10_nl 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__744__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_tmp_3 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_2)));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__and_dcpl_33 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_a_greater_acc_1_itm_8_1)) 
              & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_equal_tmp)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_aelse_acc_itm_23_1))));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__s 
        = ((((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_23) 
             << 5U) | ((((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_14) 
                         & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_90_5_sdt_5)) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_22))) 
                        << 4U) | (((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_6) 
                                   & ((~ ((~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_134_4_sdt_4)) 
                                              & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_21))) 
                                          & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_23))) 
                                      & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_42_4_sdt_4)) 
                                         | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_13)))) 
                                  << 3U))) | ((((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_2) 
                                                & ((~ 
                                                    (((~ 
                                                       ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_9) 
                                                        & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_62_3_sdt_3)) 
                                                           | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_12)))) 
                                                      & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_14)) 
                                                     | (((~ 
                                                          ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_17) 
                                                           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_110_3_sdt_3)) 
                                                              | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_20)))) 
                                                         | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_22)) 
                                                        & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_23)))) 
                                                   & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_18_3_sdt_3)) 
                                                      | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_5)))) 
                                               << 2U) 
                                              | (((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_and_195_nl) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_IntLeadZero_49U_leading_sign_49_0_rtn_or_1_nl))));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_22_0_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_6)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__and_dcpl_13));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_FpSignedBitsToFloat_8U_23U_1_or_1_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__and_dcpl_28) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__and_dcpl_29));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_and_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_tmp_16) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__and_dcpl_29));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_and_1_rgt 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_tmp_16)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__and_dcpl_29));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__742__sel 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_3;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__742__input_1 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_tmp_3;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__742__input_0 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__mux_tmp_5;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__742__sel)
            ? (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__742__input_1)
            : (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__742__input_0));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__742__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__mux_6_nl 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__742__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__779__sel 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_mux_2_tmp_49;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__779__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__779__input_0 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_tmp_3;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__779__sel)
            ? (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__779__input_1)
            : (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__779__input_0));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__779__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__mux_7_nl 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__779__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_FpAdd_8U_23U_or_1_cse 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_a_greater_FpAdd_8U_23U_is_a_greater_or_cse) 
            & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_cse)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__and_dcpl_33));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__794__arg2 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__s;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__794__arg1 
        = (0x0001ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2);
    __Vfunc_HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__795__arg2 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__794__arg2;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__795__arg1 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__794__arg1;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__795__arg1;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x0003ffffffffffffULL & (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
                                    << (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__795__arg2)));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__795__Vfuncout 
        = (0x0001ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result);
    __Vfunc_HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__794__Vfuncout 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__795__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_itm 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__794__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nl_FpNormalize_8U_49U_acc_nl 
        = (0x000007ffU & ((IData)(1U) + ((0x00000100U 
                                          | (0x000000ffU 
                                             & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6)))) 
                                         + VL_EXTEND_II(11,9, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2s_6_9__764__vector 
                                = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__s;
                            vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2s_6_9__764__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2s_6_9__764__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2s_6_9__764__Vfuncout))))));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__780__sel 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_3)) 
                    | (IData)((vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                               >> 0x00000031U)))));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__780__input_1 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__mux_7_nl;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__780__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__mux_tmp_5)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_mux_2_tmp_49))));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__780__sel)
            ? (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__780__input_1)
            : (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__780__input_0));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__780__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__mux_8_nl 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__780__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_oelse_not_3 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_if_or_itm_2) 
           & ([&]() {
                vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_9_1_8__765__vector 
                    = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nl_FpNormalize_8U_49U_acc_nl));
                vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp 
                    = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_9_1_8__765__vector), 8U));
                vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_9_1_8__765__Vfuncout 
                    = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp));
            }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_9_1_8__765__Vfuncout)));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__756__sel 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_oelse_not_3;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__756__input_1 
        = (0x000000ffU & ((IData)(1U) + ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6) 
                                         + (0x000000c0U 
                                            | (0x0000003fU 
                                               & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__s)))))));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__756__sel)
            ? (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__756__input_1)
            : 0U);
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__756__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_nl 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__756__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__758__sel 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_oelse_not_3;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__758__input_1 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_itm;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__758__sel)
            ? __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__758__input_1
            : 0ULL);
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__758__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_1_nl 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__758__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_3_2__757__sel 
        = ((4U & ((~ (IData)((vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                              >> 0x31U))) << 2U)) | 
           ((((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_if_3_if_acc_1_itm_7_1)) 
              & (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                 >> 0x00000031U)) << 1U) | ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_if_3_if_acc_1_itm_7_1) 
                                            & (IData)(
                                                      (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                       >> 0x00000031U)))));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_3_2__757__input_0 
        = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6)));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_3_2__757__input_1 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_3_2__757__input_2 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_nl;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_3_2__757__input_0) 
           & (- (IData)((1U & (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_3_2__757__sel)))));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_3_2__757__input_1) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_3_2__757__sel) 
                                  >> 1U))))));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_3_2__757__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_3_2__757__sel) 
                                  >> 2U))))));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_3_2__757__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_o_expo_lpi_1_dfm_2 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_3_2__757__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__759__sel 
        = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                         >> 0x31U)));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__759__input_1 
        = (0x0001ffffffffffffULL & (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                    >> 1U));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__759__input_0 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_1_nl;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__759__sel)
            ? __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__759__input_1
            : __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__759__input_0);
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__759__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__759__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_8_1_7__761__vector 
        = (0x000000ffU & ((IData)(1U) + (0x00000080U 
                                         | (0x0000007fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_o_expo_lpi_1_dfm_2) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_8_1_7__761__vector), 7U));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_8_1_7__761__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_if_4_if_acc_1_itm_7_1 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_8_1_7__761__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpMantRNE_49U_24U_else_carry_sva 
        = (IData)(((vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0 
                    >> 0x00000018U) & (0ULL != (0x0000000002ffffffULL 
                                                & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0))));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nl_FpMantRNE_49U_24U_else_acc_nl 
        = (0x00ffffffU & ((0x007fffffU & (IData)((vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0 
                                                  >> 0x19U))) 
                          + VL_EXTEND_II(24,23, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_1_23__777__vector 
                            = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpMantRNE_49U_24U_else_carry_sva;
                        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_1_23__777__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_1_23__777__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_1_23__777__Vfuncout))));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpMantRNE_49U_24U_else_and_tmp 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpMantRNE_49U_24U_else_carry_sva) 
           & (0x0001fffffe000000ULL == (0x0001fffffe000000ULL 
                                        & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0)));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_and_tmp 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_if_4_if_acc_1_itm_7_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpMantRNE_49U_24U_else_and_tmp));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__760__sel 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpMantRNE_49U_24U_else_and_tmp;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__760__input_1 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm) 
                 | (~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_if_4_if_acc_1_itm_7_1))));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__760__input_0 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__760__sel)
            ? (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__760__input_1)
            : (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__760__input_0));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__760__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm_2_mx0 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__760__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_23_2_2__778__sel 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm_2_mx0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_23_2_2__778__input_0 
        = (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nl_FpMantRNE_49U_24U_else_acc_nl);
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_23_2_2__778__sel)
            ? 0x007fffffU : __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_23_2_2__778__input_0);
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_23_2_2__778__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_FpAdd_8U_23U_or_1_nl 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_23_2_2__778__Vfuncout;
}

VL_ATTR_COLD void Vsim_HLS_fp32_sub___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X5__u_fp_sub__1(Vsim_HLS_fp32_sub* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_sub___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X5__u_fp_sub__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__745__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__745__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__745__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__745__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__745__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__745__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__745__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__745__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__746__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__746__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__746__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__746__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__746__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__746__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__746__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__746__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__785__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__785__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__785__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__785__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__785__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__785__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__785__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__785__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X5.__PVT__fp_in_vld) 
              & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X5.__VdfgRegularize_h098ddedf_0_3)));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X5.__VdfgRegularize_h098ddedf_0_2) 
              & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X5.__PVT__fp_sub_sync_in_rdy)));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nor_tmp_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_1_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nor_tmp_1)) 
           & ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_1) 
              & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_cse)));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_en_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nor_tmp_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_cse));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__745__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__745__input_1 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__745__input_0 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nor_tmp_1;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__745__sel)
            ? (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__745__input_1)
            : (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__745__input_0));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__745__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__mux_13_cse 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__745__Vfuncout;
    vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nor_tmp_1) 
           & ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_cse) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U)));
    vlSelfRef.HLS_fp32_sub_core_inst__DOT____VdfgRegularize_hd722136d_0_3 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_IsNaN_8U_23U_nor_tmp) 
                 | (~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nor_tmp_1))));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_tmp_29 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_en_1) 
                 | ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
                 & (((~ (IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0)) 
                     | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt)) 
                    & ((~ (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0)) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)))));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__785__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__785__input_1 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_tmp_16) 
                        & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_1))) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4))));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__785__input_0 
        = (1U & (~ ((~ (IData)(((0x7f800000U != (0x7f800000U 
                                                 & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                                | (0U == (0x007fffffU 
                                          & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__chn_b_rsci_d_mxwt))))) 
                    | (IData)(vlSelfRef.HLS_fp32_sub_core_inst__DOT____VdfgRegularize_hd722136d_0_3))));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__785__sel)
            ? (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__785__input_1)
            : (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__785__input_0));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__785__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__mux_27_nl 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__785__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__746__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__746__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4))));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__746__input_0 
        = (1U & (~ (IData)(vlSelfRef.HLS_fp32_sub_core_inst__DOT____VdfgRegularize_hd722136d_0_3)));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__746__sel)
            ? (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__746__input_1)
            : (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__746__input_0));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__746__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__mux_28_nl 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__746__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt 
        = ((IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_and_1_cse 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_3)) 
               | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__and_dcpl_7))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.HLS_fp32_sub_core_inst__DOT____VdfgRegularize_hd722136d_0_5 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__and_dcpl_7)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_aelse_and_cse 
        = ((IData)(vlSelfRef.HLS_fp32_sub_core_inst__DOT____VdfgRegularize_hd722136d_0_5) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__mux_13_cse));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_addition_and_cse 
        = ((IData)(vlSelfRef.HLS_fp32_sub_core_inst__DOT____VdfgRegularize_hd722136d_0_5) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__mux_4_cse));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_and_8_cse 
        = ((IData)(vlSelfRef.HLS_fp32_sub_core_inst__DOT____VdfgRegularize_hd722136d_0_5) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__mux_6_nl));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_and_3_cse 
        = ((IData)(vlSelfRef.HLS_fp32_sub_core_inst__DOT____VdfgRegularize_hd722136d_0_5) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__mux_10_nl));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_1_and_cse 
        = ((IData)(vlSelfRef.HLS_fp32_sub_core_inst__DOT____VdfgRegularize_hd722136d_0_5) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__mux_28_nl));
}

VL_ATTR_COLD void Vsim_HLS_fp32_sub___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X6__u_fp_sub__0(Vsim_HLS_fp32_sub* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_sub___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X6__u_fp_sub__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__798__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__798__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__798__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__798__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__798__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__798__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__798__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__798__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__799__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__799__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__799__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__799__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__799__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__799__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__799__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__799__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__800__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__800__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__800__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__800__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__800__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__800__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__800__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__800__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__801__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__801__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__801__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__801__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__801__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__801__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__801__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__801__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_9_1_8__805__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_9_1_8__805__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_9_1_8__805__vector;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_9_1_8__805__vector = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__806__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__806__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__806__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__806__input_0 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__806__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__806__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__806__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__806__sel = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__807__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__807__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__807__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__807__input_0 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__807__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__807__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__807__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__807__sel = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_50_2_2__811__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_50_2_2__811__Vfuncout = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_50_2_2__811__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_50_2_2__811__input_0 = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_50_2_2__811__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_50_2_2__811__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_50_2_2__811__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_50_2_2__811__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_8_1_7__812__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_8_1_7__812__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_8_1_7__812__vector;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_8_1_7__812__vector = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__813__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__813__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__813__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__813__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__813__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__813__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_3_2__814__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_3_2__814__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_3_2__814__input_2;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_3_2__814__input_2 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_3_2__814__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_3_2__814__input_1 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_3_2__814__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_3_2__814__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_3_2__814__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_3_2__814__sel = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__815__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__815__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__815__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__815__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__815__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__815__sel = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__816__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__816__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__816__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__816__input_0 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__816__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__816__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__816__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__816__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__817__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__817__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__817__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__817__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__817__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__817__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__817__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__817__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_8_1_7__818__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_8_1_7__818__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_8_1_7__818__vector;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_8_1_7__818__vector = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__819__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__819__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__819__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__819__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__819__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__819__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__820__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__820__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__820__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__820__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__820__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__820__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__823__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__823__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__823__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__823__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__823__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__823__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__823__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__823__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__824__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__824__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__824__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__824__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__824__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__824__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__824__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__824__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_24_1_23__826__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_24_1_23__826__Vfuncout = 0;
    IData/*23:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_24_1_23__826__vector;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_24_1_23__826__vector = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_23_2_2__835__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_23_2_2__835__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_23_2_2__835__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_23_2_2__835__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_23_2_2__835__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_23_2_2__835__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__836__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__836__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__836__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__836__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__836__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__836__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__836__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__836__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__837__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__837__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__837__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__837__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__837__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__837__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__837__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__837__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__838__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__838__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__838__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__838__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__838__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__838__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__838__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__838__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__839__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__839__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__839__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__839__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__839__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__839__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__839__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__839__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__840__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__840__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__840__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__840__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__840__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__840__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__840__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__840__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__841__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__841__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__841__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__841__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__841__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__841__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__841__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__841__sel = 0;
    IData/*23:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__843__arg1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__843__arg1 = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__843__arg2;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__843__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__843__sbit;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__843__sbit = 0;
    IData/*23:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__847__arg1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__847__arg1 = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__847__arg2;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__847__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__847__sbit;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__847__sbit = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__851__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__851__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__851__arg1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__851__arg1 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__851__arg2;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__851__arg2 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__852__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__852__Vfuncout = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__852__arg1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__852__arg1 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__852__arg2;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__852__arg2 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__853__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__853__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__853__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__853__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__853__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__853__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__853__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__853__sel = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__854__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__854__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__854__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__854__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__854__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__854__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__854__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__854__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_or_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_6));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__819__sel 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_4;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__819__input_1 
        = (0x000000ffU & ((vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_sva_36 
                           >> 0x00000017U) - (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__b_sva_36 
                                              >> 0x00000017U)));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__819__sel)
            ? (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__819__input_1)
            : 0U);
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__819__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_right_shift_qr_lpi_1_dfm 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__819__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__820__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_4)));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__820__input_1 
        = (0x000000ffU & ((vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__b_sva_36 
                           >> 0x00000017U) - (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_sva_36 
                                              >> 0x00000017U)));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__820__sel)
            ? (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__820__input_1)
            : 0U);
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__820__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_right_shift_qr_lpi_1_dfm 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__820__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_8_1_7__812__vector 
        = (0x000000ffU & ((IData)(1U) + (0x00000080U 
                                         | (0x0000007fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_8_1_7__812__vector), 7U));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_8_1_7__812__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_if_3_if_acc_1_itm_7_1 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_8_1_7__812__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nor_tmp_11 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3) 
            | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_5)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_tmp_16 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_1_IsNaN_8U_23U_1_nand_itm_2) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_1_nor_itm_2));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__806__sel 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_5;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__806__input_1 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_sva_2;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__806__input_0 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_sva_2;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__806__sel)
            ? __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__806__input_1
            : __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__806__input_0);
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__806__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_addend_larger_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__806__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__807__sel 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_5;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__807__input_1 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_sva_2;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__807__input_0 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_sva_2;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__807__sel)
            ? __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__807__input_1
            : __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__807__input_0);
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__807__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_addend_smaller_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__807__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_iswt0));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_20 
        = (IData)((0ULL == (0x00000000000001e0ULL & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_12 
        = (IData)((0ULL == (0x0000000001e00000ULL & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_110_3_sdt_3 
        = (IData)((0ULL == (0x0000000000001e00ULL & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_62_3_sdt_3 
        = (IData)((0ULL == (0x000000001e000000ULL & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_17 
        = (IData)((0ULL == (0x000000000001e000ULL & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_5 
        = (IData)((0ULL == (0x000001e000000000ULL & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_9 
        = (IData)((0ULL == (0x00000001e0000000ULL & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_18_3_sdt_3 
        = (IData)((0ULL == (0x00001e0000000000ULL & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_2 
        = (IData)((0ULL == (0x0001e00000000000ULL & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__reg_chn_a_rsci_iswt0_cse));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__854__sel 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__854__input_1 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__854__input_0 
        = (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X6.interp_in0_pd);
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__854__sel)
            ? __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__854__input_1
            : __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__854__input_0);
    __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__854__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__chn_b_rsci_d_mxwt 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__854__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__853__sel 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__853__input_1 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__853__input_0 
        = (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X6.interp_in1_pd);
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__853__sel)
            ? __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__853__input_1
            : __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__853__input_0);
    __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__853__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__853__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__847__sbit = 0U;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__847__arg2 
        = ((0x000001feU & (((IData)(0x0dU) + (0x00000080U 
                                              | (0x0000007fU 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_right_shift_qr_lpi_1_dfm) 
                                                     >> 1U))))) 
                           << 1U)) | (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_right_shift_qr_lpi_1_dfm))));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__847__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_IsZero_8U_23U_1_or_itm_2) 
            << 0x00000017U) | (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__b_sva_36));
    if ((0x00000100U & (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__847__arg2))) {
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__847__sbit) 
                << 0x00000018U) | __Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__847__arg1);
        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__848__sbit 
            = __Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__847__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__848__arg2 
            = (0x000001ffU & (~ (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__847__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__848__arg1 
            = (0x00ffffffU & (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__848__sbit))));
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x0001ffffff000000ULL & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__848__arg1)));
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTRS_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__848__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__848__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__847__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__848__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__849__sbit 
            = __Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__847__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__849__arg2 
            = __Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__847__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__849__arg1 
            = __Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__847__arg1;
        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__850__sbit 
            = vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__849__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__850__arg2 
            = vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__849__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__850__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__849__sbit) 
                << 0x00000018U) | vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__849__arg1);
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__850__sbit))));
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x0001fffffe000000ULL & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__850__arg1)));
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTL_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__850__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__850__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__849__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__850__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__847__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__849__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_itm 
        = vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__847__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__843__sbit = 0U;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__843__arg2 
        = ((0x000001feU & (((IData)(0x0dU) + (0x00000080U 
                                              | (0x0000007fU 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_right_shift_qr_lpi_1_dfm) 
                                                     >> 1U))))) 
                           << 1U)) | (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_right_shift_qr_lpi_1_dfm))));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__843__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_IsZero_8U_23U_or_itm_2) 
            << 0x00000017U) | (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_sva_36));
    if ((0x00000100U & (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__843__arg2))) {
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__843__sbit) 
                << 0x00000018U) | __Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__843__arg1);
        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__844__sbit 
            = __Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__843__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__844__arg2 
            = (0x000001ffU & (~ (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__843__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__844__arg1 
            = (0x00ffffffU & (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__844__sbit))));
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x0001ffffff000000ULL & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__844__arg1)));
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTRS_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__844__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__844__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__843__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__844__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__845__sbit 
            = __Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__843__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__845__arg2 
            = __Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__843__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__845__arg1 
            = __Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__843__arg1;
        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__846__sbit 
            = vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__845__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__846__arg2 
            = vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__845__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__846__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__845__sbit) 
                << 0x00000018U) | vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__845__arg1);
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__846__sbit))));
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x0001fffffe000000ULL & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__846__arg1)));
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTL_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__846__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__846__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__845__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__846__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__843__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__845__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_itm 
        = vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__843__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm 
        = (1U & (~ ((~ (IData)((vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                >> 0x00000031U))) | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_if_3_if_acc_1_itm_7_1))));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nor_32_nl 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_tmp_16))));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nl_FpAdd_8U_23U_asn_4_mx0w1 
        = (0x000fffffffffffffULL & (1ULL + ((0x0002000000000000ULL 
                                             | (0x0001ffffffffffffULL 
                                                & (~ vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_addend_smaller_qr_lpi_1_dfm_mx0))) 
                                            + VL_EXTEND_QQ(52,50, 
                                                           ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__810__vector 
                                = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_addend_larger_qr_lpi_1_dfm_mx0;
                            vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__810__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__810__vector;
                        }(), vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__810__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nl_FpAdd_8U_23U_asn_5_mx0w0 
        = (0x0007ffffffffffffULL & (VL_EXTEND_QQ(51,50, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__808__vector 
                            = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_addend_larger_qr_lpi_1_dfm_mx0;
                        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__808__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__808__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__808__Vfuncout)) 
                                    + VL_EXTEND_QQ(51,50, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__809__vector 
                            = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_addend_smaller_qr_lpi_1_dfm_mx0;
                        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__809__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__809__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__809__Vfuncout))));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_134_4_sdt_4 
        = (IData)(((0ULL == (0x000000000000001eULL 
                             & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_20)));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_21 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_17) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_110_3_sdt_3));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_42_4_sdt_4 
        = (IData)(((0ULL == (0x0000001e00000000ULL 
                             & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_5)));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_13 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_9) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_62_3_sdt_3));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_6 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_2) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_18_3_sdt_3));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_equal_tmp 
        = ((0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__chn_a_rsci_d_mxwt 
                           >> 0x00000017U)) == (0x000000ffU 
                                                & (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__chn_b_rsci_d_mxwt 
                                                   >> 0x00000017U)));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nl_FpAdd_8U_23U_is_a_greater_oif_aelse_acc_nl 
        = (0x03ffffffU & ((IData)(1U) + ((0x00800000U 
                                          | (0x007fffffU 
                                             & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                                         + VL_EXTEND_II(26,24, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_23_24__825__vector 
                                = (0x007fffffU & (~ vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__chn_b_rsci_d_mxwt));
                            vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_23_24__825__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_23_24__825__vector;
                        }(), vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_23_24__825__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nl_FpAdd_8U_23U_is_a_greater_acc_1_nl 
        = (0x000007ffU & ((IData)(1U) + ((0x00000100U 
                                          | (0x000000ffU 
                                             & (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__chn_b_rsci_d_mxwt 
                                                >> 0x17U))) 
                                         + VL_EXTEND_II(11,9, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_8_9__804__vector 
                                = (0x000000ffU & (~ 
                                                  (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__chn_a_rsci_d_mxwt 
                                                   >> 0x17U)));
                            vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_8_9__804__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_8_9__804__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_8_9__804__Vfuncout))))));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_IsNaN_8U_23U_nor_tmp 
        = (1U & (~ (IData)(((0x7f800000U != (0x7f800000U 
                                             & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                            | (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__chn_a_rsci_d_mxwt))))));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__838__sel 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__838__input_1 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__838__input_0 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nor_32_nl;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__838__sel)
            ? (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__838__input_1)
            : (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__838__input_0));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__838__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__mux_22_nl 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__838__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__840__sel 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__840__input_1 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__840__input_0 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nor_32_nl;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__840__sel)
            ? (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__840__input_1)
            : (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__840__input_0));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__840__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__mux_24_nl 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__840__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_50_2_2__811__sel 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__reg_FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_xor_svs_2_cse;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_50_2_2__811__input_1 
        = (0x0003ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nl_FpAdd_8U_23U_asn_5_mx0w0);
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_50_2_2__811__input_0 
        = (0x0003ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nl_FpAdd_8U_23U_asn_4_mx0w1);
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_v_50_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_50_2_2__811__sel)
            ? __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_50_2_2__811__input_1
            : __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_50_2_2__811__input_0);
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_50_2_2__811__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_v_50_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_50_2_2__811__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__823__sel 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__reg_FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_xor_svs_2_cse;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__823__input_1 
        = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nl_FpAdd_8U_23U_asn_5_mx0w0 
                         >> 0x00000031U)));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__823__input_0 
        = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nl_FpAdd_8U_23U_asn_4_mx0w1 
                         >> 0x00000031U)));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__823__sel)
            ? (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__823__input_1)
            : (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__823__input_0));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__823__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_mux_2_tmp_49 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__823__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X6.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct) 
              & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X6.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt)));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_22 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_21) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_134_4_sdt_4));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_90_5_sdt_5 
        = (IData)((((0ULL == (0x00000000001e0000ULL 
                              & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_12)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_13)));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_14 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_6) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_42_4_sdt_4));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__reg_chn_a_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__reg_chn_a_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_24_1_23__826__vector 
        = (0x00ffffffU & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nl_FpAdd_8U_23U_is_a_greater_oif_aelse_acc_nl);
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__readslicef_24_1_23__Vstatic__tmp 
        = (0x00ffffffU & VL_SHIFTR_III(24,24,32, __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_24_1_23__826__vector, 0x00000017U));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_24_1_23__826__Vfuncout 
        = (1U & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__readslicef_24_1_23__Vstatic__tmp);
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_aelse_acc_itm_23_1 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_24_1_23__826__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_9_1_8__805__vector 
        = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nl_FpAdd_8U_23U_is_a_greater_acc_1_nl));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp 
        = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_9_1_8__805__vector), 8U));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_9_1_8__805__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_a_greater_acc_1_itm_8_1 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_9_1_8__805__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_23 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_14) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_90_5_sdt_5));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_a_greater_FpAdd_8U_23U_is_a_greater_or_cse 
        = (((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_aelse_acc_itm_23_1)) 
            & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_equal_tmp)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_a_greater_acc_1_itm_8_1));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__and_dcpl_7 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__800__sel 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__800__input_1 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nor_tmp_11;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__800__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nor_tmp_11)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__800__sel)
            ? (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__800__input_1)
            : (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__800__input_0));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__800__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__mux_9_nl 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__800__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__824__sel 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__824__input_1 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__824__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__824__sel)
            ? (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__824__input_1)
            : (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__824__input_0));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__824__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__mux_tmp_5 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__824__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_and_195_nl 
        = (IData)(((0ULL == (0x0001800000000000ULL 
                             & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                   & (((~ (((~ (IData)(((0ULL == (0x0000000180000000ULL 
                                                  & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                                        & ((~ ((~ (IData)(
                                                          ((0ULL 
                                                            == 
                                                            (0x0000000001800000ULL 
                                                             & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                                                           & ((0ULL 
                                                               != 
                                                               (0x0000000000600000ULL 
                                                                & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                                                              | (0U 
                                                                 == 
                                                                 (3U 
                                                                  & (IData)(
                                                                            (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                             >> 0x00000013U)))))))) 
                                               & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_13))) 
                                           & ((0ULL 
                                               != (0x0000000060000000ULL 
                                                   & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                                              | (0U 
                                                 == 
                                                 (3U 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                             >> 0x0000001bU))))))))) 
                            & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_14)) 
                           | (((~ (IData)(((0ULL == 
                                            (0x0000000000018000ULL 
                                             & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                                           & ((~ ((~ (IData)(
                                                             ((0ULL 
                                                               == 
                                                               (0x0000000000000180ULL 
                                                                & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                                                              & ((0ULL 
                                                                  != 
                                                                  (0x0000000000000060ULL 
                                                                   & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                                                                 | (0U 
                                                                    == 
                                                                    (3U 
                                                                     & (IData)(
                                                                               (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                                >> 3U)))))))) 
                                                  & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_21))) 
                                              & ((0ULL 
                                                  != 
                                                  (0x0000000000006000ULL 
                                                   & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                                                 | (0U 
                                                    == 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                >> 0x0000000bU))))))))) 
                               | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_22)) 
                              & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_23)))) 
                       & (~ ((~ (IData)(((0ULL == (0x0000018000000000ULL 
                                                   & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                                         & ((0ULL != 
                                             (0x0000006000000000ULL 
                                              & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                                            | (0U == 
                                               (3U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                           >> 0x00000023U)))))))) 
                             & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_6)))) 
                      & ((0ULL != (0x0000600000000000ULL 
                                   & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                         | (0U == (3U & (IData)((vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                 >> 0x0000002bU))))))));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_IntLeadZero_49U_leading_sign_49_0_rtn_or_1_nl 
        = (1U & ((~ ((IData)((vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                              >> 0x00000030U)) | ((1U 
                                                   == 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                               >> 0x0000002eU)))) 
                                                  | ((((IData)(
                                                               (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                >> 0x00000020U)) 
                                                       | ((1U 
                                                           == 
                                                           (3U 
                                                            & (IData)(
                                                                      (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                       >> 0x0000001eU)))) 
                                                          | ((((IData)(
                                                                       (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                        >> 0x0000001cU)) 
                                                               | (1U 
                                                                  == 
                                                                  (3U 
                                                                   & (IData)(
                                                                             (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                              >> 0x0000001aU))))) 
                                                              & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_9)) 
                                                             | (((IData)(
                                                                         (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                          >> 0x00000018U)) 
                                                                 | ((1U 
                                                                     == 
                                                                     (3U 
                                                                      & (IData)(
                                                                                (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                                >> 0x00000016U)))) 
                                                                    | (((IData)(
                                                                                (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                                >> 0x00000014U)) 
                                                                        | (1U 
                                                                           == 
                                                                           (3U 
                                                                            & (IData)(
                                                                                (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                                >> 0x00000012U))))) 
                                                                       & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_12)))) 
                                                                & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_13))))) 
                                                      & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_14)) 
                                                     | (((((IData)(
                                                                   (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                    >> 0x00000010U)) 
                                                           | (1U 
                                                              == 
                                                              (3U 
                                                               & (IData)(
                                                                         (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                          >> 0x0000000eU))))) 
                                                          | (((((IData)(
                                                                        (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                         >> 0x0000000cU)) 
                                                                | (1U 
                                                                   == 
                                                                   (3U 
                                                                    & (IData)(
                                                                              (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                               >> 0x0000000aU))))) 
                                                               & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_17)) 
                                                              | (((IData)(
                                                                          (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                           >> 8U)) 
                                                                  | ((1U 
                                                                      == 
                                                                      (3U 
                                                                       & (IData)(
                                                                                (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                                >> 6U)))) 
                                                                     | (((IData)(
                                                                                (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                                >> 4U)) 
                                                                         | (1U 
                                                                            == 
                                                                            (3U 
                                                                             & (IData)(
                                                                                (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                                >> 2U))))) 
                                                                        & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_20)))) 
                                                                 & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_21))) 
                                                             | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_22))) 
                                                         & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_23)) 
                                                        | ((((IData)(
                                                                     (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                      >> 0x0000002cU)) 
                                                             | (1U 
                                                                == 
                                                                (3U 
                                                                 & (IData)(
                                                                           (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                            >> 0x0000002aU))))) 
                                                            & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_2)) 
                                                           | (((IData)(
                                                                       (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                        >> 0x00000028U)) 
                                                               | ((1U 
                                                                   == 
                                                                   (3U 
                                                                    & (IData)(
                                                                              (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                               >> 0x00000026U)))) 
                                                                  | (((IData)(
                                                                              (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                               >> 0x00000024U)) 
                                                                      | (1U 
                                                                         == 
                                                                         (3U 
                                                                          & (IData)(
                                                                                (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                                >> 0x00000022U))))) 
                                                                     & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_5)))) 
                                                              & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_6)))))))) 
                 | ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                    & ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_22) 
                       & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_23)))));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__and_dcpl_15 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_3)) 
           & (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_2_mx0c1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_2) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_1)) 
              & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_cse)));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_3_mx0c1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_2)) 
              & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_3)));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__and_dcpl_28 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__and_dcpl_13 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_3));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__and_dcpl_29 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_cse));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__839__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__839__input_1 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nor_tmp_11;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__839__input_0 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__mux_22_nl;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__839__sel)
            ? (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__839__input_1)
            : (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__839__input_0));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__839__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__mux_23_nl 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__839__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__841__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__841__input_1 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nor_tmp_11;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__841__input_0 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__mux_24_nl;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__841__sel)
            ? (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__841__input_1)
            : (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__841__input_0));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__841__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__mux_25_nl 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__841__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__798__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__798__input_1 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__798__input_0 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_1;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__798__sel)
            ? (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__798__input_1)
            : (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__798__input_0));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__798__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__mux_4_cse 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__798__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__801__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_or_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_3));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__801__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nor_tmp_11)));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__801__input_0 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__mux_9_nl;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__801__sel)
            ? (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__801__input_1)
            : (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__801__input_0));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__801__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__mux_10_nl 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__801__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_tmp_3 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_2)));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__and_dcpl_33 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_a_greater_acc_1_itm_8_1)) 
              & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_equal_tmp)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_aelse_acc_itm_23_1))));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__s 
        = ((((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_23) 
             << 5U) | ((((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_14) 
                         & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_90_5_sdt_5)) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_22))) 
                        << 4U) | (((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_6) 
                                   & ((~ ((~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_134_4_sdt_4)) 
                                              & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_21))) 
                                          & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_23))) 
                                      & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_42_4_sdt_4)) 
                                         | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_13)))) 
                                  << 3U))) | ((((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_2) 
                                                & ((~ 
                                                    (((~ 
                                                       ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_9) 
                                                        & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_62_3_sdt_3)) 
                                                           | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_12)))) 
                                                      & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_14)) 
                                                     | (((~ 
                                                          ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_17) 
                                                           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_110_3_sdt_3)) 
                                                              | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_20)))) 
                                                         | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_22)) 
                                                        & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_23)))) 
                                                   & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_18_3_sdt_3)) 
                                                      | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_5)))) 
                                               << 2U) 
                                              | (((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_and_195_nl) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_IntLeadZero_49U_leading_sign_49_0_rtn_or_1_nl))));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_22_0_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_6)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__and_dcpl_13));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_FpSignedBitsToFloat_8U_23U_1_or_1_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__and_dcpl_28) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__and_dcpl_29));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_and_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_tmp_16) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__and_dcpl_29));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_and_1_rgt 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_tmp_16)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__and_dcpl_29));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__799__sel 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_3;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__799__input_1 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_tmp_3;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__799__input_0 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__mux_tmp_5;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__799__sel)
            ? (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__799__input_1)
            : (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__799__input_0));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__799__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__mux_6_nl 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__799__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__836__sel 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_mux_2_tmp_49;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__836__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__836__input_0 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_tmp_3;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__836__sel)
            ? (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__836__input_1)
            : (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__836__input_0));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__836__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__mux_7_nl 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__836__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_FpAdd_8U_23U_or_1_cse 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_a_greater_FpAdd_8U_23U_is_a_greater_or_cse) 
            & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_cse)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__and_dcpl_33));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__851__arg2 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__s;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__851__arg1 
        = (0x0001ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2);
    __Vfunc_HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__852__arg2 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__851__arg2;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__852__arg1 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__851__arg1;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__852__arg1;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x0003ffffffffffffULL & (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
                                    << (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__852__arg2)));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__852__Vfuncout 
        = (0x0001ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result);
    __Vfunc_HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__851__Vfuncout 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__852__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_itm 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__851__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nl_FpNormalize_8U_49U_acc_nl 
        = (0x000007ffU & ((IData)(1U) + ((0x00000100U 
                                          | (0x000000ffU 
                                             & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6)))) 
                                         + VL_EXTEND_II(11,9, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2s_6_9__821__vector 
                                = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__s;
                            vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2s_6_9__821__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2s_6_9__821__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2s_6_9__821__Vfuncout))))));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__837__sel 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_3)) 
                    | (IData)((vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                               >> 0x00000031U)))));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__837__input_1 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__mux_7_nl;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__837__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__mux_tmp_5)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_mux_2_tmp_49))));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__837__sel)
            ? (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__837__input_1)
            : (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__837__input_0));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__837__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__mux_8_nl 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__837__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_oelse_not_3 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_if_or_itm_2) 
           & ([&]() {
                vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_9_1_8__822__vector 
                    = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nl_FpNormalize_8U_49U_acc_nl));
                vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp 
                    = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_9_1_8__822__vector), 8U));
                vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_9_1_8__822__Vfuncout 
                    = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp));
            }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_9_1_8__822__Vfuncout)));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__813__sel 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_oelse_not_3;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__813__input_1 
        = (0x000000ffU & ((IData)(1U) + ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6) 
                                         + (0x000000c0U 
                                            | (0x0000003fU 
                                               & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__s)))))));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__813__sel)
            ? (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__813__input_1)
            : 0U);
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__813__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_nl 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__813__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__815__sel 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_oelse_not_3;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__815__input_1 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_itm;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__815__sel)
            ? __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__815__input_1
            : 0ULL);
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__815__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_1_nl 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__815__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_3_2__814__sel 
        = ((4U & ((~ (IData)((vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                              >> 0x31U))) << 2U)) | 
           ((((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_if_3_if_acc_1_itm_7_1)) 
              & (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                 >> 0x00000031U)) << 1U) | ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_if_3_if_acc_1_itm_7_1) 
                                            & (IData)(
                                                      (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                       >> 0x00000031U)))));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_3_2__814__input_0 
        = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6)));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_3_2__814__input_1 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_3_2__814__input_2 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_nl;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_3_2__814__input_0) 
           & (- (IData)((1U & (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_3_2__814__sel)))));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_3_2__814__input_1) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_3_2__814__sel) 
                                  >> 1U))))));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_3_2__814__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_3_2__814__sel) 
                                  >> 2U))))));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_3_2__814__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_o_expo_lpi_1_dfm_2 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_3_2__814__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__816__sel 
        = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                         >> 0x31U)));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__816__input_1 
        = (0x0001ffffffffffffULL & (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                    >> 1U));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__816__input_0 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_1_nl;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__816__sel)
            ? __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__816__input_1
            : __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__816__input_0);
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__816__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__816__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_8_1_7__818__vector 
        = (0x000000ffU & ((IData)(1U) + (0x00000080U 
                                         | (0x0000007fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_o_expo_lpi_1_dfm_2) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_8_1_7__818__vector), 7U));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_8_1_7__818__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_if_4_if_acc_1_itm_7_1 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_8_1_7__818__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpMantRNE_49U_24U_else_carry_sva 
        = (IData)(((vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0 
                    >> 0x00000018U) & (0ULL != (0x0000000002ffffffULL 
                                                & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0))));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nl_FpMantRNE_49U_24U_else_acc_nl 
        = (0x00ffffffU & ((0x007fffffU & (IData)((vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0 
                                                  >> 0x19U))) 
                          + VL_EXTEND_II(24,23, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_1_23__834__vector 
                            = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpMantRNE_49U_24U_else_carry_sva;
                        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_1_23__834__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_1_23__834__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_1_23__834__Vfuncout))));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpMantRNE_49U_24U_else_and_tmp 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpMantRNE_49U_24U_else_carry_sva) 
           & (0x0001fffffe000000ULL == (0x0001fffffe000000ULL 
                                        & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0)));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_and_tmp 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_if_4_if_acc_1_itm_7_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpMantRNE_49U_24U_else_and_tmp));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__817__sel 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpMantRNE_49U_24U_else_and_tmp;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__817__input_1 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm) 
                 | (~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_if_4_if_acc_1_itm_7_1))));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__817__input_0 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__817__sel)
            ? (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__817__input_1)
            : (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__817__input_0));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__817__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm_2_mx0 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__817__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_23_2_2__835__sel 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm_2_mx0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_23_2_2__835__input_0 
        = (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nl_FpMantRNE_49U_24U_else_acc_nl);
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_23_2_2__835__sel)
            ? 0x007fffffU : __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_23_2_2__835__input_0);
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_23_2_2__835__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_FpAdd_8U_23U_or_1_nl 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_23_2_2__835__Vfuncout;
}

VL_ATTR_COLD void Vsim_HLS_fp32_sub___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X6__u_fp_sub__1(Vsim_HLS_fp32_sub* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_sub___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X6__u_fp_sub__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__802__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__802__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__802__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__802__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__802__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__802__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__802__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__802__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__803__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__803__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__803__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__803__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__803__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__803__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__803__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__803__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__842__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__842__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__842__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__842__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__842__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__842__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__842__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__842__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X6.__PVT__fp_in_vld) 
              & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X6.__VdfgRegularize_h098ddedf_0_3)));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X6.__VdfgRegularize_h098ddedf_0_2) 
              & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X6.__PVT__fp_sub_sync_in_rdy)));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nor_tmp_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_1_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nor_tmp_1)) 
           & ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_1) 
              & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_cse)));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_en_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nor_tmp_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_cse));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__802__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__802__input_1 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__802__input_0 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nor_tmp_1;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__802__sel)
            ? (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__802__input_1)
            : (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__802__input_0));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__802__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__mux_13_cse 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__802__Vfuncout;
    vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nor_tmp_1) 
           & ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_cse) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U)));
    vlSelfRef.HLS_fp32_sub_core_inst__DOT____VdfgRegularize_hd722136d_0_3 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_IsNaN_8U_23U_nor_tmp) 
                 | (~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nor_tmp_1))));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_tmp_29 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_en_1) 
                 | ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
                 & (((~ (IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0)) 
                     | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt)) 
                    & ((~ (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0)) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)))));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__842__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__842__input_1 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_tmp_16) 
                        & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_1))) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4))));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__842__input_0 
        = (1U & (~ ((~ (IData)(((0x7f800000U != (0x7f800000U 
                                                 & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                                | (0U == (0x007fffffU 
                                          & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__chn_b_rsci_d_mxwt))))) 
                    | (IData)(vlSelfRef.HLS_fp32_sub_core_inst__DOT____VdfgRegularize_hd722136d_0_3))));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__842__sel)
            ? (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__842__input_1)
            : (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__842__input_0));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__842__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__mux_27_nl 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__842__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__803__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__803__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4))));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__803__input_0 
        = (1U & (~ (IData)(vlSelfRef.HLS_fp32_sub_core_inst__DOT____VdfgRegularize_hd722136d_0_3)));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__803__sel)
            ? (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__803__input_1)
            : (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__803__input_0));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__803__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__mux_28_nl 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__803__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt 
        = ((IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_and_1_cse 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_3)) 
               | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__and_dcpl_7))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.HLS_fp32_sub_core_inst__DOT____VdfgRegularize_hd722136d_0_5 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__and_dcpl_7)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_aelse_and_cse 
        = ((IData)(vlSelfRef.HLS_fp32_sub_core_inst__DOT____VdfgRegularize_hd722136d_0_5) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__mux_13_cse));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_addition_and_cse 
        = ((IData)(vlSelfRef.HLS_fp32_sub_core_inst__DOT____VdfgRegularize_hd722136d_0_5) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__mux_4_cse));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_and_8_cse 
        = ((IData)(vlSelfRef.HLS_fp32_sub_core_inst__DOT____VdfgRegularize_hd722136d_0_5) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__mux_6_nl));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_and_3_cse 
        = ((IData)(vlSelfRef.HLS_fp32_sub_core_inst__DOT____VdfgRegularize_hd722136d_0_5) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__mux_10_nl));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_1_and_cse 
        = ((IData)(vlSelfRef.HLS_fp32_sub_core_inst__DOT____VdfgRegularize_hd722136d_0_5) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__mux_28_nl));
}

VL_ATTR_COLD void Vsim_HLS_fp32_sub___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X7__u_fp_sub__0(Vsim_HLS_fp32_sub* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_sub___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X7__u_fp_sub__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__855__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__855__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__855__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__855__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__855__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__855__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__855__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__855__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__856__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__856__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__856__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__856__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__856__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__856__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__856__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__856__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__857__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__857__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__857__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__857__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__857__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__857__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__857__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__857__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__858__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__858__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__858__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__858__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__858__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__858__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__858__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__858__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_9_1_8__862__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_9_1_8__862__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_9_1_8__862__vector;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_9_1_8__862__vector = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__863__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__863__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__863__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__863__input_0 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__863__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__863__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__863__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__863__sel = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__864__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__864__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__864__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__864__input_0 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__864__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__864__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__864__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__864__sel = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_50_2_2__868__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_50_2_2__868__Vfuncout = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_50_2_2__868__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_50_2_2__868__input_0 = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_50_2_2__868__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_50_2_2__868__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_50_2_2__868__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_50_2_2__868__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_8_1_7__869__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_8_1_7__869__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_8_1_7__869__vector;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_8_1_7__869__vector = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__870__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__870__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__870__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__870__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__870__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__870__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_3_2__871__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_3_2__871__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_3_2__871__input_2;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_3_2__871__input_2 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_3_2__871__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_3_2__871__input_1 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_3_2__871__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_3_2__871__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_3_2__871__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_3_2__871__sel = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__872__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__872__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__872__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__872__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__872__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__872__sel = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__873__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__873__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__873__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__873__input_0 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__873__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__873__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__873__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__873__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__874__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__874__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__874__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__874__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__874__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__874__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__874__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__874__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_8_1_7__875__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_8_1_7__875__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_8_1_7__875__vector;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_8_1_7__875__vector = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__876__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__876__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__876__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__876__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__876__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__876__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__877__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__877__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__877__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__877__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__877__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__877__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__880__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__880__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__880__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__880__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__880__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__880__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__880__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__880__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__881__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__881__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__881__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__881__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__881__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__881__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__881__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__881__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_24_1_23__883__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_24_1_23__883__Vfuncout = 0;
    IData/*23:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_24_1_23__883__vector;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_24_1_23__883__vector = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_23_2_2__892__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_23_2_2__892__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_23_2_2__892__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_23_2_2__892__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_23_2_2__892__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_23_2_2__892__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__893__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__893__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__893__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__893__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__893__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__893__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__893__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__893__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__894__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__894__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__894__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__894__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__894__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__894__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__894__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__894__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__895__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__895__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__895__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__895__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__895__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__895__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__895__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__895__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__896__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__896__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__896__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__896__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__896__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__896__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__896__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__896__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__897__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__897__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__897__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__897__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__897__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__897__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__897__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__897__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__898__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__898__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__898__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__898__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__898__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__898__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__898__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__898__sel = 0;
    IData/*23:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__900__arg1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__900__arg1 = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__900__arg2;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__900__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__900__sbit;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__900__sbit = 0;
    IData/*23:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__904__arg1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__904__arg1 = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__904__arg2;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__904__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__904__sbit;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__904__sbit = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__908__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__908__Vfuncout = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__908__arg1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__908__arg1 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__908__arg2;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__908__arg2 = 0;
    QData/*48:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__909__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__909__Vfuncout = 0;
    QData/*49:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__909__arg1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__909__arg1 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__909__arg2;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__909__arg2 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__910__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__910__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__910__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__910__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__910__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__910__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__910__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__910__sel = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__911__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__911__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__911__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__911__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__911__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__911__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__911__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__911__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_or_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_6));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__876__sel 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_4;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__876__input_1 
        = (0x000000ffU & ((vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_sva_36 
                           >> 0x00000017U) - (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__b_sva_36 
                                              >> 0x00000017U)));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__876__sel)
            ? (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__876__input_1)
            : 0U);
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__876__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_right_shift_qr_lpi_1_dfm 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__876__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__877__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_4)));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__877__input_1 
        = (0x000000ffU & ((vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__b_sva_36 
                           >> 0x00000017U) - (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_sva_36 
                                              >> 0x00000017U)));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__877__sel)
            ? (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__877__input_1)
            : 0U);
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__877__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_right_shift_qr_lpi_1_dfm 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__877__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_8_1_7__869__vector 
        = (0x000000ffU & ((IData)(1U) + (0x00000080U 
                                         | (0x0000007fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_8_1_7__869__vector), 7U));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_8_1_7__869__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_if_3_if_acc_1_itm_7_1 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_8_1_7__869__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nor_tmp_11 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3) 
            | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_5)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_tmp_16 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_1_IsNaN_8U_23U_1_nand_itm_2) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_1_nor_itm_2));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__863__sel 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_5;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__863__input_1 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_sva_2;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__863__input_0 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_sva_2;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__863__sel)
            ? __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__863__input_1
            : __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__863__input_0);
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__863__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_addend_larger_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__863__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__864__sel 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_5;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__864__input_1 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_sva_2;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__864__input_0 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_sva_2;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__864__sel)
            ? __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__864__input_1
            : __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__864__input_0);
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__864__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_addend_smaller_qr_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__864__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_iswt0));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_20 
        = (IData)((0ULL == (0x00000000000001e0ULL & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_12 
        = (IData)((0ULL == (0x0000000001e00000ULL & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_110_3_sdt_3 
        = (IData)((0ULL == (0x0000000000001e00ULL & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_62_3_sdt_3 
        = (IData)((0ULL == (0x000000001e000000ULL & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_17 
        = (IData)((0ULL == (0x000000000001e000ULL & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_5 
        = (IData)((0ULL == (0x000001e000000000ULL & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_9 
        = (IData)((0ULL == (0x00000001e0000000ULL & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_18_3_sdt_3 
        = (IData)((0ULL == (0x00001e0000000000ULL & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_2 
        = (IData)((0ULL == (0x0001e00000000000ULL & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__reg_chn_a_rsci_iswt0_cse));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__911__sel 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__911__input_1 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__911__input_0 
        = (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X7.interp_in0_pd);
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__911__sel)
            ? __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__911__input_1
            : __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__911__input_0);
    __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__911__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__chn_b_rsci_d_mxwt 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__911__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__910__sel 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__910__input_1 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__910__input_0 
        = (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X7.interp_in1_pd);
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__910__sel)
            ? __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__910__input_1
            : __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__910__input_0);
    __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__910__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__910__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__904__sbit = 0U;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__904__arg2 
        = ((0x000001feU & (((IData)(0x0dU) + (0x00000080U 
                                              | (0x0000007fU 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_right_shift_qr_lpi_1_dfm) 
                                                     >> 1U))))) 
                           << 1U)) | (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_right_shift_qr_lpi_1_dfm))));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__904__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_IsZero_8U_23U_1_or_itm_2) 
            << 0x00000017U) | (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__b_sva_36));
    if ((0x00000100U & (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__904__arg2))) {
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__904__sbit) 
                << 0x00000018U) | __Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__904__arg1);
        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__905__sbit 
            = __Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__904__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__905__arg2 
            = (0x000001ffU & (~ (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__904__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__905__arg1 
            = (0x00ffffffU & (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__905__sbit))));
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x0001ffffff000000ULL & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__905__arg1)));
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTRS_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__905__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__905__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__904__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__905__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__906__sbit 
            = __Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__904__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__906__arg2 
            = __Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__904__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__906__arg1 
            = __Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__904__arg1;
        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__907__sbit 
            = vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__906__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__907__arg2 
            = vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__906__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__907__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__906__sbit) 
                << 0x00000018U) | vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__906__arg1);
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__907__sbit))));
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x0001fffffe000000ULL & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__907__arg1)));
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTL_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__907__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__907__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__906__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__907__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__904__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__906__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_itm 
        = vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__904__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__900__sbit = 0U;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__900__arg2 
        = ((0x000001feU & (((IData)(0x0dU) + (0x00000080U 
                                              | (0x0000007fU 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_right_shift_qr_lpi_1_dfm) 
                                                     >> 1U))))) 
                           << 1U)) | (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_right_shift_qr_lpi_1_dfm))));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__900__arg1 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_IsZero_8U_23U_or_itm_2) 
            << 0x00000017U) | (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_sva_36));
    if ((0x00000100U & (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__900__arg2))) {
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__900__sbit) 
                << 0x00000018U) | __Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__900__arg1);
        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__901__sbit 
            = __Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__900__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__901__arg2 
            = (0x000001ffU & (~ (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__900__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__901__arg1 
            = (0x00ffffffU & (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
                              >> 1U));
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__901__sbit))));
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x0001ffffff000000ULL & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__901__arg1)));
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTRS_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__901__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__901__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__900__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__901__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__902__sbit 
            = __Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__900__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__902__arg2 
            = __Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__900__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__902__arg1 
            = __Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__900__arg1;
        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__903__sbit 
            = vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__902__sbit;
        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__903__arg2 
            = vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__902__arg2;
        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__903__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__902__sbit) 
                << 0x00000018U) | vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__902__arg1);
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x0001ffffffffffffULL & (- (QData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__903__sbit))));
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x0001fffffe000000ULL & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
               | (IData)((IData)(vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__903__arg1)));
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x0001ffffffffffffULL & VL_SHIFTL_QQI(49,49,9, vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t, (IData)(vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__903__arg2)));
        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__903__Vfuncout 
            = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__902__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__903__Vfuncout;
        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__900__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__902__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_itm 
        = vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__900__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm 
        = (1U & (~ ((~ (IData)((vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                >> 0x00000031U))) | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_if_3_if_acc_1_itm_7_1))));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nor_32_nl 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_tmp_16))));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nl_FpAdd_8U_23U_asn_4_mx0w1 
        = (0x000fffffffffffffULL & (1ULL + ((0x0002000000000000ULL 
                                             | (0x0001ffffffffffffULL 
                                                & (~ vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_addend_smaller_qr_lpi_1_dfm_mx0))) 
                                            + VL_EXTEND_QQ(52,50, 
                                                           ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__867__vector 
                                = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_addend_larger_qr_lpi_1_dfm_mx0;
                            vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__867__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__867__vector;
                        }(), vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__867__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nl_FpAdd_8U_23U_asn_5_mx0w0 
        = (0x0007ffffffffffffULL & (VL_EXTEND_QQ(51,50, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__865__vector 
                            = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_addend_larger_qr_lpi_1_dfm_mx0;
                        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__865__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__865__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__865__Vfuncout)) 
                                    + VL_EXTEND_QQ(51,50, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__866__vector 
                            = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_addend_smaller_qr_lpi_1_dfm_mx0;
                        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__866__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__866__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__866__Vfuncout))));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_134_4_sdt_4 
        = (IData)(((0ULL == (0x000000000000001eULL 
                             & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_20)));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_21 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_17) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_110_3_sdt_3));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_42_4_sdt_4 
        = (IData)(((0ULL == (0x0000001e00000000ULL 
                             & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_5)));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_13 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_9) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_62_3_sdt_3));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_6 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_2) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_18_3_sdt_3));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_equal_tmp 
        = ((0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__chn_a_rsci_d_mxwt 
                           >> 0x00000017U)) == (0x000000ffU 
                                                & (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__chn_b_rsci_d_mxwt 
                                                   >> 0x00000017U)));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nl_FpAdd_8U_23U_is_a_greater_oif_aelse_acc_nl 
        = (0x03ffffffU & ((IData)(1U) + ((0x00800000U 
                                          | (0x007fffffU 
                                             & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                                         + VL_EXTEND_II(26,24, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_23_24__882__vector 
                                = (0x007fffffU & (~ vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__chn_b_rsci_d_mxwt));
                            vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_23_24__882__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_23_24__882__vector;
                        }(), vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_23_24__882__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nl_FpAdd_8U_23U_is_a_greater_acc_1_nl 
        = (0x000007ffU & ((IData)(1U) + ((0x00000100U 
                                          | (0x000000ffU 
                                             & (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__chn_b_rsci_d_mxwt 
                                                >> 0x17U))) 
                                         + VL_EXTEND_II(11,9, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_8_9__861__vector 
                                = (0x000000ffU & (~ 
                                                  (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__chn_a_rsci_d_mxwt 
                                                   >> 0x17U)));
                            vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_8_9__861__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_8_9__861__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_8_9__861__Vfuncout))))));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_IsNaN_8U_23U_nor_tmp 
        = (1U & (~ (IData)(((0x7f800000U != (0x7f800000U 
                                             & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                            | (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__chn_a_rsci_d_mxwt))))));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__895__sel 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__895__input_1 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__895__input_0 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nor_32_nl;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__895__sel)
            ? (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__895__input_1)
            : (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__895__input_0));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__895__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__mux_22_nl 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__895__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__897__sel 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__897__input_1 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__897__input_0 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nor_32_nl;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__897__sel)
            ? (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__897__input_1)
            : (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__897__input_0));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__897__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__mux_24_nl 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__897__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_50_2_2__868__sel 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__reg_FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_xor_svs_2_cse;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_50_2_2__868__input_1 
        = (0x0003ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nl_FpAdd_8U_23U_asn_5_mx0w0);
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_50_2_2__868__input_0 
        = (0x0003ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nl_FpAdd_8U_23U_asn_4_mx0w1);
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_v_50_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_50_2_2__868__sel)
            ? __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_50_2_2__868__input_1
            : __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_50_2_2__868__input_0);
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_50_2_2__868__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_v_50_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_mx0 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_50_2_2__868__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__880__sel 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__reg_FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_xor_svs_2_cse;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__880__input_1 
        = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nl_FpAdd_8U_23U_asn_5_mx0w0 
                         >> 0x00000031U)));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__880__input_0 
        = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nl_FpAdd_8U_23U_asn_4_mx0w1 
                         >> 0x00000031U)));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__880__sel)
            ? (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__880__input_1)
            : (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__880__input_0));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__880__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_mux_2_tmp_49 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__880__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X7.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct) 
              & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X7.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt)));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_22 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_21) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_134_4_sdt_4));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_90_5_sdt_5 
        = (IData)((((0ULL == (0x00000000001e0000ULL 
                              & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_12)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_13)));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_14 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_6) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_42_4_sdt_4));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__reg_chn_a_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__reg_chn_a_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_24_1_23__883__vector 
        = (0x00ffffffU & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nl_FpAdd_8U_23U_is_a_greater_oif_aelse_acc_nl);
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__readslicef_24_1_23__Vstatic__tmp 
        = (0x00ffffffU & VL_SHIFTR_III(24,24,32, __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_24_1_23__883__vector, 0x00000017U));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_24_1_23__883__Vfuncout 
        = (1U & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__readslicef_24_1_23__Vstatic__tmp);
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_aelse_acc_itm_23_1 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_24_1_23__883__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_9_1_8__862__vector 
        = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nl_FpAdd_8U_23U_is_a_greater_acc_1_nl));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp 
        = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_9_1_8__862__vector), 8U));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_9_1_8__862__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_a_greater_acc_1_itm_8_1 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_9_1_8__862__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_23 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_14) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_90_5_sdt_5));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_a_greater_FpAdd_8U_23U_is_a_greater_or_cse 
        = (((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_aelse_acc_itm_23_1)) 
            & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_equal_tmp)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_a_greater_acc_1_itm_8_1));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__and_dcpl_7 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__857__sel 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__857__input_1 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nor_tmp_11;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__857__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nor_tmp_11)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__857__sel)
            ? (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__857__input_1)
            : (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__857__input_0));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__857__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__mux_9_nl 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__857__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__881__sel 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__881__input_1 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__881__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__881__sel)
            ? (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__881__input_1)
            : (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__881__input_0));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__881__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__mux_tmp_5 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__881__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_and_195_nl 
        = (IData)(((0ULL == (0x0001800000000000ULL 
                             & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                   & (((~ (((~ (IData)(((0ULL == (0x0000000180000000ULL 
                                                  & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                                        & ((~ ((~ (IData)(
                                                          ((0ULL 
                                                            == 
                                                            (0x0000000001800000ULL 
                                                             & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                                                           & ((0ULL 
                                                               != 
                                                               (0x0000000000600000ULL 
                                                                & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                                                              | (0U 
                                                                 == 
                                                                 (3U 
                                                                  & (IData)(
                                                                            (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                             >> 0x00000013U)))))))) 
                                               & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_13))) 
                                           & ((0ULL 
                                               != (0x0000000060000000ULL 
                                                   & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                                              | (0U 
                                                 == 
                                                 (3U 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                             >> 0x0000001bU))))))))) 
                            & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_14)) 
                           | (((~ (IData)(((0ULL == 
                                            (0x0000000000018000ULL 
                                             & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                                           & ((~ ((~ (IData)(
                                                             ((0ULL 
                                                               == 
                                                               (0x0000000000000180ULL 
                                                                & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                                                              & ((0ULL 
                                                                  != 
                                                                  (0x0000000000000060ULL 
                                                                   & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                                                                 | (0U 
                                                                    == 
                                                                    (3U 
                                                                     & (IData)(
                                                                               (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                                >> 3U)))))))) 
                                                  & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_21))) 
                                              & ((0ULL 
                                                  != 
                                                  (0x0000000000006000ULL 
                                                   & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                                                 | (0U 
                                                    == 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                >> 0x0000000bU))))))))) 
                               | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_22)) 
                              & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_23)))) 
                       & (~ ((~ (IData)(((0ULL == (0x0000018000000000ULL 
                                                   & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                                         & ((0ULL != 
                                             (0x0000006000000000ULL 
                                              & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                                            | (0U == 
                                               (3U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                           >> 0x00000023U)))))))) 
                             & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_6)))) 
                      & ((0ULL != (0x0000600000000000ULL 
                                   & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                         | (0U == (3U & (IData)((vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                 >> 0x0000002bU))))))));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_IntLeadZero_49U_leading_sign_49_0_rtn_or_1_nl 
        = (1U & ((~ ((IData)((vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                              >> 0x00000030U)) | ((1U 
                                                   == 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                               >> 0x0000002eU)))) 
                                                  | ((((IData)(
                                                               (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                >> 0x00000020U)) 
                                                       | ((1U 
                                                           == 
                                                           (3U 
                                                            & (IData)(
                                                                      (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                       >> 0x0000001eU)))) 
                                                          | ((((IData)(
                                                                       (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                        >> 0x0000001cU)) 
                                                               | (1U 
                                                                  == 
                                                                  (3U 
                                                                   & (IData)(
                                                                             (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                              >> 0x0000001aU))))) 
                                                              & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_9)) 
                                                             | (((IData)(
                                                                         (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                          >> 0x00000018U)) 
                                                                 | ((1U 
                                                                     == 
                                                                     (3U 
                                                                      & (IData)(
                                                                                (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                                >> 0x00000016U)))) 
                                                                    | (((IData)(
                                                                                (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                                >> 0x00000014U)) 
                                                                        | (1U 
                                                                           == 
                                                                           (3U 
                                                                            & (IData)(
                                                                                (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                                >> 0x00000012U))))) 
                                                                       & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_12)))) 
                                                                & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_13))))) 
                                                      & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_14)) 
                                                     | (((((IData)(
                                                                   (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                    >> 0x00000010U)) 
                                                           | (1U 
                                                              == 
                                                              (3U 
                                                               & (IData)(
                                                                         (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                          >> 0x0000000eU))))) 
                                                          | (((((IData)(
                                                                        (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                         >> 0x0000000cU)) 
                                                                | (1U 
                                                                   == 
                                                                   (3U 
                                                                    & (IData)(
                                                                              (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                               >> 0x0000000aU))))) 
                                                               & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_17)) 
                                                              | (((IData)(
                                                                          (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                           >> 8U)) 
                                                                  | ((1U 
                                                                      == 
                                                                      (3U 
                                                                       & (IData)(
                                                                                (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                                >> 6U)))) 
                                                                     | (((IData)(
                                                                                (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                                >> 4U)) 
                                                                         | (1U 
                                                                            == 
                                                                            (3U 
                                                                             & (IData)(
                                                                                (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                                >> 2U))))) 
                                                                        & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_20)))) 
                                                                 & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_21))) 
                                                             | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_22))) 
                                                         & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_23)) 
                                                        | ((((IData)(
                                                                     (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                      >> 0x0000002cU)) 
                                                             | (1U 
                                                                == 
                                                                (3U 
                                                                 & (IData)(
                                                                           (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                            >> 0x0000002aU))))) 
                                                            & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_2)) 
                                                           | (((IData)(
                                                                       (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                        >> 0x00000028U)) 
                                                               | ((1U 
                                                                   == 
                                                                   (3U 
                                                                    & (IData)(
                                                                              (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                               >> 0x00000026U)))) 
                                                                  | (((IData)(
                                                                              (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                               >> 0x00000024U)) 
                                                                      | (1U 
                                                                         == 
                                                                         (3U 
                                                                          & (IData)(
                                                                                (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                                                >> 0x00000022U))))) 
                                                                     & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_5)))) 
                                                              & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_6)))))))) 
                 | ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2)) 
                    & ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_22) 
                       & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_23)))));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__and_dcpl_15 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_3)) 
           & (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_2_mx0c1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_2) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_1)) 
              & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_cse)));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_3_mx0c1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_2)) 
              & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_3)));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__and_dcpl_28 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__and_dcpl_13 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_3));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__and_dcpl_29 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_cse));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__896__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__896__input_1 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nor_tmp_11;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__896__input_0 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__mux_22_nl;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__896__sel)
            ? (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__896__input_1)
            : (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__896__input_0));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__896__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__mux_23_nl 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__896__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__898__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__898__input_1 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nor_tmp_11;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__898__input_0 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__mux_24_nl;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__898__sel)
            ? (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__898__input_1)
            : (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__898__input_0));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__898__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__mux_25_nl 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__898__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__855__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__855__input_1 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__855__input_0 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_1;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__855__sel)
            ? (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__855__input_1)
            : (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__855__input_0));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__855__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__mux_4_cse 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__855__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__858__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_or_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_3));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__858__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nor_tmp_11)));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__858__input_0 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__mux_9_nl;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__858__sel)
            ? (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__858__input_1)
            : (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__858__input_0));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__858__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__mux_10_nl 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__858__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_tmp_3 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_2)));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__and_dcpl_33 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_a_greater_acc_1_itm_8_1)) 
              & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_equal_tmp)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_aelse_acc_itm_23_1))));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__s 
        = ((((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_23) 
             << 5U) | ((((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_14) 
                         & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_90_5_sdt_5)) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_22))) 
                        << 4U) | (((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_6) 
                                   & ((~ ((~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_134_4_sdt_4)) 
                                              & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_21))) 
                                          & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_23))) 
                                      & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_42_4_sdt_4)) 
                                         | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_13)))) 
                                  << 3U))) | ((((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_2) 
                                                & ((~ 
                                                    (((~ 
                                                       ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_9) 
                                                        & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_62_3_sdt_3)) 
                                                           | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_12)))) 
                                                      & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_14)) 
                                                     | (((~ 
                                                          ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_17) 
                                                           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_110_3_sdt_3)) 
                                                              | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_20)))) 
                                                         | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_22)) 
                                                        & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_23)))) 
                                                   & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_18_3_sdt_3)) 
                                                      | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_5)))) 
                                               << 2U) 
                                              | (((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_and_195_nl) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_IntLeadZero_49U_leading_sign_49_0_rtn_or_1_nl))));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_22_0_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_6)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__and_dcpl_13));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_FpSignedBitsToFloat_8U_23U_1_or_1_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__and_dcpl_28) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__and_dcpl_29));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_and_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_tmp_16) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__and_dcpl_29));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_and_1_rgt 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_tmp_16)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__and_dcpl_29));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__856__sel 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_3;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__856__input_1 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_tmp_3;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__856__input_0 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__mux_tmp_5;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__856__sel)
            ? (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__856__input_1)
            : (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__856__input_0));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__856__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__mux_6_nl 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__856__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__893__sel 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_mux_2_tmp_49;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__893__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__893__input_0 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_tmp_3;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__893__sel)
            ? (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__893__input_1)
            : (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__893__input_0));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__893__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__mux_7_nl 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__893__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_FpAdd_8U_23U_or_1_cse 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_a_greater_FpAdd_8U_23U_is_a_greater_or_cse) 
            & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_cse)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__and_dcpl_33));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__908__arg2 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__s;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__908__arg1 
        = (0x0001ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2);
    __Vfunc_HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__909__arg2 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__908__arg2;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__909__arg1 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__908__arg1;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__909__arg1;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x0003ffffffffffffULL & (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
                                    << (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__909__arg2)));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__909__Vfuncout 
        = (0x0001ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result);
    __Vfunc_HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__908__Vfuncout 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__909__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_itm 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u__908__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nl_FpNormalize_8U_49U_acc_nl 
        = (0x000007ffU & ((IData)(1U) + ((0x00000100U 
                                          | (0x000000ffU 
                                             & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6)))) 
                                         + VL_EXTEND_II(11,9, 
                                                        ([&]() {
                            vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2s_6_9__878__vector 
                                = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__s;
                            vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2s_6_9__878__Vfuncout 
                                = vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2s_6_9__878__vector;
                        }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2s_6_9__878__Vfuncout))))));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__894__sel 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_3)) 
                    | (IData)((vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                               >> 0x00000031U)))));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__894__input_1 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__mux_7_nl;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__894__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__mux_tmp_5)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_mux_2_tmp_49))));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__894__sel)
            ? (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__894__input_1)
            : (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__894__input_0));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__894__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__mux_8_nl 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__894__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_oelse_not_3 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_if_or_itm_2) 
           & ([&]() {
                vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_9_1_8__879__vector 
                    = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nl_FpNormalize_8U_49U_acc_nl));
                vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp 
                    = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_9_1_8__879__vector), 8U));
                vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_9_1_8__879__Vfuncout 
                    = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp));
            }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_9_1_8__879__Vfuncout)));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__870__sel 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_oelse_not_3;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__870__input_1 
        = (0x000000ffU & ((IData)(1U) + ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6) 
                                         + (0x000000c0U 
                                            | (0x0000003fU 
                                               & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__s)))))));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__870__sel)
            ? (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__870__input_1)
            : 0U);
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__870__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_nl 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__870__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__872__sel 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_oelse_not_3;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__872__input_1 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_itm;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__872__sel)
            ? __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__872__input_1
            : 0ULL);
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__872__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_1_nl 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__872__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_3_2__871__sel 
        = ((4U & ((~ (IData)((vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                              >> 0x31U))) << 2U)) | 
           ((((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_if_3_if_acc_1_itm_7_1)) 
              & (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                 >> 0x00000031U)) << 1U) | ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_if_3_if_acc_1_itm_7_1) 
                                            & (IData)(
                                                      (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                                       >> 0x00000031U)))));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_3_2__871__input_0 
        = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6)));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_3_2__871__input_1 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_3_2__871__input_2 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_nl;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_3_2__871__input_0) 
           & (- (IData)((1U & (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_3_2__871__sel)))));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_3_2__871__input_1) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_3_2__871__sel) 
                                  >> 1U))))));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_3_2__871__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_3_2__871__sel) 
                                  >> 2U))))));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_3_2__871__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_o_expo_lpi_1_dfm_2 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_3_2__871__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__873__sel 
        = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                         >> 0x31U)));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__873__input_1 
        = (0x0001ffffffffffffULL & (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                    >> 1U));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__873__input_0 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_1_nl;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__873__sel)
            ? __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__873__input_1
            : __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__873__input_0);
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__873__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__873__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_8_1_7__875__vector 
        = (0x000000ffU & ((IData)(1U) + (0x00000080U 
                                         | (0x0000007fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_o_expo_lpi_1_dfm_2) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_8_1_7__875__vector), 7U));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_8_1_7__875__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_if_4_if_acc_1_itm_7_1 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_8_1_7__875__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpMantRNE_49U_24U_else_carry_sva 
        = (IData)(((vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0 
                    >> 0x00000018U) & (0ULL != (0x0000000002ffffffULL 
                                                & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0))));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nl_FpMantRNE_49U_24U_else_acc_nl 
        = (0x00ffffffU & ((0x007fffffU & (IData)((vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0 
                                                  >> 0x19U))) 
                          + VL_EXTEND_II(24,23, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_1_23__891__vector 
                            = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpMantRNE_49U_24U_else_carry_sva;
                        vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_1_23__891__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_1_23__891__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_1_23__891__Vfuncout))));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpMantRNE_49U_24U_else_and_tmp 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpMantRNE_49U_24U_else_carry_sva) 
           & (0x0001fffffe000000ULL == (0x0001fffffe000000ULL 
                                        & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0)));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_and_tmp 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_if_4_if_acc_1_itm_7_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpMantRNE_49U_24U_else_and_tmp));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__874__sel 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpMantRNE_49U_24U_else_and_tmp;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__874__input_1 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm) 
                 | (~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_if_4_if_acc_1_itm_7_1))));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__874__input_0 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__874__sel)
            ? (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__874__input_1)
            : (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__874__input_0));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__874__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm_2_mx0 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__874__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_23_2_2__892__sel 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm_2_mx0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_23_2_2__892__input_0 
        = (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nl_FpMantRNE_49U_24U_else_acc_nl);
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_23_2_2__892__sel)
            ? 0x007fffffU : __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_23_2_2__892__input_0);
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_23_2_2__892__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_FpAdd_8U_23U_or_1_nl 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_23_2_2__892__Vfuncout;
}

VL_ATTR_COLD void Vsim_HLS_fp32_sub___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X7__u_fp_sub__1(Vsim_HLS_fp32_sub* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_sub___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X7__u_fp_sub__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__859__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__859__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__859__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__859__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__859__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__859__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__859__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__859__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__860__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__860__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__860__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__860__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__860__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__860__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__860__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__860__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__899__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__899__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__899__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__899__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__899__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__899__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__899__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__899__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X7.__PVT__fp_in_vld) 
              & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X7.__VdfgRegularize_h098ddedf_0_3)));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X7.__VdfgRegularize_h098ddedf_0_2) 
              & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X7.__PVT__fp_sub_sync_in_rdy)));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nor_tmp_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_1_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nor_tmp_1)) 
           & ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_1) 
              & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_cse)));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_en_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nor_tmp_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_cse));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__859__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__859__input_1 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__859__input_0 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nor_tmp_1;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__859__sel)
            ? (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__859__input_1)
            : (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__859__input_0));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__859__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__mux_13_cse 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__859__Vfuncout;
    vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nor_tmp_1) 
           & ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_cse) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U)));
    vlSelfRef.HLS_fp32_sub_core_inst__DOT____VdfgRegularize_hd722136d_0_3 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_IsNaN_8U_23U_nor_tmp) 
                 | (~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nor_tmp_1))));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_tmp_29 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_en_1) 
                 | ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
                 & (((~ (IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0)) 
                     | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt)) 
                    & ((~ (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0)) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)))));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__899__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__899__input_1 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_tmp_16) 
                        & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_1))) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4))));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__899__input_0 
        = (1U & (~ ((~ (IData)(((0x7f800000U != (0x7f800000U 
                                                 & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                                | (0U == (0x007fffffU 
                                          & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__chn_b_rsci_d_mxwt))))) 
                    | (IData)(vlSelfRef.HLS_fp32_sub_core_inst__DOT____VdfgRegularize_hd722136d_0_3))));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__899__sel)
            ? (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__899__input_1)
            : (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__899__input_0));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__899__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__mux_27_nl 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__899__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__860__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_cse)));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__860__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4))));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__860__input_0 
        = (1U & (~ (IData)(vlSelfRef.HLS_fp32_sub_core_inst__DOT____VdfgRegularize_hd722136d_0_3)));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__860__sel)
            ? (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__860__input_1)
            : (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__860__input_0));
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__860__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__mux_28_nl 
        = __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__860__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt 
        = ((IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_and_1_cse 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_3)) 
               | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__and_dcpl_7))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.HLS_fp32_sub_core_inst__DOT____VdfgRegularize_hd722136d_0_5 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__and_dcpl_7)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_aelse_and_cse 
        = ((IData)(vlSelfRef.HLS_fp32_sub_core_inst__DOT____VdfgRegularize_hd722136d_0_5) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__mux_13_cse));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_addition_and_cse 
        = ((IData)(vlSelfRef.HLS_fp32_sub_core_inst__DOT____VdfgRegularize_hd722136d_0_5) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__mux_4_cse));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_and_8_cse 
        = ((IData)(vlSelfRef.HLS_fp32_sub_core_inst__DOT____VdfgRegularize_hd722136d_0_5) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__mux_6_nl));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_and_3_cse 
        = ((IData)(vlSelfRef.HLS_fp32_sub_core_inst__DOT____VdfgRegularize_hd722136d_0_5) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__mux_10_nl));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_1_and_cse 
        = ((IData)(vlSelfRef.HLS_fp32_sub_core_inst__DOT____VdfgRegularize_hd722136d_0_5) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__mux_28_nl));
}

VL_ATTR_COLD void Vsim_HLS_fp32_sub___ctor_var_reset(Vsim_HLS_fp32_sub* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_sub___ctor_var_reset\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__nvdla_core_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13795098205236914507ull);
    vlSelf->__PVT__nvdla_core_rstn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15781730201853965120ull);
    vlSelf->__PVT__chn_a_rsc_z = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2380236594467781804ull);
    vlSelf->__PVT__chn_a_rsc_vz = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17991353141507009153ull);
    vlSelf->__PVT__chn_a_rsc_lz = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13710593673808292217ull);
    vlSelf->__PVT__chn_b_rsc_z = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16850365506322810530ull);
    vlSelf->__PVT__chn_b_rsc_vz = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13162467270669676242ull);
    vlSelf->__PVT__chn_b_rsc_lz = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8307224015079505439ull);
    vlSelf->__PVT__chn_o_rsc_z = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1477624943684843811ull);
    vlSelf->__PVT__chn_o_rsc_vz = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16276632572638137710ull);
    vlSelf->__PVT__chn_o_rsc_lz = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12314530991929382410ull);
    vlSelf->__PVT__chn_b_rsci_unreg_inst__DOT__in_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4422829178647546904ull);
    vlSelf->__PVT__chn_o_rsci_unreg_inst__DOT__in_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11134422164122515618ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__chn_a_rsci_d_mxwt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10811011494006740730ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__core_wten = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6350921790526914023ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__chn_b_rsci_d_mxwt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11717406208254526536ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_iswt0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 393736533714690881ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_31 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17765863026833459897ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_30_23 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6552676905856871687ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_22_0 = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 1788945571310586060ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_IsNaN_8U_23U_nor_tmp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8240321560106810342ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_equal_tmp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 950018602925898490ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__FpMantRNE_49U_24U_else_and_tmp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14943592130645054198ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__nor_tmp_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14316493782054073138ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__or_tmp_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13485573215395884925ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__mux_tmp_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7561548835894505892ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__nor_tmp_11 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9706623913577967997ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__or_tmp_16 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7524660428155606514ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__and_dcpl_7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5837620137023510490ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__and_dcpl_13 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2908865043745360221ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__and_dcpl_15 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12116128787540647338ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__and_dcpl_28 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12388737706245717270ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__and_dcpl_29 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16370043912827729170ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__and_dcpl_33 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5368289423217452982ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__or_tmp_29 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17350677854819084854ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7770950217115118642ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18074909025004629139ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7764666229809293622ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8408754285204438857ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11974249563307197727ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__b_sva_36 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15663895564312017095ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_sva_36 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12902313988547109966ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15616182972654136787ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11200171282197952427ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_4 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12411423357769846579ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_5 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2268597965616421693ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8957888256479990139ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_sva_2 = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 4832921554616550698ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_sva_2 = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 1324180426389797743ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_xor_svs_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10639602235335359769ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 17876659212931963373ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8886742980695923254ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5059666697409330898ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_IsZero_8U_23U_or_itm_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10061464065377329184ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_IsZero_8U_23U_1_or_itm_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14570542520641057374ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_if_or_itm_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11866214048453183700ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_1_nor_itm_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2180606769142151722ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_1_IsNaN_8U_23U_1_nand_itm_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18265523396335729842ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_mux_1_itm_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7012268896183287429ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_mux_13_itm_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3286493847231767388ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_mux_13_itm_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14126758002836382692ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_30_23_itm_3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7328953306208036673ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_30_23_itm_4 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1957752749415095531ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_22_0_itm_3 = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 1821534956104707028ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_22_0_itm_4 = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 15911794217325983338ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7992381494735655787ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_mux_2_tmp_49 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13592356432473093110ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_en_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15802859392049004860ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm_2_mx0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18087262438700161290ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11675271305028520884ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_mx0 = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 8236169894182596668ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_o_expo_lpi_1_dfm_2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3171861518779534496ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__reg_chn_a_rsci_iswt0_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3639875106464351093ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__reg_chn_a_rsci_ld_core_psct_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17616952794546569607ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_and_1_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9649970429675487735ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_or_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15744153985377630326ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6204497742590019874ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__or_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10523274106329851932ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_a_greater_FpAdd_8U_23U_is_a_greater_or_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 610278233303424969ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_and_rgt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16226102205607800277ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_and_1_rgt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2850977964831928448ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_itm = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 2784439452003641756ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_itm = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 16203663152411875016ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_itm = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 14861567228857701372ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_22_0_mx0c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3041945942846453728ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_1_mx0c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9535383014505050018ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_2_mx0c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11279440132475437938ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_3_mx0c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7049511199884413719ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_addend_larger_qr_lpi_1_dfm_mx0 = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 16939209002843988912ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_addend_smaller_qr_lpi_1_dfm_mx0 = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 15952063132388049233ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__nl_FpAdd_8U_23U_asn_5_mx0w0 = VL_SCOPED_RAND_RESET_Q(51, __VscopeHash, 5602880472083801204ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__nl_FpAdd_8U_23U_asn_4_mx0w1 = VL_SCOPED_RAND_RESET_Q(52, __VscopeHash, 7101967993408436434ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_1_lpi_1_dfm_2_mx0 = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 6861781178871018945ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__FpMantRNE_49U_24U_else_carry_sva = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12247922125834542102ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_and_tmp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9185214187995962564ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_right_shift_qr_lpi_1_dfm = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11234672704917644972ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_right_shift_qr_lpi_1_dfm = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7887689324360311195ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_oelse_not_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12244567286823909353ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_addition_and_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3432562477317138082ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_and_8_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14602677074458132584ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_aelse_and_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6546431935608329080ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_FpSignedBitsToFloat_8U_23U_1_or_1_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3828399394582491979ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_FpAdd_8U_23U_or_1_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8889434049290179229ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_1_and_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8825616215883461990ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__reg_FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_xor_svs_2_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8555801025422904591ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__mux_13_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10003968113013988912ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__mux_4_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8133267634385624899ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_and_3_cse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13339650832815193353ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_a_greater_acc_1_itm_8_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5681503512017988088ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_if_3_if_acc_1_itm_7_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8830312737888037069ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_if_4_if_acc_1_itm_7_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8086473274629235900ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_aelse_acc_itm_23_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7311171404000206453ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_FpAdd_8U_23U_or_1_nl = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 999052708049589534ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__nl_FpMantRNE_49U_24U_else_acc_nl = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 16901975268761441018ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__mux_6_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8674139823519359469ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__mux_8_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14639871939069055253ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__mux_7_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17577423704521469688ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__mux_10_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17360117268157651026ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__mux_9_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4285652048115467365ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__mux_23_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1301981120199293248ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__mux_22_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2961608430181463932ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__nor_32_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1135070356033319444ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__mux_25_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 345483981358609230ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__mux_24_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5755134724198533391ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__mux_27_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8899498594662008261ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__mux_28_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11309034168157103673ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__nl_FpAdd_8U_23U_is_a_greater_acc_1_nl = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 17477756775592638701ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_nl = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11885972659080744720ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_FpNormalize_8U_49U_and_1_nl = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 9232044132461330514ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__nl_FpNormalize_8U_49U_acc_nl = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 8621271333579569133ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__nl_FpAdd_8U_23U_is_a_greater_oif_aelse_acc_nl = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 14730806824924217959ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17643525714695533005ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6485265500622035377ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_4_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15250610053328481537ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12241825083688410419ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__MUX_v_23_2_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 696238780609918142ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__MUX_v_49_2_2__Vstatic__result = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 12043076475237489536ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__MUX_v_50_2_2__Vstatic__result = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 2214478936685662955ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9005991735113888337ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__readslicef_24_1_23__Vstatic__tmp = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 6240573900139777425ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4785512070322423956ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 14107532417565619058ull);
    vlSelf->HLS_fp32_sub_core_inst__DOT____VdfgRegularize_hd722136d_0_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1380665854428573633ull);
    vlSelf->HLS_fp32_sub_core_inst__DOT____VdfgRegularize_hd722136d_0_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16276534874927532031ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 17554323232983549623ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 3820646171779394265ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 15131404025467394967ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 8193757992335686212ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 7258284858294893605ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 12525360897461382588ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__Vstatic__result_t = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 4301862602150558622ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 6867658124861908839ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__Vstatic__result_t = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 9164936618166807980ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 1690817762329872070ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__s = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9852158719336492342ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 6273063373352194833ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_else_lshift_rg__DOT__fshl_u_1__Vstatic__result_t = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 17204413688133571927ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_18_3_sdt_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11862148563761904832ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_42_4_sdt_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7317419690530746602ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_62_3_sdt_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9602982594838626059ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_90_5_sdt_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14436095339478925009ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_110_3_sdt_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9400016248973523993ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_134_4_sdt_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3651188543397303859ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16113094694908966084ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7026733717467436757ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10909429628256911677ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_9 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11895710606155847781ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_12 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9976246213600840106ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_13 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14868280490853552725ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_14 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14140161792919503799ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_17 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7221898177071767967ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_20 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15898069842691957946ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_21 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4937600189798246347ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_22 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7663002501980364184ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_23 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14790121145297994503ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_and_195_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 769482536611640213ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_IntLeadZero_49U_leading_sign_49_0_rtn_or_1_nl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6057713638979548728ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3795630407640211187ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1729730145934963195ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10364860120355141728ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13322976023556217056ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13870105848747498724ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6427566197424640155ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10955888364788080487ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15612469760038779675ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15389512740524460391ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18419763141702173875ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1059502183855334078ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9451607832231249815ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2712890996655227570ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10546561846652393897ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13108148307519351552ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14434470262903128325ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15443045654485751145ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15979087547787964934ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1356629800499737489ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4214530791976899202ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15726540504964094347ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 108700350949908419ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1206226351675543422ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11296508010557906861ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8673920243540252265ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9636786604086581620ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9395535869727808065ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9040101382401241317ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_core_fsm_inst__DOT__core_wen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17880808635168364587ull);
    vlSelf->__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_core_fsm_inst__DOT__state_var = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15524937621414384019ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_8_9__6__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 15427164934023496239ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_8_9__6__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2450633881524876113ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__10__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 16383654417842153616ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__10__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 4834144723920288024ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__11__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 11926556556754025821ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__11__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 12565427220276770290ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__12__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 4673478742497656479ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__12__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 6834654753572720841ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2s_6_9__23__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 7100656513313552201ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2s_6_9__23__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 10320585055043088321ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_9_1_8__24__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15646032321020671303ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_9_1_8__24__vector = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 4525467858052982761ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_23_24__27__Vfuncout = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 4450230983850352918ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_23_24__27__vector = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 6917925766749579471ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_1_23__36__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 6458315966901629254ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_1_23__36__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14258402759487894582ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__45__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 17682686803040277718ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__46__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 17754422050247362544ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__46__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 1603671189445266427ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__46__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 9640006320300886001ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__46__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5418975423356117771ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__47__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 4245290436818933007ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__47__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 7265351448126852789ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__47__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 16612605890870359661ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__47__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2035395582303492857ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__48__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 6368110308434968083ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__48__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 6348042099005455254ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__48__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 3373070502342727145ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__48__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10290133207247163977ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__49__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 12198525615913984096ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__50__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 16051999208440819301ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__50__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 11731269932465072857ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__50__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 17810464428468575031ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__50__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8005350877942147577ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__51__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 16008512322765082301ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__51__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 17997636909604933860ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__51__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 265228953735600216ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__51__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13036604172317160269ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__52__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 3068684938974244419ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__52__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 8465334782918588157ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__52__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 5131947871842841210ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__52__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10622268312453280536ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_8_9__63__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 1177758212460515145ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_8_9__63__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15169125676871584680ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__67__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 8188119314147827724ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__67__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 12340991364807587583ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__68__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 8255557353325273253ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__68__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 14194147820052508513ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__69__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 16515429951116454195ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__69__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 8431633918247063223ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2s_6_9__80__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 12498643828890700303ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2s_6_9__80__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17799700898119673142ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_9_1_8__81__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13552060007843239073ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_9_1_8__81__vector = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 8027905244261557590ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_23_24__84__Vfuncout = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 16338983159411622673ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_23_24__84__vector = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 568800664226306102ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_1_23__93__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 14694304167828451463ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_1_23__93__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1036364623670328711ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__102__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 4692949470123525600ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__103__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 15795134590949119640ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__103__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 5297561747030985637ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__103__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 15233375601820538103ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__103__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2496584387913867606ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__104__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 6301064923979476950ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__104__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 9210646585566346838ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__104__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 17736200774856520032ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__104__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10766783755001313205ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__105__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 1616387483035800612ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__105__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 11450510909090754648ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__105__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 8563010030082165889ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__105__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13582479395234711827ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__106__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 6595893651917952896ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__107__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 14122226370495337123ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__107__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 8777002541900200891ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__107__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 148150744450293352ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__107__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17164779969272896320ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__108__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 16648108431640877066ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__108__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 3587257689758392329ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__108__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 3061996365216366401ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__108__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4197919558802163271ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__109__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 14302394825312329824ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__109__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 15840685631846490329ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__109__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 16130818901254308721ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__109__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2869689421913898722ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_8_9__120__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 5259591447619669745ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_8_9__120__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4473340311528475517ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__124__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 6969338569433908702ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__124__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 10586986689072561062ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__125__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 766688348108954828ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__125__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 74176481145361644ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__126__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 8727134574633904397ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__126__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 1154741005460205101ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2s_6_9__137__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 9642126835193195906ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2s_6_9__137__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 3108212216450688965ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_9_1_8__138__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17864555093597468656ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_9_1_8__138__vector = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 16410150222249896947ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_23_24__141__Vfuncout = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 5901439262424996197ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_23_24__141__vector = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 15038408388530210334ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_1_23__150__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 16163208160955599788ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_1_23__150__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3637521121205967407ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__159__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 2468855798413578682ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__160__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 7857059752032447254ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__160__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 15755759205755364689ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__160__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 8334324660573700567ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__160__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4134141603021986699ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__161__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 6884758432853178245ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__161__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 4999901507217592496ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__161__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 5520131546773923244ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__161__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 649546164021433577ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__162__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 3751492726902259947ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__162__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 6467557267629944205ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__162__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 4599725526214344142ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__162__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11502418114873856043ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__163__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 13094646916561334535ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__164__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 14910355398998278737ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__164__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 180529983898640443ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__164__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 16792336106353212777ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__164__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 334570251310343542ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__165__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 4292024637772571393ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__165__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 2219968211872586721ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__165__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 126280581644014177ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__165__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10037803567068464059ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__166__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 18022405864946308760ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__166__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 18326642412784362959ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__166__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 7030213538588843055ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__166__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10367745727575911599ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_8_9__177__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 16014949729058978290ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_8_9__177__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11960147902539802332ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__181__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 14163089491822662995ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__181__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 8754313348576291661ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__182__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 14104045371454039941ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__182__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 12462793925617916096ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__183__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 426765048364754118ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__183__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 1138617949161977136ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2s_6_9__194__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 14306360544293104931ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2s_6_9__194__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 739949784964503798ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_9_1_8__195__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4334265372304271393ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_9_1_8__195__vector = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 4930601712491034578ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_23_24__198__Vfuncout = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 9136771473883178082ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_23_24__198__vector = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 1023856865276285476ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_1_23__207__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 15497079826062779335ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_1_23__207__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11510553269354773202ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__216__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 7930533262978762234ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__217__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 13965508779874314666ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__217__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 4842221137145680902ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__217__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 11540027483936141128ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__217__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10808014304521681135ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__218__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 3607394278493122400ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__218__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 3349850682770711936ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__218__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 125220601452210071ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__218__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 45046379468387403ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__219__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 9200753398668174934ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__219__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 16230115587596903190ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__219__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 16798300479305166374ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__219__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7831939720087749048ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__220__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 4260872081261470615ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__221__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 10634188824173745874ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__221__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 12921690816707271580ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__221__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 9025892261238030890ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__221__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3391838701977625273ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__222__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 5625942997900125372ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__222__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 13580620322838548636ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__222__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 5578113570488991029ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__222__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7807825981555908928ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__223__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 10963075031226687230ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__223__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 9903871917078655007ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__223__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 6788881544156963559ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__223__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8819797240043831939ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_8_9__234__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 14690920584333239137ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_8_9__234__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8099464097138000629ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__238__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 7066610535210485297ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__238__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 8329207742390157944ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__239__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 2117144383229593549ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__239__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 7937046089140653507ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__240__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 265339440518220740ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__240__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 10450332204751403588ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2s_6_9__251__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 2419607726460333152ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2s_6_9__251__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2717704046855637203ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_9_1_8__252__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4729117556276266294ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_9_1_8__252__vector = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 4428546513470443794ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_23_24__255__Vfuncout = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 12332327014090275676ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_23_24__255__vector = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 14176213245445658099ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_1_23__264__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 14759576459134674676ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_1_23__264__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16338142391949697794ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__273__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 2246567630153313734ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__274__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 10908088271548761807ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__274__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 1638444513023551691ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__274__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 8698567679384235146ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__274__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7378851561539043366ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__275__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 7381926870754236415ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__275__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 8500931587518290365ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__275__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 11949048952201085476ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__275__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1006484054237866923ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__276__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 3023302921370454203ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__276__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 8978551077090896706ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__276__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 5195952488672723023ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__276__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17052377578375251094ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__277__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 5653148471589799612ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__278__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 9138607263372709804ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__278__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 16212679726756931353ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__278__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 7977143992284906143ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__278__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18436505029315002729ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__279__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 11464238219799984232ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__279__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 5482103323853589192ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__279__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 6273676796572286813ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__279__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9231932330121400795ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__280__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 2779802468633309693ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__280__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 4156590770182157681ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__280__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 9347284263498899053ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__280__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9218462232259641201ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_8_9__291__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 4978779269710726742ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_8_9__291__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2988559374404496935ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__295__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 1791713678052242919ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__295__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 4049261890268333816ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__296__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 18383758354404596516ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__296__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 15027862122983200085ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__297__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 14034275489626325771ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__297__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 18432616019513099387ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2s_6_9__308__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 13872508348981647799ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2s_6_9__308__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8519435471459657615ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_9_1_8__309__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 33395380809976700ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_9_1_8__309__vector = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 14212913331509635060ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_23_24__312__Vfuncout = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 14897607456023237253ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_23_24__312__vector = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 2786729740076149120ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_1_23__321__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 931519082379250394ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_1_23__321__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7456249935554214510ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__330__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 3897215033899996161ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__331__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 3849306229454048788ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__331__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 9087298929720247337ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__331__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 2345147851049092966ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__331__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 29973423833019772ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__332__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 5435042910972613927ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__332__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 11784316715642214997ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__332__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 16685383844418281169ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__332__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7026197452151756739ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__333__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 12129487440496494476ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__333__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 4399233533952398376ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__333__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 7419231121124336924ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__333__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5448389442630322869ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__334__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 5233083146463610831ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__335__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 1860192575157136972ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__335__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 16730045411435937861ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__335__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 8326929659342294070ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__335__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4823763775749112768ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__336__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 15375726459234268431ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__336__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 8141445677788094885ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__336__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 15154403492436704783ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__336__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6799238495524090767ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__337__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 11432328723995564394ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__337__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 17520716465877178402ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__337__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 9365132693056408363ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__337__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8221739981316318234ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_8_9__348__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 17362340897952547651ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_8_9__348__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3741614966595403986ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__352__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 16897491720727143872ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__352__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 4947923079936507572ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__353__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 11514289255559717725ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__353__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 4423366074289248154ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__354__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 13070832725401028551ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__354__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 816698060680093158ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2s_6_9__365__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 16336349527480194180ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2s_6_9__365__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 10402673551125178742ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_9_1_8__366__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1482606977111134641ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_9_1_8__366__vector = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 2544873219963283802ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_23_24__369__Vfuncout = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 16587863992810964475ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_23_24__369__vector = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 10009596454789750282ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_1_23__378__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 17583781533035649443ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_1_23__378__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16500236685520550313ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__387__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 15945111178285279140ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__388__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 13232868435690409482ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__388__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 7807624095619457085ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__388__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 18414606424559680782ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__388__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4777277082984436200ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__389__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 16310700982100572131ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__389__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 3688886737853769867ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__389__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 7671379701557125539ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__389__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13612464815029461832ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__390__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 6633945004228512565ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__390__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 12030664922322543041ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__390__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 16228228754837924280ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__390__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11412166067955310896ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__391__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 7735620226163751921ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__392__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 10424086914966050995ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__392__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 14937606026925176720ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__392__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 18313177765284972449ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__392__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5994730405491011546ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__393__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 313691005832566829ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__393__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 10550859958847057128ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__393__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 16665226396230959230ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__393__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9905893416369456978ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__394__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 5457180904679630302ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__394__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 17369299342041442528ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__394__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 5130656247461160133ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__394__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14144090363382036148ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_8_9__405__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 893699889442607843ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_8_9__405__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9998023597640292536ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__409__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 17372557055990125624ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__409__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 1633432671926758747ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__410__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 1030697213508952020ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__410__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 12327903284698463153ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__411__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 17315051639769186563ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__411__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 17110645528434719710ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2s_6_9__422__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 11049984237982161621ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2s_6_9__422__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 15345667416886002568ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_9_1_8__423__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16429322448562718410ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_9_1_8__423__vector = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 1405055697989661761ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_23_24__426__Vfuncout = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 8471508524041691685ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_23_24__426__vector = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 1825346269222954757ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_1_23__435__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 13600648465818187518ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_1_23__435__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17111773981778304169ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__444__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 2668429110130930459ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__445__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 15758287919654779568ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__445__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 16517301171983058990ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__445__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 3682324693905584931ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__445__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5424740929982081757ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__446__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 3025537453947467189ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__446__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 474549149842044523ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__446__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 15149613518142816968ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__446__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15460505699894871966ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__447__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 3075463363148985281ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__447__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 16772180731921231873ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__447__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 9707148838415414823ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__447__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5299563759797951020ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__448__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 10032734829502369753ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__449__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 14078742797237664079ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__449__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 3255201549062127924ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__449__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 3070118654960117319ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__449__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10315551006435963494ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__450__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 12885878662715876984ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__450__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 14012529882527603888ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__450__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 5217447439157088092ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__450__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8947392472498910649ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__451__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 10032482607917440102ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__451__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 10448884981903952271ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__451__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 8664949299757237602ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__451__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5541533379047764021ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_8_9__462__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 3556955034457540031ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_8_9__462__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2590547901486760195ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__466__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 10424669531318737990ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__466__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 3105480570801444368ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__467__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 1513593524217771458ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__467__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 8220259142124512532ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__468__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 3652267596478712730ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__468__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 9037630824409949836ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2s_6_9__479__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 863073243081267862ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2s_6_9__479__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 3411848927689294738ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_9_1_8__480__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5585240761312095391ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_9_1_8__480__vector = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 12699550664600160280ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_23_24__483__Vfuncout = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 1471145247247262525ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_23_24__483__vector = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 496830767154100870ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_1_23__492__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 17639762226377609075ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_1_23__492__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4856946261716017156ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__501__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 7814779623336454176ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__502__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 17662242548740589839ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__502__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 321608602184265867ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__502__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 11599759405275033607ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__502__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10745472178705881466ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__503__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 9077023125522044282ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__503__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 7068696193284469836ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__503__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 10200241828604736599ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__503__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12365316862426536115ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__504__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 17029696617679455857ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__504__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 9299048355217864872ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__504__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 15718073503373204496ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__504__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12253182094130119687ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__505__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 6754879020609699978ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__506__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 17970092379272545528ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__506__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 335861973082232934ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__506__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 14039767066929263125ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__506__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10641905991734369265ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__507__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 1201119174137910232ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__507__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 10624251868902188803ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__507__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 12891809948952246159ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__507__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12780650337993790912ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__508__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 9072745140574574547ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__508__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 5887215218492010753ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__508__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 18041962253803714687ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__508__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16379033746190826884ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_8_9__519__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 2054457709421604961ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_8_9__519__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6605836665983880545ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__523__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 8163533914154253370ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__523__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 18387625989739900225ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__524__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 6666423831025239509ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__524__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 3643953721235945837ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__525__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 3670714832081550012ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__525__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 959498911298315265ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2s_6_9__536__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 18045266006519004929ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2s_6_9__536__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 11468322515792696149ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_9_1_8__537__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6322597670069349151ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_9_1_8__537__vector = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 4264194723980550296ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_23_24__540__Vfuncout = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 13955135270132718872ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_23_24__540__vector = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 7205663277600505793ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_1_23__549__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 5609258134930667106ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_1_23__549__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14280929150369653963ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__558__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 17880188593763851060ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__559__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 1501209781231417240ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__559__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 14249080674116534627ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__559__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 6999164702489537507ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__559__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1986140940248547895ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__560__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 18414509130115504540ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__560__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 11781650084945271159ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__560__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 3845058104477948146ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__560__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10314342851661869734ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__561__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 10242139859605244297ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__561__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 16449900435000034662ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__561__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 4758807932545895562ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__561__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13257204178384501667ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__562__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 8612280428674935474ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__563__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 18000921418529034494ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__563__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 15379291798941254483ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__563__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 4763121083271754871ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__563__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1635352846549466265ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__564__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 15182657744419069961ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__564__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 3316588080320545778ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__564__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 11118523452297358618ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__564__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4687824472638864782ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__565__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 513539532309494663ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__565__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 14500679391613289834ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__565__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 2893482948427982834ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__565__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1997058332820039635ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_8_9__576__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 16875710779976830571ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_8_9__576__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16468932543046759524ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__580__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 10593222064269660866ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__580__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 9144162933134367065ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__581__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 14386738801077037481ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__581__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 13264314272684461791ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__582__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 8372017352442426065ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__582__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 2347287744465694636ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2s_6_9__593__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 9713278657110419935ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2s_6_9__593__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17483087715479541852ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_9_1_8__594__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10545165361150008340ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_9_1_8__594__vector = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 2656291845994162994ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_23_24__597__Vfuncout = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 1906855200701549486ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_23_24__597__vector = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 16361701420765273738ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_1_23__606__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 11628791255644415386ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_1_23__606__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10617220903560240793ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__615__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 12599319303816898576ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__616__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 11297513173730610167ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__616__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 15712644410376008306ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__616__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 2415073335527908158ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__616__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3706033430041391834ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__617__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 14696161193855579366ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__617__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 1643025547666407952ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__617__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 12170365588462078237ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__617__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17529924358442203630ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__618__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 3178863925369551904ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__618__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 2341055382861407405ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__618__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 557119700714562011ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__618__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2659989650179411509ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__619__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 580148882029603400ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__620__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 16865482887586145993ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__620__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 2826574836232424759ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__620__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 4182726302835187055ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__620__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7607532889994079170ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__621__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 5683211234349578839ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__621__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 10518645771201203244ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__621__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 15880399156996215214ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__621__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4998225986422493795ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__622__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 16873906924528481679ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__622__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 18442262636420980392ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__622__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 2515161209850178877ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__622__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3581729023302510029ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_8_9__633__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 17193701599992942220ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_8_9__633__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10870883208435246574ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__637__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 7637288377605090750ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__637__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 3997419536815862650ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__638__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 493382255894493821ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__638__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 13238221945231138604ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__639__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 17899268563999130442ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__639__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 11370241246084768333ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2s_6_9__650__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 2460453288442452431ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2s_6_9__650__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 10494366249256383850ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_9_1_8__651__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1115720177619930526ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_9_1_8__651__vector = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 3993499215270895547ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_23_24__654__Vfuncout = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 11069508136545320890ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_23_24__654__vector = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 16516931227164636272ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_1_23__663__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 6188187961886711316ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_1_23__663__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5572160894245709971ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__672__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 1529817001070927527ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__673__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 18372915573132391093ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__673__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 7740604113278382154ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__673__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 10714082713975133281ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__673__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6441793657406331818ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__674__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 9514641681927593582ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__674__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 9163254208662507623ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__674__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 6909542585121201592ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__674__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4291601986116089911ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__675__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 5996963627969178388ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__675__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 13823283045899706827ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__675__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 11651098876178792715ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__675__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16022225774962189239ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__676__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 10928872626675171777ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__677__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 17295722747180477487ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__677__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 11965853155348768174ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__677__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 15723284473282330305ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__677__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8295256025545235569ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__678__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 8203149153381705612ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__678__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 13506649402033348080ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__678__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 4147547932829669547ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__678__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6088604152506432925ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__679__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 8480504803094072882ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__679__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 2128548044185786764ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__679__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 8063112453261185673ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__679__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11578960337069542507ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_8_9__690__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 3350200038654401706ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_8_9__690__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16176109688179675958ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__694__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 8792573112845853971ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__694__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 14964872646051205835ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__695__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 4289114901301769420ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__695__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 13970632885568865235ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__696__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 8352958583983270339ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__696__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 17485592241354237329ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2s_6_9__707__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 10669410085591267011ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2s_6_9__707__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7250766906817673350ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_9_1_8__708__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14151407089685211598ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_9_1_8__708__vector = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 5507609519935081170ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_23_24__711__Vfuncout = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 5876134572775740490ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_23_24__711__vector = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 17647633536346727084ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_1_23__720__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 16690738841387954486ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_1_23__720__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9964362113743565159ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__729__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 15429132239813961436ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__730__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 6960530490102892879ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__730__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 4770046143019078280ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__730__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 13960555708957847122ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__730__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17736219338617441978ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__731__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 3102085353851568993ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__731__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 6282851279089598621ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__731__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 6674805366841892440ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__731__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10959723960121717526ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__732__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 14001252317282579156ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__732__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 4097935308180539169ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__732__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 15432195415442267990ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__732__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10807803618120735500ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__733__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 7680761494084761488ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__734__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 9207784755918482482ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__734__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 12167096028521772238ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__734__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 1325382033729358431ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__734__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8913607479694454730ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__735__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 12783781614153987835ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__735__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 14749334122015301044ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__735__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 13281220467919945408ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__735__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14489533879710413818ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__736__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 8382785049280623501ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__736__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 13550334669615799266ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__736__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 5440736581880098230ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__736__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3570021755319120622ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_8_9__747__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 3356395786388307284ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_8_9__747__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7531992893278173363ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__751__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 7006701802653375140ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__751__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 5840388398404215994ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__752__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 9263544225587857752ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__752__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 7004953578912708152ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__753__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 13642010790337703880ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__753__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 10834430415526762982ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2s_6_9__764__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 1087123951742703485ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2s_6_9__764__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 3283035280017190314ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_9_1_8__765__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13572888968078111852ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_9_1_8__765__vector = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 5640405163065048050ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_23_24__768__Vfuncout = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 7335516677441102070ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_23_24__768__vector = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 3833931587729021731ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_1_23__777__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 10545945702243702976ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_1_23__777__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17125443023445995699ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__786__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 16922831589547737378ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__787__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 288354472817552400ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__787__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 3551554686035255685ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__787__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 11115038382037256083ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__787__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3566228013442866884ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__788__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 17951343468658106437ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__788__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 5596269195731500519ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__788__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 14638776664706905806ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__788__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5118972854902192778ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__789__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 6912127167358330700ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__789__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 12020441174605445676ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__789__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 3039255187357918667ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__789__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14858484880402443099ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__790__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 600405915382531450ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__791__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 13174917996301436028ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__791__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 14127894434360980046ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__791__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 1058877088517318337ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__791__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15605717790535263701ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__792__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 6994556631855423804ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__792__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 6777662228023021417ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__792__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 15849594578000536154ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__792__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12761000327272549531ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__793__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 13275391867341437357ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__793__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 2229025763287646787ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__793__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 2965002773533651980ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__793__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18402635126575387327ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_8_9__804__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 1838875445948697090ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_8_9__804__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2744241375241319396ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__808__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 12725421863378016478ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__808__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 2380821170120829419ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__809__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 15196011171418034233ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__809__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 1365828778537676466ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__810__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 5741713227404562573ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__810__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 11898693005591928227ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2s_6_9__821__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 9711772267430056037ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2s_6_9__821__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13866373076965497215ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_9_1_8__822__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1410355247250820725ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_9_1_8__822__vector = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 9296379748600474965ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_23_24__825__Vfuncout = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 1752128245820980710ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_23_24__825__vector = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 10808557110955377201ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_1_23__834__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 8854661629034036972ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_1_23__834__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16381752809757876245ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__843__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 5022729767793111961ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__844__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 11960206191809309482ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__844__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 13694171642453462866ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__844__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 9569514096394104227ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__844__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9379850684223493475ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__845__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 496288480214508878ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__845__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 4102982783292626101ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__845__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 1617443893322691524ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__845__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10805575898491090394ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__846__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 15699780395437169614ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__846__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 15905200866319092984ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__846__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 16851306781667827844ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__846__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8405879930958519309ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__847__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 17337162763084861809ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__848__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 5845496604466611618ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__848__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 15872568827666636260ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__848__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 4763559514814287602ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__848__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17135441001929265516ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__849__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 13137983249783662144ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__849__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 6563955062865022595ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__849__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 2125263985049195732ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__849__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15908553897806899524ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__850__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 12880167725017754170ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__850__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 4450061042759865915ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__850__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 3266402841727550239ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__850__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15660585213936234925ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_8_9__861__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 5163470155893971420ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_8_9__861__vector = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3418075436939471325ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__865__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 14221265694634054617ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__865__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 12938931297240115686ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__866__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 3243466925845857046ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__866__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 5536673639925424217ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__867__Vfuncout = VL_SCOPED_RAND_RESET_Q(50, __VscopeHash, 14665059349394640262ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_49_50__867__vector = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 6342625436672692991ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2s_6_9__878__Vfuncout = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 12731238540256165795ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2s_6_9__878__vector = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4363853132630523996ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_9_1_8__879__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15377792290229179170ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_9_1_8__879__vector = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 13629232068681739541ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_23_24__882__Vfuncout = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 9678443145234262131ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_23_24__882__vector = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 15446072054825121673ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_1_23__891__Vfuncout = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 17030281968277116113ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__conv_u2u_1_23__891__vector = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12657088165127640233ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_s__900__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 2085494825292917049ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__901__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 11978545317488493777ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__901__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 5985574828905029024ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__901__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 16767748263607178461ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshr_u__901__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14258605251289750492ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__902__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 4587503056642235369ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__902__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 13943980128537728651ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__902__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 10215973691606189710ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u__902__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2995702987450585363ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__903__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 12723375898038688685ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__903__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 12539905201981965164ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__903__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 6736442003016237298ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_rg__DOT__fshl_u_1__903__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10346468235211500103ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_s__904__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 16137575838758413730ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__905__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 11985799785471502171ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__905__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 11785149166560996695ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__905__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 13170716133088174118ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshr_u__905__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7130366529727048974ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__906__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 9611569364992592921ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__906__arg1 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 2868018817442569090ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__906__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 15129768548274539476ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u__906__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8457090437682230916ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__907__Vfuncout = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 2870657631678116090ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__907__arg1 = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 2918538584978625256ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__907__arg2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 11343859998411896693ull);
    vlSelf->__Vfunc_HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_rg__DOT__fshl_u_1__907__sbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10099288144081866485ull);
}
