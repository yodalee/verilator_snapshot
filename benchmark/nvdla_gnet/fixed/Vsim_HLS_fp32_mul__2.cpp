// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_HLS_fp32_mul___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_11__0(Vsim_HLS_fp32_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp32_mul___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_11__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__707__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__707__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__707__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__707__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__707__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__707__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__707__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__707__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__708__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__708__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__708__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__708__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__708__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__708__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__708__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__708__sel = 0;
    QData/*47:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__709__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__709__Vfuncout = 0;
    QData/*47:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__709__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__709__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__711__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__711__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__711__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__711__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__715__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__715__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__715__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__715__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__716__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__716__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__716__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__716__vector = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__717__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__717__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__717__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__717__input_0 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__717__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__717__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__717__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__717__sel = 0;
    QData/*45:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__718__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__718__Vfuncout = 0;
    QData/*45:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__718__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__718__input_0 = 0;
    QData/*45:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__718__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__718__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__718__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__718__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__719__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__719__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__719__input_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__719__input_2 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__719__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__719__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__719__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__719__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__729__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__729__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__729__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__729__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__729__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__729__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__729__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__729__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__730__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__730__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__730__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__730__input_0 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__730__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__730__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__730__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__730__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__731__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__731__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__731__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__731__vector = 0;
    QData/*47:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__732__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__732__Vfuncout = 0;
    QData/*47:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__732__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__732__input_0 = 0;
    QData/*47:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__732__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__732__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__732__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__732__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__733__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__733__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__733__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__733__input_0 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__733__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__733__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__733__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__733__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__734__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__734__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__734__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__734__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__734__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__734__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__734__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__734__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__735__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__735__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__735__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__735__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__735__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__735__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__735__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__735__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__736__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__736__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__736__input_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__736__input_2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__736__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__736__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__736__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__736__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__736__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__736__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__738__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__738__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__738__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__738__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__738__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__738__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__738__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__738__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__739__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__739__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__739__vector;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__739__vector = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__742__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__742__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__742__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__742__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__742__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__742__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__745__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__745__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__745__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__745__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__745__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__745__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__745__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__745__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__757__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__757__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__757__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__757__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__757__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__757__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__757__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__757__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__759__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__759__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__759__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__759__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__759__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__759__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__759__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__759__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__760__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__760__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__760__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__760__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__760__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__760__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__760__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__760__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__761__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__761__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__761__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__761__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__761__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__761__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__761__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__761__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__763__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__763__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__763__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__763__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__763__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__763__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__763__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__763__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__764__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__764__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__764__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__764__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__764__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__764__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__764__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__764__sel = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__766__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__766__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__766__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__766__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__766__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__766__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__766__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__766__sel = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__767__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__767__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__767__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__767__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__767__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__767__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__767__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__767__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__core_wten 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_6_nl))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_slc_FpMul_8U_23U_p_mant_p1_47_itm_2 
                = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_mul_tmp 
                                 >> 0x2fU)));
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6))) 
             & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp)))) {
            __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__731__vector 
                = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_else_2_acc_1_nl));
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__Vstatic__tmp 
                = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__731__vector), 1U));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__731__Vfuncout 
                = (0x000000ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__Vstatic__tmp));
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_acc_1_sdt_8_1_itm_2 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_8_1__731__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_8_nl))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs_st_2 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_acc_itm_8_1;
        }
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt;
        if (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_59))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_59;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6))) 
             & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_20_itm)))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_4 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_3;
        }
        if (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_4 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3;
        }
        if (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_b_rsci_iswt0_cse 
                = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_en_1)) 
                            & (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var)
                                 ? 2U : 1U) >> 1U))));
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_iswt0 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_12;
        }
        if (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_and_cse) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_31 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_mux_10_itm_4;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__729__sel 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__729__input_1 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpBitsToFloat_8U_23U_1_slc_FpBitsToFloat_8U_23U_ubits_1_22_0_itm_2;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__729__input_0 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_FpMul_8U_23U_FpMul_8U_23U_nor_1_nl;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__729__sel)
                    ? __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__729__input_1
                    : __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__729__input_0);
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__729__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_22_0 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__729__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_3_nl))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_sva_5 
                = (0x000000ffU & ((IData)(0x81U) + 
                                  ((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ub_sva_1_30_0_1 
                                    >> 0x00000017U) 
                                   + (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ua_sva_1_30_0_1 
                                      >> 0x00000017U))));
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
                  & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3))) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_45_rgt))) 
             & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_20_itm)))) {
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__735__sel 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_45_rgt;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__735__input_1 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__735__input_0 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_acc_itm_8_1;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__735__sel)
                    ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__735__input_1)
                    : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__735__input_0));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__735__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs_2 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__735__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
                   & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3))) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_acc_itm_8_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_41_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_4))) {
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__732__sel 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_41_rgt;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__732__input_1 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__732__input_0 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_mul_tmp;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__732__sel)
                    ? __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__732__input_1
                    : __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__732__input_0);
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__732__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_48_2_2__732__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_12) 
                | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_13)))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_13)));
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
             & ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2)) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_4)) 
                | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_30_23_mx0c1)))) {
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__730__sel 
                = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_30_23_mx0c1));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__730__input_1 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_FpMul_8U_23U_and_2_nl;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__730__input_0 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpBitsToFloat_8U_23U_1_slc_FpBitsToFloat_8U_23U_ubits_1_30_23_itm_2;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__730__sel)
                    ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__730__input_1)
                    : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__730__input_0));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__730__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_30_23 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__730__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_slc_FpMul_8U_23U_p_mant_p1_47_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_acc_1_sdt_8_1_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs_st_2 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_4 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_b_rsci_iswt0_cse = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_31 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_sva_5 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_22_0 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs_2 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 = 0ULL;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_iswt0 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_30_23 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_else_2_if_acc_nl 
        = (0x000003ffU & ((IData)(0x0141U) + VL_EXTEND_II(10,9, 
                                                          ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__710__vector 
                            = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_acc_1_sdt_8_1_itm_2;
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__710__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__710__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__710__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_25_nl 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs_st_2)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_4)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__716__vector 
        = (0x000000ffU & ((IData)(1U) + (0x00000080U 
                                         | (0x0000007fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_sva_5) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__716__vector), 7U));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__716__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_if_if_acc_1_itm_7_1 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_8_1_7__716__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__718__sel 
        = (1U & (IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                         >> 0x2fU)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__718__input_1 
        = (0x00003fffffffffffULL & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                                    >> 1U));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__718__input_0 
        = (0x00003fffffffffffULL & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2);
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__718__sel)
            ? __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__718__input_1
            : __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__718__input_0);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__718__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_46_1_lpi_1_dfm_3_mx0 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_46_2_2__718__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_b_rsci_iswt0_cse));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_iswt0));
    vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_4 
        = ((((~ (IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                         >> 0x0000002fU))) | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_if_if_acc_1_itm_7_1)) 
            & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs_2)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_4));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__711__vector 
        = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_else_2_if_acc_nl));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp 
        = (0x000001ffU & VL_SHIFTR_III(9,9,32, (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__711__vector), 8U));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__711__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__Vstatic__tmp));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_23_nl))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_3 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_45_cse;
        }
        if (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_mux_10_itm_4 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_mux_10_itm_3;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ub_FpBitsToFloat_8U_23U_1_or_1_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_17_nl))) {
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__734__sel 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_26;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__734__input_1 
                = (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ua_sva_1_30_0_1);
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__734__input_0 
                = (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ub_sva_1_30_0_1);
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__734__sel)
                    ? __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__734__input_1
                    : __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__734__input_0);
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__734__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpBitsToFloat_8U_23U_1_slc_FpBitsToFloat_8U_23U_ubits_1_22_0_itm_2 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__734__Vfuncout;
        }
        if (((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
               & (~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var)
                      ? 2U : 1U))) & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_acc_itm_8_1;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_mux_10_itm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpBitsToFloat_8U_23U_1_slc_FpBitsToFloat_8U_23U_ubits_1_22_0_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_slc_FpMul_8U_23U_else_2_if_acc_8_svs = 0U;
    }
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_acc_itm_8_1 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_9_1_8__711__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_carry_sva 
        = (1U & ((IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_46_1_lpi_1_dfm_3_mx0 
                          >> 0x00000016U)) & (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2) 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                                                          >> 0x0000002fU))) 
                                              | (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x0000000000bfffffULL 
                                                          & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_46_1_lpi_1_dfm_3_mx0))))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__717__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_if_if_acc_1_itm_7_1) 
           & (IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                      >> 0x0000002fU)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__717__input_1 
        = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_sva_5)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__717__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_sva_5;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_45_cse;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
             & (~ (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6) 
                    | (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1))) 
                   | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_29_cse))))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_mul_tmp;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_16) 
                | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2_mx0c1)))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2_mx0c1)));
        }
        if (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_4 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ub_FpBitsToFloat_8U_23U_1_or_1_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_13_nl))) {
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__733__sel 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_26;
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__733__input_1 
                = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ua_sva_1_30_0_1 
                                  >> 0x17U));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__733__input_0 
                = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ub_sva_1_30_0_1 
                                  >> 0x17U));
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__733__sel)
                    ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__733__input_1)
                    : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__733__input_0));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__733__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpBitsToFloat_8U_23U_1_slc_FpBitsToFloat_8U_23U_ubits_1_30_23_itm_2 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__733__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva = 0ULL;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpBitsToFloat_8U_23U_1_slc_FpBitsToFloat_8U_23U_ubits_1_30_23_itm_2 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__717__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__717__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__717__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__717__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__717__Vfuncout;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_54_rgt) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_64_rgt)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_65_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_1))) {
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__736__sel 
                = (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_54_rgt) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_64_rgt) 
                               << 1U) | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_65_rgt)));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__736__input_0 
                = ((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                    ^ vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt) 
                   >> 0x0000001fU);
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__736__input_1 
                = (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                   >> 0x1fU);
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__736__input_2 
                = (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                   >> 0x1fU);
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__736__input_0) 
                   & (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__736__sel));
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__736__input_1) 
                      & ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__736__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__736__input_2) 
                      & ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__736__sel) 
                         >> 2U)));
            __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__736__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_mux_10_itm_3 
                = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_3_2__736__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var = 1U;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_mux_10_itm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var = 0U;
    }
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMantRNE_48U_24U_else_acc_nl 
        = (0x00ffffffU & ((0x007fffffU & (IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_46_1_lpi_1_dfm_3_mx0 
                                                  >> 0x17U))) 
                          + VL_EXTEND_II(24,23, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__737__vector 
                            = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_carry_sva;
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__737__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__737__vector;
                    }(), vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_1_23__737__Vfuncout))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0) 
                | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1_mx0c1)))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1_mx0c1)));
        }
        if (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3 
                = (1U & (~ (IData)(((0x7f800000U != 
                                     (0x7f800000U & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                                    | (0U == (0x007fffffU 
                                              & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt))))));
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3 
                = (1U & (~ (IData)(((0x7f800000U != 
                                     (0x7f800000U & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                                    | (0U == (0x007fffffU 
                                              & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt))))));
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_28_nl))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ub_sva_1_30_0_1 
                = (0x7fffffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt);
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6))) 
             & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_31_nl)))) {
            vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ua_sva_1_30_0_1 
                = (0x7fffffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt);
        }
    } else {
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ub_sva_1_30_0_1 = 0U;
        vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ua_sva_1_30_0_1 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_and_svs 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_carry_sva) 
           & (0x00003fffff800000ULL == (0x00003fffff800000ULL 
                                        & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_46_1_lpi_1_dfm_3_mx0)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_29_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_acc_itm_8_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_4));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__738__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_and_svs)) 
                 | (0xffU != (0x000000ffU & ((IData)(1U) 
                                             + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0))))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__738__input_1 
        = (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMantRNE_48U_24U_else_acc_nl);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__739__vector 
        = (0xffU == (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__739__Vfuncout 
        = (0x007fffffU & (- (IData)((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__739__vector))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__738__input_0 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__signext_23_1__739__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__738__sel)
            ? __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__738__input_1
            : __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__738__input_0);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__738__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_34_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__738__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__719__sel 
        = ((4U & ((~ ((~ (IData)(vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_4)) 
                      | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_and_svs))) 
                  << 2U)) | ((2U & (((~ (IData)(vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_4)) 
                                     | ((0xffU == (0x000000ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0)))) 
                                        & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_and_svs))) 
                                    << 1U)) | ((0xffU 
                                                != 
                                                (0x000000ffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0)))) 
                                               & ((IData)(vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_4) 
                                                  & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMantRNE_48U_24U_else_and_svs)))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__719__input_0 
        = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__719__input_2 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_expo_lpi_1_dfm_1_mx0;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__719__input_0) 
           & (- (IData)((1U & (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__719__sel)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | (0xfeU & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__719__sel) 
                                        >> 1U))))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__719__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__719__sel) 
                                  >> 2U))))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__719__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_o_expo_lpi_1_dfm 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_v_8_3_2__719__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__vd 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_11.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_11.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__745__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_else_slc_FpMul_8U_23U_p_mant_p1_47_itm_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__745__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_25_nl))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__745__input_0 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse) 
                    | ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2)) 
                       | ((IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_sva_2 
                                   >> 0x0000002fU)) 
                          | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_25_nl))))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__745__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__745__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__745__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__745__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_2_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__745__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__767__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__767__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__767__input_0 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_11.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__d;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__767__sel)
            ? __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__767__input_1
            : __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__767__input_0);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__767__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__767__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__766__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__766__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__766__input_0 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_11.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__d;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__766__sel)
            ? __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__766__input_1
            : __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__766__input_0);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__766__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__766__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_nor_nl 
        = (0x007fffffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__740__sel 
                        = (1U & (~ (IData)(vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_4)));
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__740__input_0 
                        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_34_nl;
                    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__740__sel)
                            ? 0x007fffffU : vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__740__input_0);
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__740__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
                }(), vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__740__Vfuncout)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_2_lpi_1_dfm 
        = ((0U == (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_o_expo_lpi_1_dfm)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_4));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd));
    vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_6 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nor_4_cse 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_55 
        = (IData)(((0x7f800000U != (0x7f800000U & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                   | (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_oelse_1_acc_1_nl 
        = (0x000003ffU & ((IData)(0x0181U) + VL_EXTEND_II(10,9, 
                                                          ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__712__vector 
                            = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                              >> 0x17U));
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__712__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__712__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_9__712__Vfuncout)))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__709__vector 
        = (0x0000ffffffffffffULL & ((QData)((IData)(
                                                    (0x00800000U 
                                                     | (0x007fffffU 
                                                        & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ua_sva_1_30_0_1)))) 
                                    * (QData)((IData)(
                                                      (0x00800000U 
                                                       | (0x007fffffU 
                                                          & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ub_sva_1_30_0_1))))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__709__Vfuncout 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__709__vector;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_mul_tmp 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_48_48__709__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_else_2_acc_1_nl 
        = (0x000003ffU & (VL_EXTEND_II(10,9, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__743__vector 
                            = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x17U));
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__743__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__743__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__743__Vfuncout))) 
                          + VL_EXTEND_II(10,9, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__744__vector 
                            = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                              >> 0x17U));
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__744__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__744__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2u_8_9__744__Vfuncout)))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__742__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_2_lpi_1_dfm)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__742__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_o_expo_lpi_1_dfm;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__742__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__742__input_1)
            : 0U);
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__742__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_FpMul_8U_23U_and_2_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_8_2_2__742__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_FpMul_8U_23U_FpMul_8U_23U_nor_1_nl 
        = (0x007fffffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__741__sel 
                        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_2_lpi_1_dfm;
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__741__input_0 
                        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_nor_nl;
                    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__741__sel)
                            ? 0x007fffffU : vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__741__input_0);
                    vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__741__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
                }(), vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_v_23_2_2__741__Vfuncout)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__760__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__760__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__760__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__760__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__760__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__760__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__760__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_26_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__760__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__707__sel 
        = (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__707__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_55;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__707__input_0 
        = ((0xffU != (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                     >> 0x00000017U))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_55));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__707__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__707__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__707__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__707__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_33_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__707__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_oelse_1_acc_nl 
        = (0x000007ffU & (VL_EXTEND_II(11,10, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__713__vector 
                            = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_oelse_1_acc_1_nl));
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__713__Vfuncout 
                            = ((0x00000200U & ((IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__713__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__713__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_s2s_9_10__713__Vfuncout))) 
                          + VL_EXTEND_II(11,10, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__714__vector 
                            = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x17U));
                        vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__714__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__714__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp32_mul_core_inst__DOT__conv_u2s_8_10__714__Vfuncout)))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__761__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__761__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__761__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_26_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__761__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__761__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__761__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__761__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_27_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__761__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__715__vector 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nl_FpMul_8U_23U_oelse_1_acc_nl));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__Vstatic__tmp 
        = (0x000003ffU & VL_SHIFTR_III(10,10,32, (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__715__vector), 9U));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__715__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_oelse_1_acc_itm_9_1 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__readslicef_10_1_9__715__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__708__sel 
        = (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__708__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__708__input_0 
        = ((0xffU != (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                     >> 0x00000017U))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__708__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__708__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__708__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__708__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_24_cse 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__708__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_45_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_oelse_1_acc_itm_9_1) 
           | ((0U == (0x7fffffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
              | (0U == (0x7fffffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__757__sel 
        = (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__757__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_24_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__757__input_0 
        = ((0xffU != (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                     >> 0x00000017U))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_24_cse));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__757__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__757__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__757__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__757__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_22_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__757__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__759__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_45_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__759__input_1 
        = (1U & (~ ((~ (IData)(((0x7f800000U == (0x7f800000U 
                                                 & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                                & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_24_cse)))) 
                    | (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__759__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__759__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__759__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__759__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__759__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_25_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__759__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_51 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_45_cse)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__763__sel 
        = (0xffU == (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                    >> 0x00000017U)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__763__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__763__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_51;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__763__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__763__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__763__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__763__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_29_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__763__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__764__sel 
        = (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__764__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_51;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__764__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_29_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__764__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__764__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__764__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__764__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_30_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__764__Vfuncout;
}

void Vsim_HLS_fp32_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_11__0(Vsim_HLS_fp32_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp32_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_11__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_7;
    HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_7 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__704__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__704__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__704__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__704__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__704__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__704__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__704__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__704__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__705__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__705__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__705__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__705__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__706__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__706__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__706__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__706__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__720__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__720__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__720__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__720__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__720__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__720__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__720__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__720__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__721__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__721__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__721__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__721__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__721__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__721__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__721__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__721__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__722__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__722__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__722__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__722__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__722__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__722__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__722__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__722__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__723__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__723__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__723__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__723__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__723__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__723__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__723__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__723__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__724__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__724__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__724__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__724__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__724__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__724__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__724__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__724__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__725__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__725__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__725__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__725__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__725__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__725__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__725__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__725__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__726__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__726__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__726__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__726__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__726__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__726__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__726__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__726__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__727__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__727__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__727__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__727__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__727__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__727__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__727__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__727__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__728__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__728__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__728__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__728__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__728__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__728__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__728__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__728__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__746__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__746__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__746__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__746__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__746__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__746__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__746__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__746__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__747__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__747__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__747__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__747__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__747__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__747__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__747__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__747__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__748__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__748__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__748__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__748__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__748__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__748__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__748__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__748__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__749__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__749__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__749__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__749__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__749__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__749__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__749__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__749__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__750__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__750__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__750__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__750__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__750__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__750__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__750__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__750__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__751__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__751__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__751__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__751__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__751__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__751__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__751__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__751__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__752__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__752__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__752__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__752__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__752__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__752__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__752__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__752__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__753__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__753__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__753__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__753__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__753__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__753__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__753__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__753__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__754__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__754__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__754__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__754__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__754__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__754__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__754__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__754__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__755__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__755__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__755__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__755__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__755__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__755__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__755__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__755__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__756__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__756__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__756__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__756__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__756__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__756__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__756__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__756__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__758__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__758__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__758__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__758__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__758__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__758__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__758__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__758__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__762__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__762__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__762__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__762__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__762__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__762__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__762__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__762__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__765__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__765__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__765__input_0;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__765__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__765__input_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__765__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__765__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__765__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd 
        = ((3U == (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp_sum_block_0.reg2dp_normalz_len))
            ? ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp_sq_out_rdy) 
               & (0x000007ffU == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_32)))
            : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp_sq_out_rdy));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__723__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__723__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__723__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__723__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__723__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__723__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__723__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_9 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__723__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_13 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2)) 
           & (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_41_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_29_cse));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_45_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_54_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
           & (IData)(((0x7f800000U == (0x7f800000U 
                                       & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                      & (0U != (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_65_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_33_nl) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_64_rgt 
        = ((IData)(((0x7f800000U != (0x7f800000U & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                    | (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_a_rsci_d_mxwt)))) 
           & (IData)((((0x7f800000U == (0x7f800000U 
                                        & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                       & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse)) 
                      & (0U != (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_b_rsci_d_mxwt)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_16 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_26 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_12 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse) 
           & ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt) 
              & ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
                 & (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var)
                      ? 2U : 1U) >> 1U))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__720__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_51;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__720__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__720__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__720__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__720__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__720__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__720__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__720__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__762__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__762__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_25_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__762__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_27_nl)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__762__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__762__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__762__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__762__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_28_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__762__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__758__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__758__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_22_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__758__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)) 
                    | (IData)(vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_6))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__758__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__758__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__758__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__758__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_23_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__758__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__765__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__765__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_30_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__765__input_0 
        = (1U & (~ (((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3)) 
                     | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3)) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__765__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__765__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__765__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__765__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_31_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__765__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__746__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__746__input_1 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_else_2_if_acc_itm_8_1) 
                        & ((~ (IData)(vlSelfRef.HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_6)) 
                           | (IData)((vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_p_mant_p1_mul_tmp 
                                      >> 0x0000002fU))))) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_65_cse))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__746__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_2_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__746__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__746__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__746__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__746__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_3_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__746__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__721__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__721__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__721__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__721__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__721__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__721__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__721__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_1 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__721__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_en_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__not_tmp_9 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__724__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nor_4_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__724__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__724__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_9;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__724__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__724__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__724__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__724__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_10 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__724__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__725__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__725__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__725__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_9;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__725__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__725__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__725__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__725__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_14 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__725__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_32 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_cse)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_16));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_ub_FpBitsToFloat_8U_23U_1_or_1_cse 
        = (((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_3)) 
            & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_26));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_rsci_d_30_23_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_4)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_12));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_12));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
                 & (((~ (IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0)) 
                     | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt)) 
                    & ((~ (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0)) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_inst__DOT__HLS_fp32_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)))));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_59 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_en_1) 
                 | ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__704__sel 
        = (1U & (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__705__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_en_1) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__705__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__705__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__704__input_1 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__705__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__706__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__state_var)
            ? 0U : 1U);
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__706__sel;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__706__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__704__input_0 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX1HOT_s_1_1_2__706__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__704__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__704__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__704__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__704__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__iMantWidth_oMantWidth_prb 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__704__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__751__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__751__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__nor_4_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_32));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__751__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_10;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__751__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__751__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__751__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__751__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_11_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__751__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_36 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_32));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__722__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__722__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_10_cse));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__722__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__722__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__722__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__722__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__722__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_4 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__722__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt 
        = ((IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__chn_o_and_cse 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2)) 
               | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen));
    HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_7 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__and_dcpl_6)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_core_fsm_inst__DOT__core_wen));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__752__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__752__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_11_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__752__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__752__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__752__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__752__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__752__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_12_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__752__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__726__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__726__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_14;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__726__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_36;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__726__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__726__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__726__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__726__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_18_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__726__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__754__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__754__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_36;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__754__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_14;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__754__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__754__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__754__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__754__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_15_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__754__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__747__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_29_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__747__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__747__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_4;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__747__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__747__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__747__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__747__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_5_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__747__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__749__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__749__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__749__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_4;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__749__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__749__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__749__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__749__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_7_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__749__Vfuncout;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_aelse_and_cse 
        = ((IData)(HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_7) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_1));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__IsNaN_8U_23U_1_aelse_and_cse 
        = ((IData)(HLS_fp32_mul_core_inst__DOT____VdfgRegularize_hc803f4b1_0_7) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_4));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__753__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__753__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_12_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__753__input_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_10));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__753__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__753__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__753__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__753__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_13_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__753__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__727__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__727__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_18_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__727__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__727__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__727__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__727__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__727__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_19_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__727__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__755__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__755__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_15_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__755__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_24)));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__755__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__755__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__755__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__755__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_16_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__755__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__748__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_25_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__748__input_1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__not_tmp_9) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_29_cse))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__748__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_5_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__748__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__748__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__748__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__748__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_6_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__748__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__750__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_4;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__750__input_1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__not_tmp_9) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_lor_1_lpi_1_dfm_st_3))));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__750__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_7_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__750__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__750__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__750__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__750__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_8_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__750__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__728__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__728__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__or_tmp_36)));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__728__input_0 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_19_nl;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__728__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__728__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__728__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__728__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_20_itm 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__728__Vfuncout;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__756__sel 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__FpMul_8U_23U_or_2_cse;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__756__input_1 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_16_nl;
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__756__input_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__main_stage_v_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_tmp_14));
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__756__sel)
            ? (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__756__input_1)
            : (IData)(__Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__756__input_0));
    __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__756__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp32_mul_core_inst__DOT__mux_17_nl 
        = __Vfunc_HLS_fp32_mul_core_inst__DOT__MUX_s_1_2_2__756__Vfuncout;
}
