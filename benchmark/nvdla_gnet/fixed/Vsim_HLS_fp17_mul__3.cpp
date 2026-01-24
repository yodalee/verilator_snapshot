// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_HLS_fp17_mul___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulw_2__0(Vsim_HLS_fp17_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp17_mul___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulw_2__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*21:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__988__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__988__Vfuncout = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__988__vector;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__988__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__993__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__993__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__993__vector;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__993__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__994__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__994__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__994__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__994__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__994__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__994__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__994__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__994__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__995__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__995__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__995__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__995__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__995__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__995__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__995__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__995__sel = 0;
    IData/*19:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__996__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__996__Vfuncout = 0;
    IData/*19:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__996__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__996__input_0 = 0;
    IData/*19:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__996__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__996__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__996__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__996__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__997__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__997__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__997__input_2;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__997__input_2 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__997__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__997__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__997__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__997__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1004__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1004__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1004__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1004__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1004__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1004__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1004__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1004__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1005__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1005__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1005__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1005__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1005__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1005__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1005__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1005__sel = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1006__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1006__Vfuncout = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1006__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1006__input_0 = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1006__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1006__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1006__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1006__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1007__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1007__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1007__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1007__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1007__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1007__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1007__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1007__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1008__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1008__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1008__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1008__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1008__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1008__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1008__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1008__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1009__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1009__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1009__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1009__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1009__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1009__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1009__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1009__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1010__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1010__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1010__input_2;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1010__input_2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1010__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1010__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1010__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1010__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1010__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1010__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1012__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1012__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1012__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1012__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1012__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1012__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1012__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1012__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__1013__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__1013__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__1013__vector;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__1013__vector = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1016__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1016__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1016__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1016__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1016__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1016__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1020__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1020__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1020__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1020__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1020__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1020__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1020__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1020__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1031__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1031__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1031__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1031__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1031__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1031__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1031__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1031__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1032__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1032__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1032__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1032__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1032__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1032__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1032__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1032__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1036__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1036__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1036__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1036__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1036__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1036__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1036__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1036__sel = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1038__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1038__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1038__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1038__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1038__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1038__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1038__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1038__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen))))));
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
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt)))));
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
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_iswt0 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_sva_5 = 0U;
    }
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__993__vector 
        = (0x0000003fU & ((IData)(1U) + (0x00000020U 
                                         | (0x0000001fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_sva_5) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp 
        = (0x0000003fU & VL_SHIFTR_III(6,6,32, (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__993__vector), 5U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__993__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_if_if_acc_1_itm_5_1 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__993__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_iswt0));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_16 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_mux_10_itm_4;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1004__sel 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_or_2_cse;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1004__input_1 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_9_0_itm_2;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1004__input_0 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_FpMul_6U_10U_FpMul_6U_10U_nor_1_nl;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1004__sel)
                    ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1004__input_1)
                    : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1004__input_0));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1004__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_9_0 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1004__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_62))) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_62;
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
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_16 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_9_0 = 0U;
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
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1006__sel 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_40_rgt;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1006__input_1 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1006__input_0 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_mul_tmp;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1006__sel)
                    ? __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1006__input_1
                    : __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1006__input_0);
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1006__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1006__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 = 0U;
    }
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__996__sel 
        = (1U & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                 >> 0x15U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__996__input_1 
        = (0x000fffffU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                          >> 1U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__996__input_0 
        = (0x000fffffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2);
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__996__sel)
            ? __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__996__input_1
            : __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__996__input_0);
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__996__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_20_1_lpi_1_dfm_3_mx0 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__996__Vfuncout;
    vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_6 
        = ((((~ (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                 >> 0x00000015U)) | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_if_if_acc_1_itm_5_1)) 
            & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_4)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_4));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__994__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_if_if_acc_1_itm_5_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__994__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_slc_FpMul_6U_10U_p_mant_p1_21_itm_2;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__994__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_slc_FpMul_6U_10U_p_mant_p1_21_itm_2)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
             & ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2)) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_4)) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10_mx0c1)))) {
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1005__sel 
                = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10_mx0c1));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1005__input_1 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_FpMul_6U_10U_and_2_nl;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1005__input_0 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_15_10_itm_2;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1005__sel)
                    ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1005__input_1)
                    : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1005__input_0));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1005__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1005__Vfuncout;
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
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
              & (((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_if_2_FpMul_6U_10U_if_2_or_tmp) 
                      | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_oelse_1_acc_itm_7_1))) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_45_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_23))) {
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1009__sel 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_45_rgt;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1009__input_1 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1009__input_0 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1009__sel)
                    ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1009__input_1)
                    : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1009__input_0));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1009__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_3 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1009__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_mux_10_itm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_3 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__994__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__994__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__994__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__994__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_36_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__994__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
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
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__995__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_36_nl) 
           & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
              >> 0x00000015U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__995__input_1 
        = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_sva_5)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__995__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_sva_5;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_and_1_cse) {
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1008__sel 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_28;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1008__input_1 
                = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ua_sva_1_15_0_1));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1008__input_0 
                = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ub_sva_1_15_0_1));
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1008__sel)
                    ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1008__input_1)
                    : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1008__input_0));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1008__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_9_0_itm_2 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1008__Vfuncout;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1007__sel 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_28;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1007__input_1 
                = (0x0000003fU & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ua_sva_1_15_0_1) 
                                  >> 0x0aU));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1007__input_0 
                = (0x0000003fU & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ub_sva_1_15_0_1) 
                                  >> 0x0aU));
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1007__sel)
                    ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1007__input_1)
                    : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1007__input_0));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1007__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_15_10_itm_2 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1007__Vfuncout;
        }
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
    } else {
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_9_0_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_15_10_itm_2 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__995__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__995__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__995__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__995__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__995__Vfuncout;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_52_rgt) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_60_rgt)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_61_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_3))) {
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1010__sel 
                = (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_52_rgt) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_60_rgt) 
                               << 1U) | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_61_rgt)));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1010__input_0 
                = (1U & ((vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                          ^ vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt) 
                         >> 0x00000010U));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1010__input_1 
                = (1U & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                         >> 0x10U));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1010__input_2 
                = (1U & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                         >> 0x10U));
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1010__input_0) 
                   & (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1010__sel));
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1010__input_1) 
                      & ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1010__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1010__input_2) 
                      & ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1010__sel) 
                         >> 2U)));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1010__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_mux_10_itm_3 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1010__Vfuncout;
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
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__1011__vector 
                            = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMantRNE_22U_11U_else_carry_sva;
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__1011__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__1011__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__1011__Vfuncout)))));
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
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1012__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMantRNE_22U_11U_else_and_svs)) 
                 | (0x3fU != (0x0000003fU & ((IData)(1U) 
                                             + (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0))))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1012__input_1 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMantRNE_22U_11U_else_acc_nl));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__1013__vector 
        = (0x3fU == (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__1013__Vfuncout 
        = (0x000003ffU & (- (IData)((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__1013__vector))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1012__input_0 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__1013__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1012__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1012__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1012__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1012__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_37_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1012__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__997__sel 
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
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__997__input_0 
        = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__997__input_2 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__997__input_0) 
           & (- (IData)((1U & (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__997__sel)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result) 
           | (0x3eU & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__997__sel) 
                                        >> 1U))))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__997__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__997__sel) 
                                  >> 2U))))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__997__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_o_expo_lpi_1_dfm 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__997__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_42_cse 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_4)) 
                    | (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_1))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1038__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1038__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1038__input_0 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_add_2.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
            << 0x00000010U) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_add_2.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10) 
                                << 0x0000000aU) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_add_2.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1038__sel)
            ? __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1038__input_1
            : __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1038__input_0);
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1038__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1038__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_nor_nl 
        = (0x000003ffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1014__sel 
                        = (1U & (~ (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_6)));
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1014__input_0 
                        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_37_nl;
                    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1014__sel)
                            ? 0x03ffU : (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1014__input_0));
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1014__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1014__Vfuncout))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_2_lpi_1_dfm 
        = ((0U == (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_o_expo_lpi_1_dfm)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_4));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_65_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_3)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_7 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_3) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1020__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_slc_FpMul_6U_10U_p_mant_p1_21_itm_2;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1020__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_42_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1020__input_0 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_or_2_cse) 
                    | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2)) 
                       | ((vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                           >> 0x00000015U) | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_4)) 
                                              | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_4)))))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1020__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1020__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1020__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1020__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_4_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1020__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_49 
        = (1U & ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_3) 
                     & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1))) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__988__vector 
        = (0x003fffffU & ((0x00000400U | (0x000003ffU 
                                          & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ua_sva_1_15_0_1))) 
                          * (0x00000400U | (0x000003ffU 
                                            & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ub_sva_1_15_0_1)))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__988__Vfuncout 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__988__vector;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_mul_tmp 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__988__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1016__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_2_lpi_1_dfm)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1016__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_o_expo_lpi_1_dfm;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1016__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1016__input_1)
            : 0U);
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1016__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_FpMul_6U_10U_and_2_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1016__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_FpMul_6U_10U_FpMul_6U_10U_nor_1_nl 
        = (0x000003ffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1015__sel 
                        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_2_lpi_1_dfm;
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1015__input_0 
                        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_nor_nl;
                    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1015__sel)
                            ? 0x03ffU : (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1015__input_0));
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1015__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1015__Vfuncout))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_32 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_7)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_11 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_7) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1036__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1036__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1036__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_49)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1036__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1036__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1036__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1036__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_32_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1036__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1031__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_3;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1031__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1031__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_49;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1031__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1031__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1031__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1031__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_27_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1031__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1032__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1032__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_49;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1032__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_27_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1032__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1032__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1032__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1032__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_28_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1032__Vfuncout;
}

void Vsim_HLS_fp17_mul___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulw_2__1(Vsim_HLS_fp17_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp17_mul___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulw_2__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_9;
    HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_9 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__975__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__975__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__975__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__975__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__975__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__975__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__975__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__975__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__976__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__976__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__976__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__976__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__977__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__977__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__977__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__977__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__978__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__978__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__978__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__978__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__978__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__978__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__978__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__978__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__979__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__979__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__979__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__979__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__979__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__979__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__979__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__979__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__980__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__980__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__980__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__980__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__980__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__980__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__980__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__980__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__981__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__981__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__981__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__981__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__981__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__981__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__981__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__981__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__998__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__998__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__998__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__998__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__998__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__998__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__998__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__998__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__999__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__999__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__999__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__999__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__999__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__999__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__999__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__999__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1000__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1000__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1000__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1000__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1000__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1000__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1000__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1000__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1001__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1001__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1001__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1001__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1001__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1001__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1001__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1001__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1021__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1021__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1021__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1021__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1021__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1021__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1021__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1021__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1022__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1022__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1022__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1022__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1022__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1022__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1022__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1022__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1023__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1023__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1023__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1023__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1023__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1023__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1023__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1023__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1024__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1024__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1024__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1024__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1024__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1024__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1024__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1024__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1025__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1025__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1025__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1025__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1025__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1025__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1025__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1025__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__vd 
        = ((0x0000000fU == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_add_pad_out_vld)) 
           & ((0x0000000fU == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_mulw_in_a_rdy)) 
              & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulw_3.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld) 
                 & (3U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_146)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd 
        = ((0x0000000fU == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_add_pad_out_vld)) 
           & ((0x0000000fU == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_mulw_in_b_rdy)) 
              & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulw_3.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
                 & (3U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_148)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_mulv_rdy) 
           & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulw_3.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld) 
              & (3U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_152))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_7 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__980__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__980__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_32;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__980__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_32)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__980__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__980__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__980__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__980__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_16_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__980__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__978__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__978__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_11;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__978__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_11)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__978__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__978__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__978__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__978__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_12_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__978__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__999__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__999__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__999__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__999__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__999__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__999__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__999__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_6 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__999__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_52 
        = (1U & ((~ (IData)(((0x0000fc00U == (0x0000fc00U 
                                              & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1)))) 
                 | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1001__sel 
        = (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1001__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1001__input_0 
        = ((0x3fU != (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                     >> 0x0000000aU))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1001__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1001__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1001__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1001__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_21 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1001__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_15 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2)) 
           & (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_40_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_65_cse));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_52_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse) 
           & (IData)(((0x0000fc00U == (0x0000fc00U 
                                       & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                      & (0U != (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1)) 
           & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)));
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
    vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1) 
           & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__998__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__998__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__998__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__998__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__998__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__998__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__998__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_3 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__998__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1021__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1021__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)) 
                    | ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_3) 
                           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_7)) 
                              | (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_mul_tmp 
                                 >> 0x00000015U)))) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3)))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1021__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_4_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1021__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1021__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1021__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1021__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_5_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1021__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__981__sel 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_or_2_cse))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__981__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_16_nl;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__981__input_0 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_3) 
                    | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__981__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__981__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__981__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__981__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_17_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__981__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__979__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_or_2_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__979__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_11)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__979__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_12_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__979__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__979__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__979__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__979__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_13_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__979__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_en_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse));
    vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_8 
        = ((IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_1) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_16 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_4)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_13));
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
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__975__sel 
        = (1U & (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__976__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_en_1) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__976__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__976__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__975__input_1 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__976__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__977__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
            ? 0U : 1U);
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__977__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__977__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__975__input_0 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__977__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__975__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__975__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__975__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__975__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__iMantWidth_oMantWidth_prb 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__975__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1000__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1000__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_16;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1000__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_6;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1000__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1000__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1000__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1000__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_7 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1000__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1024__sel 
        = (1U & (~ (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1024__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_16;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1024__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_6;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1024__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1024__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1024__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1024__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_10_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1024__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1022__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_42_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1022__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_16;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1022__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_6;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1022__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1022__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1022__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1022__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_8_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1022__Vfuncout;
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
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1025__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1025__input_1 
        = (1U & (~ (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_8)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1025__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_10_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1025__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1025__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1025__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1025__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_11_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1025__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1023__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_65_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1023__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_4)) 
                    | (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_8))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1023__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_8_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1023__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1023__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1023__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1023__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_9_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1023__Vfuncout;
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

void Vsim_HLS_fp17_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulw_2__0(Vsim_HLS_fp17_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp17_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulw_2__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__982__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__982__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__982__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__982__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__982__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__982__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__982__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__982__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__987__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__987__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__987__vector;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__987__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__992__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__992__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__992__vector;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__992__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1002__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1002__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1002__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1002__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1002__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1002__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1002__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1002__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1003__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1003__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1003__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1003__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1003__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1003__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1003__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1003__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1017__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1017__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1017__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1017__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1017__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1017__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1017__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1017__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1018__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1018__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1018__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1018__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1018__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1018__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1018__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1018__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1019__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1019__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1019__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1019__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1019__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1019__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1019__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1019__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1026__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1026__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1026__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1026__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1026__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1026__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1026__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1026__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1027__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1027__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1027__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1027__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1027__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1027__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1027__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1027__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1028__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1028__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1028__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1028__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1028__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1028__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1028__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1028__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1029__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1029__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1029__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1029__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1029__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1029__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1029__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1029__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1030__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1030__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1030__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1030__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1030__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1030__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1030__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1030__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1033__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1033__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1033__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1033__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1033__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1033__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1033__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1033__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1034__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1034__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1034__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1034__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1034__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1034__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1034__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1034__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1035__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1035__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1035__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1035__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1035__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1035__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1035__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1035__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1037__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1037__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1037__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1037__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1037__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1037__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1037__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1037__sel = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1039__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1039__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1039__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1039__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1039__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1039__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1039__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1039__sel = 0;
    // Body
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1039__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1039__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1039__input_0 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulw_0.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__d;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1039__sel)
            ? __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1039__input_1
            : __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1039__input_0);
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1039__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1039__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_56 
        = (IData)(((0x0000fc00U != (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                   | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_else_2_acc_1_nl 
        = (0x000000ffU & (VL_EXTEND_II(8,7, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__983__vector 
                            = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x0aU));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__983__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__983__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__983__Vfuncout))) 
                          + VL_EXTEND_II(8,7, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__984__vector 
                            = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                              >> 0x0aU));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__984__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__984__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__984__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_if_2_FpMul_6U_10U_if_2_or_tmp 
        = ((0U == (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
           | (0U == (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_oelse_1_acc_1_nl 
        = (0x000000ffU & ((IData)(0x61U) + VL_EXTEND_II(8,7, 
                                                        ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__989__vector 
                            = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                              >> 0x0aU));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__989__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__989__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__989__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_60_rgt 
        = ((IData)(((0x0000fc00U != (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                    | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt)))) 
           & (IData)((((0x0000fc00U == (0x0000fc00U 
                                        & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                       & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                      & (0U != (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt)))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1002__sel 
        = (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1002__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_21;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1002__input_0 
        = ((0x3fU != (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                     >> 0x0000000aU))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_21));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1002__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1002__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1002__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1002__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_22_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1002__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_48 
        = (1U & ((~ (IData)(((0x0000fc00U == (0x0000fc00U 
                                              & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_21)))) 
                 | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__982__sel 
        = (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__982__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_56;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__982__input_0 
        = ((0x3fU != (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                     >> 0x0000000aU))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_56));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__982__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__982__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__982__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__982__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_35_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__982__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_else_2_if_acc_nl 
        = (0x000000ffU & ((IData)(0x51U) + VL_EXTEND_II(8,7, 
                                                        ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__986__vector 
                            = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_else_2_acc_1_nl));
                        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__Vstatic__tmp 
                            = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__986__vector), 1U));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__986__Vfuncout 
                            = (0x0000003fU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__Vstatic__tmp));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__985__vector 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__986__Vfuncout;
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__985__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__985__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__985__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_oelse_1_acc_nl 
        = (0x000001ffU & (VL_EXTEND_II(9,8, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__990__vector 
                            = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_oelse_1_acc_1_nl));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__990__Vfuncout 
                            = ((0x00000080U & ((IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__990__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__990__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__990__Vfuncout))) 
                          + VL_EXTEND_II(9,8, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__991__vector 
                            = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x0aU));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__991__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__991__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__991__Vfuncout)))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1003__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1003__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_22_nl;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1003__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_32)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1003__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1003__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1003__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1003__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_23 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1003__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_61_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_35_nl) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__987__vector 
        = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_else_2_if_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp 
        = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__987__vector), 6U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__987__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__987__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__992__vector 
        = (0x000000ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_oelse_1_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__992__vector), 7U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__992__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_oelse_1_acc_itm_7_1 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__992__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1029__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1029__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1029__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_48;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1029__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1029__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1029__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1029__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_25_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1029__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1034__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1034__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1034__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_52;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1034__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1034__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1034__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1034__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_30_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1034__Vfuncout;
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
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1030__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_68_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1030__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_48;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1030__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_25_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1030__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1030__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1030__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1030__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_26_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1030__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1035__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_68_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1035__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_52;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1035__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_30_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1035__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1035__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1035__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1035__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_31_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1035__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1017__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1017__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1017__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_4;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1017__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1017__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1017__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1017__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1017__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_40 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_4)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1033__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1033__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_26_nl;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1033__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_28_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1033__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1033__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1033__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1033__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_29_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1033__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1037__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1037__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_31_nl)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1037__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_32_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1037__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1037__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1037__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1037__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_33_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1037__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1018__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1018__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_4;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1018__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1018__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1018__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1018__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1018__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_1_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1018__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1026__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1026__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1026__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_40;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1026__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1026__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1026__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1026__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_18_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1026__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1019__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1019__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_4)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1019__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_1_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1019__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1019__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1019__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1019__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_2_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1019__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1027__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1027__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_40;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1027__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_18_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1027__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1027__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1027__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1027__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_19_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1027__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1028__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_65_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1028__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_40)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1028__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_19_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1028__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1028__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1028__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1028__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_20_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1028__Vfuncout;
}

void Vsim_HLS_fp17_mul___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulw_3__0(Vsim_HLS_fp17_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp17_mul___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulw_3__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*21:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__1053__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__1053__Vfuncout = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__1053__vector;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__1053__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__1058__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__1058__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__1058__vector;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__1058__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1059__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1059__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1059__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1059__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1059__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1059__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1059__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1059__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1060__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1060__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1060__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1060__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1060__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1060__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1060__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1060__sel = 0;
    IData/*19:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__1061__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__1061__Vfuncout = 0;
    IData/*19:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__1061__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__1061__input_0 = 0;
    IData/*19:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__1061__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__1061__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__1061__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__1061__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1062__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1062__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1062__input_2;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1062__input_2 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1062__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1062__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1062__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1062__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1069__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1069__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1069__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1069__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1069__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1069__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1069__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1069__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1070__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1070__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1070__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1070__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1070__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1070__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1070__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1070__sel = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1071__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1071__Vfuncout = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1071__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1071__input_0 = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1071__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1071__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1071__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1071__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1072__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1072__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1072__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1072__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1072__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1072__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1072__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1072__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1073__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1073__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1073__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1073__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1073__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1073__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1073__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1073__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1074__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1074__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1074__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1074__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1074__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1074__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1074__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1074__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1075__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1075__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1075__input_2;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1075__input_2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1075__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1075__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1075__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1075__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1075__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1075__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1077__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1077__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1077__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1077__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1077__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1077__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1077__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1077__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__1078__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__1078__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__1078__vector;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__1078__vector = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1081__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1081__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1081__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1081__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1081__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1081__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1085__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1085__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1085__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1085__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1085__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1085__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1085__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1085__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1096__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1096__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1096__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1096__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1096__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1096__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1096__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1096__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1097__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1097__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1097__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1097__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1097__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1097__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1097__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1097__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1101__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1101__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1101__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1101__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1101__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1101__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1101__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1101__sel = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1103__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1103__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1103__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1103__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1103__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1103__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1103__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1103__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen))))));
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
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt)))));
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
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_iswt0 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_sva_5 = 0U;
    }
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__1058__vector 
        = (0x0000003fU & ((IData)(1U) + (0x00000020U 
                                         | (0x0000001fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_sva_5) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp 
        = (0x0000003fU & VL_SHIFTR_III(6,6,32, (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__1058__vector), 5U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__1058__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_if_if_acc_1_itm_5_1 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__1058__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_iswt0));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_16 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_mux_10_itm_4;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1069__sel 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_or_2_cse;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1069__input_1 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_9_0_itm_2;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1069__input_0 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_FpMul_6U_10U_FpMul_6U_10U_nor_1_nl;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1069__sel)
                    ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1069__input_1)
                    : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1069__input_0));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1069__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_9_0 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1069__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_62))) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_62;
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
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_16 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_9_0 = 0U;
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
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1071__sel 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_40_rgt;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1071__input_1 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1071__input_0 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_mul_tmp;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1071__sel)
                    ? __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1071__input_1
                    : __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1071__input_0);
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1071__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1071__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 = 0U;
    }
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__1061__sel 
        = (1U & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                 >> 0x15U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__1061__input_1 
        = (0x000fffffU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                          >> 1U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__1061__input_0 
        = (0x000fffffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2);
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__1061__sel)
            ? __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__1061__input_1
            : __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__1061__input_0);
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__1061__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_20_1_lpi_1_dfm_3_mx0 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__1061__Vfuncout;
    vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_6 
        = ((((~ (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                 >> 0x00000015U)) | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_if_if_acc_1_itm_5_1)) 
            & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_4)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_4));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1059__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_if_if_acc_1_itm_5_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1059__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_slc_FpMul_6U_10U_p_mant_p1_21_itm_2;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1059__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_slc_FpMul_6U_10U_p_mant_p1_21_itm_2)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
             & ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2)) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_4)) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10_mx0c1)))) {
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1070__sel 
                = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10_mx0c1));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1070__input_1 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_FpMul_6U_10U_and_2_nl;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1070__input_0 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_15_10_itm_2;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1070__sel)
                    ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1070__input_1)
                    : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1070__input_0));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1070__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1070__Vfuncout;
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
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
              & (((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_if_2_FpMul_6U_10U_if_2_or_tmp) 
                      | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_oelse_1_acc_itm_7_1))) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_45_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_23))) {
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1074__sel 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_45_rgt;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1074__input_1 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1074__input_0 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1074__sel)
                    ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1074__input_1)
                    : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1074__input_0));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1074__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_3 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1074__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_mux_10_itm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_3 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1059__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1059__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1059__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1059__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_36_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1059__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
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
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1060__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_36_nl) 
           & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
              >> 0x00000015U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1060__input_1 
        = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_sva_5)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1060__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_sva_5;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_and_1_cse) {
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1073__sel 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_28;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1073__input_1 
                = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ua_sva_1_15_0_1));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1073__input_0 
                = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ub_sva_1_15_0_1));
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1073__sel)
                    ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1073__input_1)
                    : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1073__input_0));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1073__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_9_0_itm_2 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1073__Vfuncout;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1072__sel 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_28;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1072__input_1 
                = (0x0000003fU & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ua_sva_1_15_0_1) 
                                  >> 0x0aU));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1072__input_0 
                = (0x0000003fU & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ub_sva_1_15_0_1) 
                                  >> 0x0aU));
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1072__sel)
                    ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1072__input_1)
                    : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1072__input_0));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1072__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_15_10_itm_2 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1072__Vfuncout;
        }
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
    } else {
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_9_0_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_15_10_itm_2 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1060__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1060__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1060__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1060__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1060__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
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
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1075__sel 
                = (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_52_rgt) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_60_rgt) 
                               << 1U) | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_61_rgt)));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1075__input_0 
                = (1U & ((vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                          ^ vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt) 
                         >> 0x00000010U));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1075__input_1 
                = (1U & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                         >> 0x10U));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1075__input_2 
                = (1U & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                         >> 0x10U));
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1075__input_0) 
                   & (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1075__sel));
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1075__input_1) 
                      & ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1075__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1075__input_2) 
                      & ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1075__sel) 
                         >> 2U)));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1075__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_mux_10_itm_3 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1075__Vfuncout;
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
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__1076__vector 
                            = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMantRNE_22U_11U_else_carry_sva;
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__1076__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__1076__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__1076__Vfuncout)))));
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
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1077__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMantRNE_22U_11U_else_and_svs)) 
                 | (0x3fU != (0x0000003fU & ((IData)(1U) 
                                             + (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0))))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1077__input_1 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMantRNE_22U_11U_else_acc_nl));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__1078__vector 
        = (0x3fU == (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__1078__Vfuncout 
        = (0x000003ffU & (- (IData)((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__1078__vector))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1077__input_0 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__1078__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1077__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1077__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1077__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1077__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_37_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1077__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1062__sel 
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
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1062__input_0 
        = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1062__input_2 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1062__input_0) 
           & (- (IData)((1U & (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1062__sel)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result) 
           | (0x3eU & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1062__sel) 
                                        >> 1U))))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1062__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1062__sel) 
                                  >> 2U))))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1062__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_o_expo_lpi_1_dfm 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1062__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_42_cse 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_4)) 
                    | (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_1))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1103__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1103__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1103__input_0 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_add_3.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
            << 0x00000010U) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_add_3.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10) 
                                << 0x0000000aU) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_add_3.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1103__sel)
            ? __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1103__input_1
            : __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1103__input_0);
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1103__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1103__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_nor_nl 
        = (0x000003ffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1079__sel 
                        = (1U & (~ (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_6)));
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1079__input_0 
                        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_37_nl;
                    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1079__sel)
                            ? 0x03ffU : (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1079__input_0));
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1079__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1079__Vfuncout))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_2_lpi_1_dfm 
        = ((0U == (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_o_expo_lpi_1_dfm)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_4));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_65_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_3)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_7 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_3) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1085__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_slc_FpMul_6U_10U_p_mant_p1_21_itm_2;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1085__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_42_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1085__input_0 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_or_2_cse) 
                    | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2)) 
                       | ((vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                           >> 0x00000015U) | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_4)) 
                                              | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_4)))))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1085__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1085__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1085__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1085__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_4_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1085__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_49 
        = (1U & ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_3) 
                     & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1))) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__1053__vector 
        = (0x003fffffU & ((0x00000400U | (0x000003ffU 
                                          & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ua_sva_1_15_0_1))) 
                          * (0x00000400U | (0x000003ffU 
                                            & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ub_sva_1_15_0_1)))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__1053__Vfuncout 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__1053__vector;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_mul_tmp 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__1053__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1081__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_2_lpi_1_dfm)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1081__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_o_expo_lpi_1_dfm;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1081__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1081__input_1)
            : 0U);
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1081__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_FpMul_6U_10U_and_2_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1081__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_FpMul_6U_10U_FpMul_6U_10U_nor_1_nl 
        = (0x000003ffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1080__sel 
                        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_2_lpi_1_dfm;
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1080__input_0 
                        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_nor_nl;
                    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1080__sel)
                            ? 0x03ffU : (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1080__input_0));
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1080__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1080__Vfuncout))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_32 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_7)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_11 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_7) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1101__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1101__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1101__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_49)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1101__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1101__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1101__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1101__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_32_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1101__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1096__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_3;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1096__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1096__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_49;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1096__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1096__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1096__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1096__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_27_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1096__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1097__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1097__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_49;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1097__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_27_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1097__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1097__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1097__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1097__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_28_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1097__Vfuncout;
}

void Vsim_HLS_fp17_mul___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulw_3__1(Vsim_HLS_fp17_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp17_mul___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulw_3__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_9;
    HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_9 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1040__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1040__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1040__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1040__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1040__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1040__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1040__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1040__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1041__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1041__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1041__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1041__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1042__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1042__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1042__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1042__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1043__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1043__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1043__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1043__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1043__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1043__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1043__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1043__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1044__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1044__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1044__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1044__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1044__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1044__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1044__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1044__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1045__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1045__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1045__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1045__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1045__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1045__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1045__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1045__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1046__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1046__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1046__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1046__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1046__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1046__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1046__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1046__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1063__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1063__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1063__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1063__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1063__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1063__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1063__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1063__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1064__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1064__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1064__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1064__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1064__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1064__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1064__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1064__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1065__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1065__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1065__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1065__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1065__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1065__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1065__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1065__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1066__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1066__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1066__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1066__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1066__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1066__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1066__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1066__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1086__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1086__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1086__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1086__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1086__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1086__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1086__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1086__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1087__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1087__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1087__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1087__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1087__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1087__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1087__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1087__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1088__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1088__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1088__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1088__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1088__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1088__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1088__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1088__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1089__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1089__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1089__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1089__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1089__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1089__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1089__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1089__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1090__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1090__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1090__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1090__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1090__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1090__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1090__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1090__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__vd 
        = ((0x0000000fU == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_add_pad_out_vld)) 
           & ((0x0000000fU == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_mulw_in_a_rdy)) 
              & (7U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_147))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd 
        = ((0x0000000fU == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_add_pad_out_vld)) 
           & ((0x0000000fU == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_mulw_in_b_rdy)) 
              & (7U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_149))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_mulv_rdy) 
           & (7U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_153)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_7 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1045__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1045__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_32;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1045__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_32)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1045__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1045__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1045__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1045__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_16_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1045__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1043__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1043__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_11;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1043__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_11)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1043__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1043__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1043__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1043__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_12_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1043__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1064__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1064__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1064__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1064__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1064__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1064__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1064__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_6 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1064__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_52 
        = (1U & ((~ (IData)(((0x0000fc00U == (0x0000fc00U 
                                              & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1)))) 
                 | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1066__sel 
        = (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1066__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1066__input_0 
        = ((0x3fU != (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                     >> 0x0000000aU))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1066__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1066__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1066__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1066__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_21 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1066__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_15 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2)) 
           & (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_40_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_65_cse));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_52_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse) 
           & (IData)(((0x0000fc00U == (0x0000fc00U 
                                       & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                      & (0U != (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1)) 
           & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)));
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
    vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1) 
           & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1063__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1063__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1063__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1063__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1063__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1063__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1063__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_3 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1063__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1086__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1086__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)) 
                    | ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_3) 
                           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_7)) 
                              | (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_mul_tmp 
                                 >> 0x00000015U)))) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3)))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1086__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_4_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1086__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1086__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1086__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1086__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_5_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1086__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1046__sel 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_or_2_cse))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1046__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_16_nl;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1046__input_0 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_3) 
                    | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1046__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1046__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1046__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1046__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_17_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1046__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1044__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_or_2_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1044__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_11)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1044__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_12_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1044__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1044__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1044__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1044__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_13_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1044__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_en_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse));
    vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_8 
        = ((IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_1) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_16 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_4)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_13));
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
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1040__sel 
        = (1U & (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1041__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_en_1) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1041__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1041__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1040__input_1 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1041__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1042__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
            ? 0U : 1U);
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1042__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1042__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1040__input_0 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1042__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1040__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1040__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1040__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1040__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__iMantWidth_oMantWidth_prb 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1040__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1065__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1065__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_16;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1065__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_6;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1065__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1065__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1065__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1065__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_7 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1065__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1089__sel 
        = (1U & (~ (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1089__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_16;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1089__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_6;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1089__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1089__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1089__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1089__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_10_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1089__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1087__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_42_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1087__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_16;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1087__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_6;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1087__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1087__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1087__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1087__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_8_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1087__Vfuncout;
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
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1090__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1090__input_1 
        = (1U & (~ (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_8)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1090__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_10_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1090__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1090__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1090__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1090__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_11_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1090__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1088__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_65_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1088__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_4)) 
                    | (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_8))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1088__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_8_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1088__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1088__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1088__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1088__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_9_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1088__Vfuncout;
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

void Vsim_HLS_fp17_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulw_3__0(Vsim_HLS_fp17_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp17_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulw_3__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1047__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1047__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1047__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1047__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1047__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1047__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1047__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1047__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__1052__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__1052__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__1052__vector;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__1052__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__1057__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__1057__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__1057__vector;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__1057__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1067__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1067__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1067__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1067__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1067__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1067__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1067__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1067__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1068__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1068__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1068__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1068__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1068__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1068__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1068__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1068__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1082__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1082__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1082__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1082__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1082__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1082__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1082__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1082__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1083__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1083__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1083__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1083__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1083__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1083__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1083__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1083__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1084__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1084__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1084__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1084__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1084__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1084__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1084__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1084__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1091__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1091__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1091__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1091__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1091__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1091__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1091__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1091__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1092__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1092__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1092__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1092__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1092__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1092__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1092__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1092__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1093__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1093__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1093__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1093__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1093__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1093__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1093__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1093__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1094__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1094__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1094__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1094__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1094__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1094__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1094__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1094__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1095__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1095__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1095__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1095__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1095__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1095__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1095__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1095__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1098__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1098__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1098__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1098__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1098__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1098__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1098__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1098__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1099__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1099__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1099__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1099__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1099__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1099__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1099__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1099__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1100__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1100__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1100__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1100__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1100__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1100__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1100__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1100__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1102__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1102__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1102__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1102__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1102__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1102__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1102__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1102__sel = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1104__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1104__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1104__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1104__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1104__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1104__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1104__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1104__sel = 0;
    // Body
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1104__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1104__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1104__input_0 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulw_0.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__d;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1104__sel)
            ? __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1104__input_1
            : __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1104__input_0);
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1104__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1104__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_56 
        = (IData)(((0x0000fc00U != (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                   | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_else_2_acc_1_nl 
        = (0x000000ffU & (VL_EXTEND_II(8,7, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1048__vector 
                            = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x0aU));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1048__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1048__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1048__Vfuncout))) 
                          + VL_EXTEND_II(8,7, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1049__vector 
                            = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                              >> 0x0aU));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1049__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1049__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1049__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_if_2_FpMul_6U_10U_if_2_or_tmp 
        = ((0U == (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
           | (0U == (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_oelse_1_acc_1_nl 
        = (0x000000ffU & ((IData)(0x61U) + VL_EXTEND_II(8,7, 
                                                        ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__1054__vector 
                            = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                              >> 0x0aU));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__1054__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__1054__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__1054__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_60_rgt 
        = ((IData)(((0x0000fc00U != (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                    | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt)))) 
           & (IData)((((0x0000fc00U == (0x0000fc00U 
                                        & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                       & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                      & (0U != (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt)))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1067__sel 
        = (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1067__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_21;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1067__input_0 
        = ((0x3fU != (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                     >> 0x0000000aU))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_21));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1067__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1067__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1067__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1067__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_22_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1067__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_48 
        = (1U & ((~ (IData)(((0x0000fc00U == (0x0000fc00U 
                                              & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_21)))) 
                 | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1047__sel 
        = (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1047__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_56;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1047__input_0 
        = ((0x3fU != (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                     >> 0x0000000aU))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_56));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1047__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1047__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1047__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1047__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_35_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1047__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_else_2_if_acc_nl 
        = (0x000000ffU & ((IData)(0x51U) + VL_EXTEND_II(8,7, 
                                                        ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__1051__vector 
                            = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_else_2_acc_1_nl));
                        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__Vstatic__tmp 
                            = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__1051__vector), 1U));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__1051__Vfuncout 
                            = (0x0000003fU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__Vstatic__tmp));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1050__vector 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__1051__Vfuncout;
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1050__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1050__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1050__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_oelse_1_acc_nl 
        = (0x000001ffU & (VL_EXTEND_II(9,8, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__1055__vector 
                            = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_oelse_1_acc_1_nl));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__1055__Vfuncout 
                            = ((0x00000080U & ((IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__1055__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__1055__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__1055__Vfuncout))) 
                          + VL_EXTEND_II(9,8, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__1056__vector 
                            = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x0aU));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__1056__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__1056__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__1056__Vfuncout)))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1068__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1068__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_22_nl;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1068__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_32)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1068__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1068__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1068__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1068__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_23 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1068__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_61_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_35_nl) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__1052__vector 
        = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_else_2_if_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp 
        = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__1052__vector), 6U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__1052__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__1052__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__1057__vector 
        = (0x000000ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_oelse_1_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__1057__vector), 7U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__1057__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_oelse_1_acc_itm_7_1 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__1057__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1094__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1094__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1094__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_48;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1094__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1094__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1094__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1094__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_25_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1094__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1099__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1099__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1099__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_52;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1099__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1099__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1099__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1099__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_30_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1099__Vfuncout;
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
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1095__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_68_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1095__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_48;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1095__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_25_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1095__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1095__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1095__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1095__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_26_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1095__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1100__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_68_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1100__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_52;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1100__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_30_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1100__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1100__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1100__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1100__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_31_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1100__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1082__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1082__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1082__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_4;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1082__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1082__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1082__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1082__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1082__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_40 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_4)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1098__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1098__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_26_nl;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1098__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_28_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1098__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1098__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1098__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1098__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_29_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1098__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1102__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1102__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_31_nl)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1102__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_32_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1102__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1102__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1102__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1102__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_33_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1102__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1083__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1083__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_4;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1083__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1083__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1083__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1083__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1083__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_1_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1083__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1091__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1091__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1091__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_40;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1091__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1091__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1091__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1091__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_18_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1091__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1084__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1084__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_4)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1084__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_1_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1084__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1084__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1084__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1084__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_2_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1084__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1092__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1092__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_40;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1092__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_18_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1092__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1092__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1092__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1092__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_19_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1092__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1093__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_65_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1093__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_40)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1093__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_19_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1093__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1093__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1093__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1093__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_20_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1093__Vfuncout;
}

void Vsim_HLS_fp17_mul___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulv_0__0(Vsim_HLS_fp17_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp17_mul___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulv_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1108__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1108__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1108__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1108__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1108__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1108__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1108__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1108__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1109__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1109__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1109__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1109__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1109__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1109__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1109__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1109__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1110__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1110__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1110__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1110__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1110__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1110__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1110__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1110__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1111__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1111__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1111__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1111__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1111__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1111__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1111__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1111__sel = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__1118__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__1118__Vfuncout = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__1118__vector;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__1118__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__1123__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__1123__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__1123__vector;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__1123__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1124__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1124__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1124__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1124__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1124__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1124__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1124__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1124__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1125__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1125__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1125__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1125__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1125__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1125__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1125__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1125__sel = 0;
    IData/*19:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__1126__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__1126__Vfuncout = 0;
    IData/*19:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__1126__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__1126__input_0 = 0;
    IData/*19:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__1126__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__1126__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__1126__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__1126__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1127__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1127__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1127__input_2;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1127__input_2 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1127__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1127__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1127__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1127__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1129__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1129__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1129__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1129__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1129__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1129__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1129__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1129__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1130__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1130__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1130__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1130__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1130__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1130__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1130__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1130__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1134__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1134__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1134__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1134__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1134__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1134__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1134__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1134__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1135__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1135__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1135__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1135__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1135__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1135__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1135__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1135__sel = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1136__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1136__Vfuncout = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1136__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1136__input_0 = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1136__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1136__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1136__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1136__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1137__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1137__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1137__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1137__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1137__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1137__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1137__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1137__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1138__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1138__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1138__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1138__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1138__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1138__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1138__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1138__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1139__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1139__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1139__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1139__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1139__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1139__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1139__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1139__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1140__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1140__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1140__input_2;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1140__input_2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1140__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1140__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1140__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1140__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1140__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1140__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1142__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1142__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1142__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1142__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1142__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1142__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1142__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1142__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__1143__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__1143__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__1143__vector;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__1143__vector = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1146__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1146__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1146__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1146__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1146__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1146__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1150__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1150__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1150__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1150__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1150__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1150__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1150__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1150__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1151__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1151__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1151__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1151__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1151__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1151__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1151__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1151__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1152__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1152__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1152__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1152__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1152__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1152__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1152__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1152__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1153__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1153__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1153__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1153__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1153__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1153__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1153__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1153__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1154__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1154__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1154__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1154__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1154__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1154__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1154__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1154__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1155__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1155__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1155__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1155__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1155__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1155__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1155__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1155__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1161__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1161__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1161__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1161__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1161__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1161__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1161__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1161__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1162__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1162__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1162__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1162__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1162__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1162__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1162__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1162__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1166__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1166__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1166__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1166__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1166__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1166__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1166__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1166__sel = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1168__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1168__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1168__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1168__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1168__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1168__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1168__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1168__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_to_fp16_0.__PVT__HLS_fp17_to_fp16_core_inst__DOT__chn_a_rsci_ld_core_psct) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_to_fp16_0.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
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
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__1123__vector 
        = (0x0000003fU & ((IData)(1U) + (0x00000020U 
                                         | (0x0000001fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_sva_5) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp 
        = (0x0000003fU & VL_SHIFTR_III(6,6,32, (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__1123__vector), 5U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__1123__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_if_if_acc_1_itm_5_1 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__1123__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_iswt0));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_and_cse) {
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1134__sel 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_or_2_cse;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1134__input_1 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_9_0_itm_2;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1134__input_0 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_FpMul_6U_10U_FpMul_6U_10U_nor_1_nl;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1134__sel)
                    ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1134__input_1)
                    : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1134__input_0));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1134__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_9_0 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1134__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_62))) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_62;
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
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_9_0 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse = 0U;
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
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1136__sel 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_40_rgt;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1136__input_1 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1136__input_0 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_mul_tmp;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1136__sel)
                    ? __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1136__input_1
                    : __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1136__input_0);
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1136__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1136__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 = 0U;
    }
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__1126__sel 
        = (1U & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                 >> 0x15U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__1126__input_1 
        = (0x000fffffU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                          >> 1U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__1126__input_0 
        = (0x000fffffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2);
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__1126__sel)
            ? __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__1126__input_1
            : __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__1126__input_0);
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__1126__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_20_1_lpi_1_dfm_3_mx0 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__1126__Vfuncout;
    vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_6 
        = ((((~ (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                 >> 0x00000015U)) | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_if_if_acc_1_itm_5_1)) 
            & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_4)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_4));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1124__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_if_if_acc_1_itm_5_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1124__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_slc_FpMul_6U_10U_p_mant_p1_21_itm_2;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1124__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_slc_FpMul_6U_10U_p_mant_p1_21_itm_2)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
             & ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2)) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_4)) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10_mx0c1)))) {
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1135__sel 
                = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10_mx0c1));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1135__input_1 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_FpMul_6U_10U_and_2_nl;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1135__input_0 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_15_10_itm_2;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1135__sel)
                    ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1135__input_1)
                    : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1135__input_0));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1135__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1135__Vfuncout;
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
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1138__sel 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_28;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1138__input_1 
                = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ua_sva_1_15_0_1));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1138__input_0 
                = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ub_sva_1_15_0_1));
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1138__sel)
                    ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1138__input_1)
                    : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1138__input_0));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1138__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_9_0_itm_2 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1138__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
              & (((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_if_2_FpMul_6U_10U_if_2_or_tmp) 
                      | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_oelse_1_acc_itm_7_1))) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_45_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_23))) {
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1139__sel 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_45_rgt;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1139__input_1 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1139__input_0 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1139__sel)
                    ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1139__input_1)
                    : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1139__input_0));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1139__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_3 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1139__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_mux_10_itm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_9_0_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_3 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1124__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1124__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1124__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1124__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_36_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1124__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
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
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1125__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_36_nl) 
           & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
              >> 0x00000015U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1125__input_1 
        = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_sva_5)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1125__input_0 
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
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1137__sel 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_28;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1137__input_1 
                = (0x0000003fU & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ua_sva_1_15_0_1) 
                                  >> 0x0aU));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1137__input_0 
                = (0x0000003fU & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ub_sva_1_15_0_1) 
                                  >> 0x0aU));
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1137__sel)
                    ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1137__input_1)
                    : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1137__input_0));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1137__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_15_10_itm_2 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1137__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_15_10_itm_2 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1125__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1125__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1125__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1125__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1125__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd));
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
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1140__sel 
                = (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_52_rgt) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_60_rgt) 
                               << 1U) | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_61_rgt)));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1140__input_0 
                = (1U & ((vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                          ^ vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt) 
                         >> 0x00000010U));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1140__input_1 
                = (1U & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                         >> 0x10U));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1140__input_2 
                = (1U & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                         >> 0x10U));
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1140__input_0) 
                   & (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1140__sel));
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1140__input_1) 
                      & ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1140__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1140__input_2) 
                      & ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1140__sel) 
                         >> 2U)));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1140__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_mux_10_itm_3 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1140__Vfuncout;
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
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__1141__vector 
                            = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMantRNE_22U_11U_else_carry_sva;
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__1141__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__1141__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__1141__Vfuncout)))));
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
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1142__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMantRNE_22U_11U_else_and_svs)) 
                 | (0x3fU != (0x0000003fU & ((IData)(1U) 
                                             + (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0))))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1142__input_1 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMantRNE_22U_11U_else_acc_nl));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__1143__vector 
        = (0x3fU == (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__1143__Vfuncout 
        = (0x000003ffU & (- (IData)((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__1143__vector))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1142__input_0 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__1143__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1142__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1142__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1142__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1142__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_37_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1142__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1127__sel 
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
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1127__input_0 
        = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1127__input_2 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1127__input_0) 
           & (- (IData)((1U & (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1127__sel)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result) 
           | (0x3eU & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1127__sel) 
                                        >> 1U))))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1127__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1127__sel) 
                                  >> 2U))))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1127__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_o_expo_lpi_1_dfm 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1127__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_42_cse 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_4)) 
                    | (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_1))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1168__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1168__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1168__input_0 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulw_0.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_16) 
            << 0x00000010U) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulw_0.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10) 
                                << 0x0000000aU) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulw_0.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_9_0)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1168__sel)
            ? __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1168__input_1
            : __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1168__input_0);
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1168__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1168__Vfuncout;
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
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1144__sel 
                        = (1U & (~ (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_6)));
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1144__input_0 
                        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_37_nl;
                    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1144__sel)
                            ? 0x03ffU : (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1144__input_0));
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1144__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1144__Vfuncout))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_2_lpi_1_dfm 
        = ((0U == (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_o_expo_lpi_1_dfm)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_4));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_65_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_3)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_7 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_3) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1150__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_slc_FpMul_6U_10U_p_mant_p1_21_itm_2;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1150__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_42_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1150__input_0 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_or_2_cse) 
                    | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2)) 
                       | ((vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                           >> 0x00000015U) | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_4)) 
                                              | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_4)))))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1150__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1150__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1150__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1150__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_4_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1150__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_49 
        = (1U & ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_3) 
                     & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1))) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1129__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1129__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1129__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1129__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1129__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1129__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1129__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_6 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1129__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__1118__vector 
        = (0x003fffffU & ((0x00000400U | (0x000003ffU 
                                          & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ua_sva_1_15_0_1))) 
                          * (0x00000400U | (0x000003ffU 
                                            & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ub_sva_1_15_0_1)))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__1118__Vfuncout 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__1118__vector;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_mul_tmp 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__1118__Vfuncout;
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
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1146__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_2_lpi_1_dfm)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1146__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_o_expo_lpi_1_dfm;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1146__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1146__input_1)
            : 0U);
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1146__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_FpMul_6U_10U_and_2_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1146__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_FpMul_6U_10U_FpMul_6U_10U_nor_1_nl 
        = (0x000003ffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1145__sel 
                        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_2_lpi_1_dfm;
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1145__input_0 
                        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_nor_nl;
                    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1145__sel)
                            ? 0x03ffU : (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1145__input_0));
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1145__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1145__Vfuncout))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_40_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_65_cse));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_32 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_7)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_11 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_7) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1166__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1166__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1166__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_49)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1166__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1166__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1166__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1166__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_32_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1166__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1161__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_3;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1161__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1161__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_49;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1161__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1161__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1161__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1161__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_27_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1161__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1151__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1151__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)) 
                    | ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_3) 
                           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_7)) 
                              | (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_mul_tmp 
                                 >> 0x00000015U)))) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3)))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1151__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_4_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1151__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1151__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1151__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1151__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_5_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1151__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_4)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_13));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1130__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1130__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_16;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1130__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_6;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1130__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1130__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1130__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1130__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_7 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1130__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1154__sel 
        = (1U & (~ (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1154__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_16;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1154__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_6;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1154__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1154__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1154__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1154__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_10_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1154__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1152__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_42_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1152__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_16;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1152__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_6;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1152__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1152__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1152__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1152__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_8_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1152__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1110__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1110__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_32;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1110__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_32)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1110__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1110__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1110__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1110__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_16_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1110__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1108__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1108__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_11;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1108__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_11)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1108__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1108__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1108__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1108__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_12_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1108__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1162__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1162__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_49;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1162__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_27_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1162__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1162__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1162__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1162__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_28_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1162__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1155__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1155__input_1 
        = (1U & (~ (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_8)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1155__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_10_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1155__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1155__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1155__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1155__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_11_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1155__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1153__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_65_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1153__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_4)) 
                    | (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_8))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1153__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_8_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1153__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1153__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1153__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1153__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_9_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1153__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1111__sel 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_or_2_cse))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1111__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_16_nl;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1111__input_0 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_3) 
                    | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1111__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1111__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1111__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1111__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_17_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1111__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1109__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_or_2_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1109__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_11)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1109__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_12_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1109__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1109__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1109__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1109__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_13_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1109__Vfuncout;
}

void Vsim_HLS_fp17_mul___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulv_0__1(Vsim_HLS_fp17_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp17_mul___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulv_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_9;
    HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_9 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1105__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1105__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1105__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1105__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1105__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1105__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1105__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1105__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1106__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1106__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1106__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1106__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1107__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1107__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1107__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1107__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1128__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1128__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1128__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1128__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1128__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1128__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1128__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1128__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1131__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1131__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1131__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1131__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1131__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1131__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1131__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1131__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd 
        = ((0x0000000fU == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_mulw_out_vld)) 
           & (IData)(((0x0fU == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_mulv_in_b_rdy)) 
                      & (0x0eU == (0x0eU & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_mulv_in_a_rdy))))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__vd 
        = ((0x0000000fU == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_mulw_out_vld)) 
           & (IData)(((0x0fU == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_mulv_in_a_rdy)) 
                      & (0x0eU == (0x0eU & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_mulv_in_b_rdy))))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt));
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
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1128__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1128__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1128__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1128__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1128__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1128__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1128__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_3 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1128__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_en_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_52 
        = (1U & ((~ (IData)(((0x0000fc00U == (0x0000fc00U 
                                              & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1)))) 
                 | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1131__sel 
        = (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1131__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1131__input_0 
        = ((0x3fU != (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                     >> 0x0000000aU))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1131__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1131__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1131__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1131__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_21 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1131__Vfuncout;
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
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1105__sel 
        = (1U & (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1106__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_en_1) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1106__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1106__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1105__input_1 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1106__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1107__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
            ? 0U : 1U);
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1107__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1107__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1105__input_0 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1107__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1105__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1105__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1105__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1105__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__iMantWidth_oMantWidth_prb 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1105__Vfuncout;
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

void Vsim_HLS_fp17_mul___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulv_0__2(Vsim_HLS_fp17_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp17_mul___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulv_0__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__d 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__dp2reg_consumer)
            ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d1_recip_kernel_height
            : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d0_recip_kernel_height);
}

void Vsim_HLS_fp17_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulv_0__0(Vsim_HLS_fp17_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp17_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulv_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1112__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1112__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1112__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1112__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1112__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1112__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1112__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1112__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__1117__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__1117__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__1117__vector;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__1117__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__1122__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__1122__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__1122__vector;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__1122__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1132__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1132__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1132__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1132__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1132__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1132__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1132__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1132__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1133__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1133__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1133__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1133__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1133__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1133__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1133__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1133__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1147__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1147__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1147__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1147__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1147__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1147__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1147__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1147__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1148__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1148__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1148__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1148__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1148__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1148__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1148__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1148__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1149__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1149__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1149__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1149__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1149__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1149__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1149__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1149__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1156__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1156__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1156__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1156__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1156__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1156__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1156__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1156__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1157__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1157__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1157__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1157__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1157__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1157__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1157__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1157__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1158__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1158__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1158__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1158__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1158__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1158__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1158__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1158__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1159__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1159__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1159__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1159__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1159__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1159__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1159__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1159__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1160__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1160__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1160__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1160__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1160__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1160__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1160__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1160__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1163__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1163__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1163__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1163__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1163__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1163__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1163__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1163__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1164__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1164__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1164__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1164__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1164__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1164__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1164__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1164__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1165__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1165__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1165__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1165__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1165__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1165__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1165__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1165__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1167__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1167__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1167__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1167__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1167__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1167__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1167__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1167__sel = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1169__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1169__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1169__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1169__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1169__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1169__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1169__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1169__sel = 0;
    // Body
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1169__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1169__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1169__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__d;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1169__sel)
            ? __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1169__input_1
            : __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1169__input_0);
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1169__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1169__Vfuncout;
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
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1113__vector 
                            = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x0aU));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1113__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1113__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1113__Vfuncout))) 
                          + VL_EXTEND_II(8,7, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1114__vector 
                            = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                              >> 0x0aU));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1114__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1114__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1114__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_if_2_FpMul_6U_10U_if_2_or_tmp 
        = ((0U == (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
           | (0U == (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_oelse_1_acc_1_nl 
        = (0x000000ffU & ((IData)(0x61U) + VL_EXTEND_II(8,7, 
                                                        ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__1119__vector 
                            = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                              >> 0x0aU));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__1119__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__1119__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__1119__Vfuncout)))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1132__sel 
        = (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1132__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_21;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1132__input_0 
        = ((0x3fU != (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                     >> 0x0000000aU))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_21));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1132__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1132__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1132__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1132__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_22_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1132__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_48 
        = (1U & ((~ (IData)(((0x0000fc00U == (0x0000fc00U 
                                              & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_21)))) 
                 | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1112__sel 
        = (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1112__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_56;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1112__input_0 
        = ((0x3fU != (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                     >> 0x0000000aU))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_56));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1112__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1112__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1112__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1112__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_35_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1112__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_else_2_if_acc_nl 
        = (0x000000ffU & ((IData)(0x51U) + VL_EXTEND_II(8,7, 
                                                        ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__1116__vector 
                            = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_else_2_acc_1_nl));
                        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__Vstatic__tmp 
                            = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__1116__vector), 1U));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__1116__Vfuncout 
                            = (0x0000003fU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__Vstatic__tmp));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1115__vector 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__1116__Vfuncout;
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1115__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1115__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1115__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_oelse_1_acc_nl 
        = (0x000001ffU & (VL_EXTEND_II(9,8, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__1120__vector 
                            = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_oelse_1_acc_1_nl));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__1120__Vfuncout 
                            = ((0x00000080U & ((IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__1120__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__1120__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__1120__Vfuncout))) 
                          + VL_EXTEND_II(9,8, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__1121__vector 
                            = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x0aU));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__1121__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__1121__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__1121__Vfuncout)))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1133__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1133__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_22_nl;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1133__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_32)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1133__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1133__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1133__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1133__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_23 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1133__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_61_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_35_nl) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__1117__vector 
        = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_else_2_if_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp 
        = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__1117__vector), 6U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__1117__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__1117__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__1122__vector 
        = (0x000000ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_oelse_1_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__1122__vector), 7U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__1122__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_oelse_1_acc_itm_7_1 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__1122__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1159__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1159__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1159__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_48;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1159__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1159__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1159__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1159__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_25_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1159__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1164__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1164__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1164__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_52;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1164__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1164__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1164__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1164__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_30_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1164__Vfuncout;
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
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1160__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_68_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1160__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_48;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1160__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_25_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1160__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1160__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1160__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1160__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_26_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1160__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1165__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_68_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1165__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_52;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1165__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_30_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1165__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1165__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1165__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1165__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_31_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1165__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1147__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1147__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1147__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_4;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1147__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1147__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1147__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1147__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1147__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_40 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_4)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1163__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1163__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_26_nl;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1163__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_28_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1163__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1163__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1163__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1163__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_29_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1163__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1167__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1167__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_31_nl)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1167__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_32_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1167__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1167__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1167__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1167__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_33_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1167__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1148__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1148__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_4;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1148__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1148__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1148__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1148__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1148__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_1_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1148__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1156__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1156__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1156__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_40;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1156__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1156__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1156__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1156__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_18_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1156__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1149__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1149__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_4)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1149__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_1_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1149__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1149__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1149__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1149__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_2_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1149__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1157__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1157__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_40;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1157__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_18_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1157__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1157__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1157__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1157__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_19_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1157__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1158__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_65_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1158__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_40)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1158__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_19_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1158__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1158__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1158__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1158__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_20_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1158__Vfuncout;
}

void Vsim_HLS_fp17_mul___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulv_1__0(Vsim_HLS_fp17_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp17_mul___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulv_1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1173__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1173__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1173__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1173__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1173__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1173__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1173__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1173__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1174__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1174__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1174__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1174__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1174__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1174__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1174__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1174__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1175__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1175__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1175__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1175__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1175__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1175__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1175__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1175__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1176__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1176__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1176__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1176__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1176__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1176__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1176__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1176__sel = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__1183__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__1183__Vfuncout = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__1183__vector;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__1183__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__1188__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__1188__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__1188__vector;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__1188__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1189__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1189__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1189__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1189__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1189__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1189__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1189__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1189__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1190__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1190__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1190__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1190__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1190__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1190__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1190__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1190__sel = 0;
    IData/*19:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__1191__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__1191__Vfuncout = 0;
    IData/*19:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__1191__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__1191__input_0 = 0;
    IData/*19:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__1191__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__1191__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__1191__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__1191__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1192__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1192__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1192__input_2;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1192__input_2 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1192__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1192__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1192__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1192__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1194__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1194__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1194__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1194__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1194__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1194__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1194__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1194__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1195__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1195__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1195__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1195__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1195__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1195__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1195__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1195__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1199__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1199__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1199__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1199__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1199__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1199__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1199__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1199__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1200__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1200__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1200__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1200__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1200__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1200__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1200__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1200__sel = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1201__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1201__Vfuncout = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1201__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1201__input_0 = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1201__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1201__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1201__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1201__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1202__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1202__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1202__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1202__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1202__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1202__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1202__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1202__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1203__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1203__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1203__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1203__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1203__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1203__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1203__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1203__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1204__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1204__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1204__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1204__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1204__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1204__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1204__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1204__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1205__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1205__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1205__input_2;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1205__input_2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1205__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1205__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1205__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1205__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1205__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1205__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1207__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1207__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1207__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1207__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1207__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1207__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1207__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1207__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__1208__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__1208__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__1208__vector;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__1208__vector = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1211__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1211__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1211__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1211__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1211__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1211__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1215__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1215__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1215__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1215__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1215__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1215__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1215__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1215__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1216__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1216__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1216__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1216__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1216__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1216__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1216__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1216__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1217__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1217__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1217__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1217__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1217__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1217__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1217__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1217__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1218__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1218__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1218__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1218__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1218__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1218__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1218__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1218__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1219__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1219__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1219__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1219__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1219__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1219__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1219__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1219__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1220__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1220__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1220__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1220__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1220__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1220__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1220__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1220__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1226__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1226__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1226__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1226__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1226__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1226__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1226__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1226__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1227__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1227__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1227__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1227__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1227__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1227__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1227__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1227__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1231__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1231__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1231__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1231__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1231__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1231__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1231__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1231__sel = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1233__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1233__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1233__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1233__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1233__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1233__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1233__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1233__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_to_fp16_1.__PVT__HLS_fp17_to_fp16_core_inst__DOT__chn_a_rsci_ld_core_psct) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_to_fp16_1.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
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
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__1188__vector 
        = (0x0000003fU & ((IData)(1U) + (0x00000020U 
                                         | (0x0000001fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_sva_5) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp 
        = (0x0000003fU & VL_SHIFTR_III(6,6,32, (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__1188__vector), 5U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__1188__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_if_if_acc_1_itm_5_1 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__1188__Vfuncout;
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
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1199__sel 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_or_2_cse;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1199__input_1 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_9_0_itm_2;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1199__input_0 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_FpMul_6U_10U_FpMul_6U_10U_nor_1_nl;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1199__sel)
                    ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1199__input_1)
                    : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1199__input_0));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1199__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_9_0 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1199__Vfuncout;
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
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1201__sel 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_40_rgt;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1201__input_1 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1201__input_0 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_mul_tmp;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1201__sel)
                    ? __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1201__input_1
                    : __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1201__input_0);
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1201__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1201__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 = 0U;
    }
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__1191__sel 
        = (1U & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                 >> 0x15U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__1191__input_1 
        = (0x000fffffU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                          >> 1U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__1191__input_0 
        = (0x000fffffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2);
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__1191__sel)
            ? __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__1191__input_1
            : __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__1191__input_0);
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__1191__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_20_1_lpi_1_dfm_3_mx0 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__1191__Vfuncout;
    vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_6 
        = ((((~ (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                 >> 0x00000015U)) | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_if_if_acc_1_itm_5_1)) 
            & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_4)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_4));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1189__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_if_if_acc_1_itm_5_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1189__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_slc_FpMul_6U_10U_p_mant_p1_21_itm_2;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1189__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_slc_FpMul_6U_10U_p_mant_p1_21_itm_2)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
             & ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2)) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_4)) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10_mx0c1)))) {
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1200__sel 
                = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10_mx0c1));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1200__input_1 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_FpMul_6U_10U_and_2_nl;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1200__input_0 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_15_10_itm_2;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1200__sel)
                    ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1200__input_1)
                    : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1200__input_0));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1200__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1200__Vfuncout;
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
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1203__sel 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_28;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1203__input_1 
                = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ua_sva_1_15_0_1));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1203__input_0 
                = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ub_sva_1_15_0_1));
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1203__sel)
                    ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1203__input_1)
                    : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1203__input_0));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1203__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_9_0_itm_2 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1203__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
              & (((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_if_2_FpMul_6U_10U_if_2_or_tmp) 
                      | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_oelse_1_acc_itm_7_1))) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_45_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_23))) {
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1204__sel 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_45_rgt;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1204__input_1 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1204__input_0 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1204__sel)
                    ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1204__input_1)
                    : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1204__input_0));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1204__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_3 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1204__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_mux_10_itm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_9_0_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_3 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1189__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1189__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1189__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1189__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_36_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1189__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
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
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1190__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_36_nl) 
           & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
              >> 0x00000015U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1190__input_1 
        = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_sva_5)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1190__input_0 
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
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1202__sel 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_28;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1202__input_1 
                = (0x0000003fU & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ua_sva_1_15_0_1) 
                                  >> 0x0aU));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1202__input_0 
                = (0x0000003fU & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ub_sva_1_15_0_1) 
                                  >> 0x0aU));
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1202__sel)
                    ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1202__input_1)
                    : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1202__input_0));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1202__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_15_10_itm_2 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1202__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_15_10_itm_2 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1190__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1190__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1190__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1190__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1190__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_52_rgt) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_60_rgt)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_61_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_3))) {
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1205__sel 
                = (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_52_rgt) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_60_rgt) 
                               << 1U) | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_61_rgt)));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1205__input_0 
                = (1U & ((vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                          ^ vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt) 
                         >> 0x00000010U));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1205__input_1 
                = (1U & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                         >> 0x10U));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1205__input_2 
                = (1U & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                         >> 0x10U));
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1205__input_0) 
                   & (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1205__sel));
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1205__input_1) 
                      & ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1205__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1205__input_2) 
                      & ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1205__sel) 
                         >> 2U)));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1205__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_mux_10_itm_3 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1205__Vfuncout;
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
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__1206__vector 
                            = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMantRNE_22U_11U_else_carry_sva;
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__1206__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__1206__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__1206__Vfuncout)))));
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
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1207__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMantRNE_22U_11U_else_and_svs)) 
                 | (0x3fU != (0x0000003fU & ((IData)(1U) 
                                             + (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0))))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1207__input_1 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMantRNE_22U_11U_else_acc_nl));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__1208__vector 
        = (0x3fU == (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__1208__Vfuncout 
        = (0x000003ffU & (- (IData)((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__1208__vector))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1207__input_0 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__1208__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1207__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1207__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1207__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1207__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_37_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1207__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1192__sel 
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
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1192__input_0 
        = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1192__input_2 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1192__input_0) 
           & (- (IData)((1U & (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1192__sel)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result) 
           | (0x3eU & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1192__sel) 
                                        >> 1U))))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1192__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1192__sel) 
                                  >> 2U))))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1192__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_o_expo_lpi_1_dfm 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1192__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_42_cse 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_4)) 
                    | (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_1))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1233__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1233__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1233__input_0 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulw_1.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_16) 
            << 0x00000010U) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulw_1.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10) 
                                << 0x0000000aU) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulw_1.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_9_0)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1233__sel)
            ? __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1233__input_1
            : __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1233__input_0);
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1233__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1233__Vfuncout;
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
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1209__sel 
                        = (1U & (~ (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_6)));
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1209__input_0 
                        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_37_nl;
                    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1209__sel)
                            ? 0x03ffU : (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1209__input_0));
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1209__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1209__Vfuncout))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_2_lpi_1_dfm 
        = ((0U == (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_o_expo_lpi_1_dfm)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_4));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_65_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_3)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_7 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_3) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1215__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_slc_FpMul_6U_10U_p_mant_p1_21_itm_2;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1215__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_42_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1215__input_0 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_or_2_cse) 
                    | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2)) 
                       | ((vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                           >> 0x00000015U) | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_4)) 
                                              | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_4)))))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1215__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1215__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1215__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1215__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_4_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1215__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_49 
        = (1U & ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_3) 
                     & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1))) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1194__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1194__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1194__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1194__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1194__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1194__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1194__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_6 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1194__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__1183__vector 
        = (0x003fffffU & ((0x00000400U | (0x000003ffU 
                                          & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ua_sva_1_15_0_1))) 
                          * (0x00000400U | (0x000003ffU 
                                            & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ub_sva_1_15_0_1)))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__1183__Vfuncout 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__1183__vector;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_mul_tmp 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__1183__Vfuncout;
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
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1211__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_2_lpi_1_dfm)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1211__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_o_expo_lpi_1_dfm;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1211__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1211__input_1)
            : 0U);
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1211__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_FpMul_6U_10U_and_2_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1211__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_FpMul_6U_10U_FpMul_6U_10U_nor_1_nl 
        = (0x000003ffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1210__sel 
                        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_2_lpi_1_dfm;
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1210__input_0 
                        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_nor_nl;
                    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1210__sel)
                            ? 0x03ffU : (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1210__input_0));
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1210__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1210__Vfuncout))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_40_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_65_cse));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_32 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_7)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_11 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_7) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1231__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1231__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1231__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_49)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1231__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1231__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1231__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1231__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_32_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1231__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1226__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_3;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1226__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1226__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_49;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1226__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1226__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1226__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1226__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_27_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1226__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1216__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1216__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)) 
                    | ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_3) 
                           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_7)) 
                              | (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_mul_tmp 
                                 >> 0x00000015U)))) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3)))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1216__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_4_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1216__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1216__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1216__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1216__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_5_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1216__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_4)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_13));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1195__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1195__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_16;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1195__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_6;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1195__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1195__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1195__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1195__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_7 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1195__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1219__sel 
        = (1U & (~ (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1219__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_16;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1219__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_6;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1219__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1219__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1219__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1219__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_10_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1219__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1217__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_42_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1217__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_16;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1217__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_6;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1217__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1217__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1217__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1217__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_8_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1217__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1175__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1175__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_32;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1175__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_32)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1175__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1175__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1175__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1175__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_16_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1175__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1173__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1173__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_11;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1173__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_11)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1173__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1173__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1173__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1173__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_12_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1173__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1227__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1227__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_49;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1227__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_27_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1227__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1227__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1227__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1227__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_28_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1227__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1220__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1220__input_1 
        = (1U & (~ (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_8)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1220__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_10_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1220__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1220__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1220__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1220__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_11_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1220__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1218__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_65_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1218__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_4)) 
                    | (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_8))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1218__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_8_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1218__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1218__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1218__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1218__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_9_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1218__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1176__sel 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_or_2_cse))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1176__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_16_nl;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1176__input_0 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_3) 
                    | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1176__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1176__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1176__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1176__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_17_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1176__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1174__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_or_2_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1174__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_11)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1174__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_12_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1174__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1174__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1174__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1174__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_13_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1174__Vfuncout;
}

void Vsim_HLS_fp17_mul___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulv_1__1(Vsim_HLS_fp17_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp17_mul___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulv_1__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_9;
    HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_9 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1170__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1170__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1170__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1170__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1170__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1170__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1170__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1170__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1171__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1171__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1171__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1171__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1172__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1172__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1172__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1172__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1193__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1193__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1193__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1193__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1193__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1193__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1193__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1193__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1196__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1196__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1196__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1196__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1196__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1196__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1196__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1196__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd 
        = ((0x0000000fU == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_mulw_out_vld)) 
           & ((0x0000000fU == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_mulv_in_b_rdy)) 
              & (IData)(((0x0cU == (0x0cU & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_mulv_in_a_rdy))) 
                         & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulv_0.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__vd 
        = ((0x0000000fU == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_mulw_out_vld)) 
           & ((0x0000000fU == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_mulv_in_a_rdy)) 
              & (IData)(((0x0cU == (0x0cU & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_mulv_in_b_rdy))) 
                         & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulv_0.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt));
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
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1193__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1193__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1193__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1193__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1193__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1193__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1193__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_3 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1193__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_en_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_52 
        = (1U & ((~ (IData)(((0x0000fc00U == (0x0000fc00U 
                                              & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1)))) 
                 | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1196__sel 
        = (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1196__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1196__input_0 
        = ((0x3fU != (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                     >> 0x0000000aU))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1196__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1196__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1196__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1196__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_21 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1196__Vfuncout;
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
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1170__sel 
        = (1U & (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1171__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_en_1) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1171__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1171__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1170__input_1 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1171__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1172__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
            ? 0U : 1U);
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1172__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1172__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1170__input_0 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1172__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1170__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1170__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1170__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1170__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__iMantWidth_oMantWidth_prb 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1170__Vfuncout;
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

void Vsim_HLS_fp17_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulv_1__0(Vsim_HLS_fp17_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp17_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulv_1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1177__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1177__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1177__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1177__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1177__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1177__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1177__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1177__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__1182__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__1182__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__1182__vector;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__1182__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__1187__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__1187__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__1187__vector;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__1187__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1197__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1197__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1197__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1197__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1197__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1197__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1197__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1197__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1198__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1198__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1198__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1198__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1198__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1198__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1198__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1198__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1212__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1212__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1212__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1212__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1212__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1212__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1212__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1212__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1213__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1213__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1213__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1213__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1213__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1213__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1213__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1213__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1214__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1214__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1214__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1214__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1214__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1214__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1214__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1214__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1221__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1221__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1221__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1221__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1221__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1221__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1221__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1221__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1222__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1222__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1222__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1222__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1222__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1222__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1222__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1222__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1223__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1223__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1223__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1223__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1223__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1223__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1223__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1223__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1224__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1224__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1224__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1224__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1224__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1224__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1224__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1224__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1225__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1225__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1225__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1225__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1225__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1225__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1225__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1225__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1228__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1228__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1228__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1228__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1228__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1228__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1228__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1228__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1229__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1229__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1229__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1229__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1229__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1229__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1229__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1229__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1230__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1230__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1230__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1230__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1230__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1230__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1230__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1230__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1232__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1232__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1232__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1232__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1232__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1232__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1232__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1232__sel = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1234__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1234__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1234__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1234__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1234__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1234__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1234__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1234__sel = 0;
    // Body
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1234__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1234__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1234__input_0 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulv_0.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__d;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1234__sel)
            ? __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1234__input_1
            : __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1234__input_0);
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1234__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1234__Vfuncout;
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
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1178__vector 
                            = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x0aU));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1178__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1178__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1178__Vfuncout))) 
                          + VL_EXTEND_II(8,7, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1179__vector 
                            = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                              >> 0x0aU));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1179__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1179__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1179__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_if_2_FpMul_6U_10U_if_2_or_tmp 
        = ((0U == (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
           | (0U == (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_oelse_1_acc_1_nl 
        = (0x000000ffU & ((IData)(0x61U) + VL_EXTEND_II(8,7, 
                                                        ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__1184__vector 
                            = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                              >> 0x0aU));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__1184__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__1184__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__1184__Vfuncout)))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1197__sel 
        = (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1197__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_21;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1197__input_0 
        = ((0x3fU != (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                     >> 0x0000000aU))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_21));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1197__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1197__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1197__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1197__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_22_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1197__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_48 
        = (1U & ((~ (IData)(((0x0000fc00U == (0x0000fc00U 
                                              & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_21)))) 
                 | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1177__sel 
        = (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1177__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_56;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1177__input_0 
        = ((0x3fU != (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                     >> 0x0000000aU))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_56));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1177__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1177__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1177__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1177__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_35_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1177__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_else_2_if_acc_nl 
        = (0x000000ffU & ((IData)(0x51U) + VL_EXTEND_II(8,7, 
                                                        ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__1181__vector 
                            = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_else_2_acc_1_nl));
                        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__Vstatic__tmp 
                            = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__1181__vector), 1U));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__1181__Vfuncout 
                            = (0x0000003fU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__Vstatic__tmp));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1180__vector 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__1181__Vfuncout;
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1180__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1180__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1180__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_oelse_1_acc_nl 
        = (0x000001ffU & (VL_EXTEND_II(9,8, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__1185__vector 
                            = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_oelse_1_acc_1_nl));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__1185__Vfuncout 
                            = ((0x00000080U & ((IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__1185__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__1185__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__1185__Vfuncout))) 
                          + VL_EXTEND_II(9,8, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__1186__vector 
                            = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x0aU));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__1186__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__1186__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__1186__Vfuncout)))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1198__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1198__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_22_nl;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1198__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_32)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1198__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1198__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1198__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1198__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_23 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1198__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_61_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_35_nl) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__1182__vector 
        = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_else_2_if_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp 
        = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__1182__vector), 6U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__1182__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__1182__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__1187__vector 
        = (0x000000ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_oelse_1_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__1187__vector), 7U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__1187__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_oelse_1_acc_itm_7_1 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__1187__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1224__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1224__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1224__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_48;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1224__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1224__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1224__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1224__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_25_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1224__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1229__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1229__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1229__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_52;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1229__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1229__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1229__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1229__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_30_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1229__Vfuncout;
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
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1225__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_68_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1225__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_48;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1225__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_25_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1225__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1225__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1225__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1225__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_26_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1225__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1230__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_68_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1230__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_52;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1230__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_30_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1230__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1230__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1230__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1230__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_31_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1230__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1212__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1212__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1212__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_4;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1212__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1212__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1212__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1212__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1212__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_40 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_4)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1228__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1228__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_26_nl;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1228__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_28_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1228__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1228__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1228__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1228__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_29_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1228__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1232__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1232__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_31_nl)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1232__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_32_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1232__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1232__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1232__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1232__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_33_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1232__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1213__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1213__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_4;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1213__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1213__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1213__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1213__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1213__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_1_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1213__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1221__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1221__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1221__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_40;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1221__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1221__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1221__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1221__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_18_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1221__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1214__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1214__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_4)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1214__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_1_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1214__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1214__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1214__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1214__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_2_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1214__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1222__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1222__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_40;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1222__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_18_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1222__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1222__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1222__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1222__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_19_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1222__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1223__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_65_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1223__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_40)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1223__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_19_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1223__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1223__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1223__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1223__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_20_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1223__Vfuncout;
}

void Vsim_HLS_fp17_mul___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulv_2__0(Vsim_HLS_fp17_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp17_mul___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulv_2__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1238__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1238__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1238__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1238__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1238__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1238__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1238__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1238__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1239__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1239__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1239__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1239__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1239__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1239__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1239__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1239__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1240__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1240__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1240__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1240__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1240__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1240__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1240__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1240__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1241__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1241__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1241__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1241__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1241__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1241__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1241__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1241__sel = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__1248__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__1248__Vfuncout = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__1248__vector;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__1248__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__1253__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__1253__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__1253__vector;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__1253__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1254__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1254__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1254__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1254__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1254__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1254__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1254__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1254__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1255__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1255__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1255__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1255__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1255__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1255__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1255__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1255__sel = 0;
    IData/*19:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__1256__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__1256__Vfuncout = 0;
    IData/*19:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__1256__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__1256__input_0 = 0;
    IData/*19:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__1256__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__1256__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__1256__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__1256__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1257__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1257__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1257__input_2;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1257__input_2 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1257__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1257__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1257__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1257__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1259__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1259__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1259__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1259__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1259__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1259__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1259__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1259__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1260__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1260__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1260__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1260__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1260__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1260__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1260__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1260__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1264__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1264__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1264__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1264__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1264__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1264__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1264__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1264__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1265__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1265__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1265__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1265__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1265__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1265__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1265__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1265__sel = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1266__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1266__Vfuncout = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1266__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1266__input_0 = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1266__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1266__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1266__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1266__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1267__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1267__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1267__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1267__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1267__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1267__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1267__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1267__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1268__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1268__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1268__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1268__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1268__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1268__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1268__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1268__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1269__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1269__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1269__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1269__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1269__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1269__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1269__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1269__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1270__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1270__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1270__input_2;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1270__input_2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1270__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1270__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1270__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1270__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1270__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1270__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1272__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1272__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1272__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1272__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1272__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1272__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1272__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1272__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__1273__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__1273__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__1273__vector;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__1273__vector = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1276__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1276__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1276__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1276__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1276__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1276__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1280__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1280__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1280__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1280__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1280__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1280__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1280__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1280__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1281__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1281__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1281__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1281__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1281__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1281__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1281__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1281__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1282__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1282__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1282__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1282__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1282__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1282__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1282__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1282__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1283__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1283__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1283__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1283__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1283__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1283__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1283__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1283__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1284__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1284__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1284__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1284__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1284__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1284__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1284__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1284__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1285__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1285__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1285__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1285__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1285__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1285__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1285__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1285__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1291__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1291__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1291__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1291__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1291__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1291__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1291__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1291__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1292__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1292__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1292__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1292__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1292__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1292__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1292__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1292__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1296__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1296__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1296__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1296__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1296__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1296__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1296__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1296__sel = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1298__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1298__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1298__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1298__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1298__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1298__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1298__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1298__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_to_fp16_2.__PVT__HLS_fp17_to_fp16_core_inst__DOT__chn_a_rsci_ld_core_psct) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_to_fp16_2.__PVT__HLS_fp17_to_fp16_core_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp16_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
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
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__1253__vector 
        = (0x0000003fU & ((IData)(1U) + (0x00000020U 
                                         | (0x0000001fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_sva_5) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp 
        = (0x0000003fU & VL_SHIFTR_III(6,6,32, (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__1253__vector), 5U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__1253__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_if_if_acc_1_itm_5_1 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__1253__Vfuncout;
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
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1264__sel 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_or_2_cse;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1264__input_1 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_9_0_itm_2;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1264__input_0 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_FpMul_6U_10U_FpMul_6U_10U_nor_1_nl;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1264__sel)
                    ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1264__input_1)
                    : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1264__input_0));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1264__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_9_0 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1264__Vfuncout;
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
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1266__sel 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_40_rgt;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1266__input_1 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1266__input_0 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_mul_tmp;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1266__sel)
                    ? __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1266__input_1
                    : __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1266__input_0);
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1266__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__1266__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 = 0U;
    }
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__1256__sel 
        = (1U & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                 >> 0x15U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__1256__input_1 
        = (0x000fffffU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                          >> 1U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__1256__input_0 
        = (0x000fffffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2);
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__1256__sel)
            ? __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__1256__input_1
            : __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__1256__input_0);
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__1256__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_20_1_lpi_1_dfm_3_mx0 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__1256__Vfuncout;
    vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_6 
        = ((((~ (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                 >> 0x00000015U)) | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_if_if_acc_1_itm_5_1)) 
            & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_4)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_4));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1254__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_if_if_acc_1_itm_5_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1254__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_slc_FpMul_6U_10U_p_mant_p1_21_itm_2;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1254__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_slc_FpMul_6U_10U_p_mant_p1_21_itm_2)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
             & ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2)) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_4)) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10_mx0c1)))) {
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1265__sel 
                = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10_mx0c1));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1265__input_1 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_FpMul_6U_10U_and_2_nl;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1265__input_0 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_15_10_itm_2;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1265__sel)
                    ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1265__input_1)
                    : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1265__input_0));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1265__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1265__Vfuncout;
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
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1268__sel 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_28;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1268__input_1 
                = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ua_sva_1_15_0_1));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1268__input_0 
                = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ub_sva_1_15_0_1));
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1268__sel)
                    ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1268__input_1)
                    : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1268__input_0));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1268__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_9_0_itm_2 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1268__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
              & (((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_if_2_FpMul_6U_10U_if_2_or_tmp) 
                      | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_oelse_1_acc_itm_7_1))) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_45_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_23))) {
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1269__sel 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_45_rgt;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1269__input_1 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1269__input_0 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1269__sel)
                    ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1269__input_1)
                    : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1269__input_0));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1269__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_3 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1269__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_mux_10_itm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_9_0_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_3 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1254__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1254__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1254__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1254__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_36_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1254__Vfuncout;
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
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1255__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_36_nl) 
           & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
              >> 0x00000015U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1255__input_1 
        = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_sva_5)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1255__input_0 
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
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1267__sel 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_28;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1267__input_1 
                = (0x0000003fU & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ua_sva_1_15_0_1) 
                                  >> 0x0aU));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1267__input_0 
                = (0x0000003fU & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ub_sva_1_15_0_1) 
                                  >> 0x0aU));
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1267__sel)
                    ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1267__input_1)
                    : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1267__input_0));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1267__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_15_10_itm_2 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1267__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_15_10_itm_2 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1255__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1255__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1255__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1255__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1255__Vfuncout;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_52_rgt) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_60_rgt)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_61_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_3))) {
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1270__sel 
                = (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_52_rgt) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_60_rgt) 
                               << 1U) | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_61_rgt)));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1270__input_0 
                = (1U & ((vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                          ^ vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt) 
                         >> 0x00000010U));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1270__input_1 
                = (1U & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                         >> 0x10U));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1270__input_2 
                = (1U & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                         >> 0x10U));
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1270__input_0) 
                   & (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1270__sel));
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1270__input_1) 
                      & ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1270__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1270__input_2) 
                      & ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1270__sel) 
                         >> 2U)));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1270__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_mux_10_itm_3 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__1270__Vfuncout;
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
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__1271__vector 
                            = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMantRNE_22U_11U_else_carry_sva;
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__1271__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__1271__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__1271__Vfuncout)))));
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
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1272__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMantRNE_22U_11U_else_and_svs)) 
                 | (0x3fU != (0x0000003fU & ((IData)(1U) 
                                             + (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0))))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1272__input_1 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMantRNE_22U_11U_else_acc_nl));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__1273__vector 
        = (0x3fU == (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__1273__Vfuncout 
        = (0x000003ffU & (- (IData)((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__1273__vector))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1272__input_0 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__1273__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1272__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1272__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1272__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1272__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_37_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1272__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1257__sel 
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
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1257__input_0 
        = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1257__input_2 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1257__input_0) 
           & (- (IData)((1U & (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1257__sel)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result) 
           | (0x3eU & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1257__sel) 
                                        >> 1U))))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1257__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1257__sel) 
                                  >> 2U))))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1257__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_o_expo_lpi_1_dfm 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__1257__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_42_cse 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_4)) 
                    | (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_1))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1298__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1298__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1298__input_0 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulw_2.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_16) 
            << 0x00000010U) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulw_2.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10) 
                                << 0x0000000aU) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulw_2.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_9_0)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1298__sel)
            ? __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1298__input_1
            : __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1298__input_0);
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1298__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__1298__Vfuncout;
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
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1274__sel 
                        = (1U & (~ (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_6)));
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1274__input_0 
                        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_37_nl;
                    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1274__sel)
                            ? 0x03ffU : (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1274__input_0));
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1274__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1274__Vfuncout))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_2_lpi_1_dfm 
        = ((0U == (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_o_expo_lpi_1_dfm)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_4));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_65_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_3)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_7 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_3) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1280__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_slc_FpMul_6U_10U_p_mant_p1_21_itm_2;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1280__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_42_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1280__input_0 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_or_2_cse) 
                    | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2)) 
                       | ((vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                           >> 0x00000015U) | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_4)) 
                                              | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_4)))))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1280__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1280__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1280__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1280__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_4_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1280__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_49 
        = (1U & ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_3) 
                     & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1))) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1259__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1259__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1259__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1259__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1259__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1259__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1259__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_6 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1259__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__1248__vector 
        = (0x003fffffU & ((0x00000400U | (0x000003ffU 
                                          & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ua_sva_1_15_0_1))) 
                          * (0x00000400U | (0x000003ffU 
                                            & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ub_sva_1_15_0_1)))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__1248__Vfuncout 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__1248__vector;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_mul_tmp 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__1248__Vfuncout;
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
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1276__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_2_lpi_1_dfm)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1276__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_o_expo_lpi_1_dfm;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1276__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1276__input_1)
            : 0U);
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1276__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_FpMul_6U_10U_and_2_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__1276__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_FpMul_6U_10U_FpMul_6U_10U_nor_1_nl 
        = (0x000003ffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1275__sel 
                        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_2_lpi_1_dfm;
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1275__input_0 
                        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_nor_nl;
                    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1275__sel)
                            ? 0x03ffU : (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1275__input_0));
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1275__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__1275__Vfuncout))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_40_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_65_cse));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_32 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_7)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_11 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_7) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1296__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1296__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1296__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_49)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1296__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1296__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1296__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1296__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_32_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1296__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1291__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_3;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1291__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1291__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_49;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1291__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1291__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1291__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1291__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_27_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1291__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1281__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1281__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)) 
                    | ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_3) 
                           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_7)) 
                              | (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_mul_tmp 
                                 >> 0x00000015U)))) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3)))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1281__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_4_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1281__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1281__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1281__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1281__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_5_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1281__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_4)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_13));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1260__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1260__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_16;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1260__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_6;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1260__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1260__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1260__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1260__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_7 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1260__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1284__sel 
        = (1U & (~ (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1284__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_16;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1284__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_6;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1284__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1284__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1284__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1284__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_10_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1284__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1282__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_42_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1282__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_16;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1282__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_6;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1282__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1282__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1282__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1282__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_8_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1282__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1240__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1240__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_32;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1240__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_32)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1240__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1240__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1240__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1240__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_16_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1240__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1238__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1238__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_11;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1238__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_11)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1238__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1238__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1238__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1238__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_12_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1238__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1292__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1292__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_49;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1292__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_27_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1292__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1292__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1292__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1292__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_28_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1292__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1285__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1285__input_1 
        = (1U & (~ (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_8)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1285__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_10_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1285__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1285__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1285__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1285__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_11_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1285__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1283__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_65_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1283__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_4)) 
                    | (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_8))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1283__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_8_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1283__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1283__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1283__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1283__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_9_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1283__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1241__sel 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_or_2_cse))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1241__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_16_nl;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1241__input_0 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_3) 
                    | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1241__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1241__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1241__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1241__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_17_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1241__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1239__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_or_2_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1239__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_11)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1239__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_12_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1239__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1239__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1239__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1239__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_13_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1239__Vfuncout;
}

void Vsim_HLS_fp17_mul___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulv_2__1(Vsim_HLS_fp17_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp17_mul___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulv_2__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_9;
    HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_9 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1235__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1235__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1235__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1235__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1235__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1235__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1235__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1235__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1236__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1236__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1236__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1236__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1237__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1237__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1237__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1237__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1258__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1258__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1258__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1258__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1258__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1258__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1258__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1258__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1261__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1261__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1261__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1261__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1261__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1261__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1261__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1261__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__vd 
        = ((0x0000000fU == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_mulw_out_vld)) 
           & ((0x0000000fU == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_mulv_in_a_rdy)) 
              & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulv_3.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld) 
                 & (3U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_154)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd 
        = ((0x0000000fU == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_mulw_out_vld)) 
           & ((0x0000000fU == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_mulv_in_b_rdy)) 
              & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulv_3.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
                 & (3U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT____VdfgRegularize_h7889ed21_0_156)))));
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
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1258__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1258__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1258__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1258__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1258__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1258__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1258__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_3 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1258__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_en_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_52 
        = (1U & ((~ (IData)(((0x0000fc00U == (0x0000fc00U 
                                              & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1)))) 
                 | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1261__sel 
        = (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1261__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1261__input_0 
        = ((0x3fU != (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                     >> 0x0000000aU))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1261__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1261__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1261__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1261__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_21 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1261__Vfuncout;
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
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1235__sel 
        = (1U & (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1236__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_en_1) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1236__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1236__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1235__input_1 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1236__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1237__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
            ? 0U : 1U);
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1237__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1237__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1235__input_0 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__1237__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1235__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1235__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1235__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1235__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__iMantWidth_oMantWidth_prb 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1235__Vfuncout;
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

void Vsim_HLS_fp17_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulv_2__0(Vsim_HLS_fp17_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp17_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulv_2__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1242__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1242__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1242__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1242__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1242__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1242__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1242__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1242__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__1247__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__1247__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__1247__vector;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__1247__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__1252__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__1252__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__1252__vector;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__1252__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1262__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1262__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1262__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1262__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1262__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1262__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1262__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1262__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1263__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1263__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1263__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1263__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1263__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1263__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1263__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1263__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1277__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1277__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1277__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1277__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1277__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1277__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1277__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1277__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1278__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1278__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1278__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1278__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1278__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1278__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1278__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1278__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1279__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1279__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1279__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1279__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1279__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1279__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1279__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1279__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1286__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1286__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1286__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1286__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1286__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1286__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1286__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1286__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1287__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1287__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1287__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1287__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1287__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1287__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1287__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1287__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1288__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1288__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1288__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1288__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1288__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1288__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1288__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1288__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1289__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1289__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1289__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1289__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1289__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1289__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1289__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1289__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1290__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1290__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1290__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1290__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1290__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1290__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1290__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1290__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1293__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1293__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1293__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1293__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1293__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1293__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1293__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1293__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1294__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1294__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1294__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1294__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1294__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1294__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1294__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1294__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1295__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1295__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1295__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1295__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1295__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1295__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1295__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1295__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1297__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1297__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1297__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1297__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1297__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1297__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1297__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1297__sel = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1299__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1299__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1299__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1299__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1299__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1299__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1299__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1299__sel = 0;
    // Body
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1299__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1299__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1299__input_0 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulv_0.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__d;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1299__sel)
            ? __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1299__input_1
            : __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1299__input_0);
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1299__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__1299__Vfuncout;
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
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1243__vector 
                            = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x0aU));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1243__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1243__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1243__Vfuncout))) 
                          + VL_EXTEND_II(8,7, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1244__vector 
                            = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                              >> 0x0aU));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1244__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1244__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1244__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_if_2_FpMul_6U_10U_if_2_or_tmp 
        = ((0U == (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
           | (0U == (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_oelse_1_acc_1_nl 
        = (0x000000ffU & ((IData)(0x61U) + VL_EXTEND_II(8,7, 
                                                        ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__1249__vector 
                            = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                              >> 0x0aU));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__1249__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__1249__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__1249__Vfuncout)))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1262__sel 
        = (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1262__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_21;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1262__input_0 
        = ((0x3fU != (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                     >> 0x0000000aU))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_21));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1262__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1262__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1262__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1262__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_22_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1262__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_48 
        = (1U & ((~ (IData)(((0x0000fc00U == (0x0000fc00U 
                                              & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_21)))) 
                 | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1242__sel 
        = (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1242__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_56;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1242__input_0 
        = ((0x3fU != (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                     >> 0x0000000aU))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_56));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1242__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1242__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1242__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1242__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_35_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1242__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_else_2_if_acc_nl 
        = (0x000000ffU & ((IData)(0x51U) + VL_EXTEND_II(8,7, 
                                                        ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__1246__vector 
                            = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_else_2_acc_1_nl));
                        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__Vstatic__tmp 
                            = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__1246__vector), 1U));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__1246__Vfuncout 
                            = (0x0000003fU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__Vstatic__tmp));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1245__vector 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__1246__Vfuncout;
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1245__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1245__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__1245__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_oelse_1_acc_nl 
        = (0x000001ffU & (VL_EXTEND_II(9,8, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__1250__vector 
                            = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_oelse_1_acc_1_nl));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__1250__Vfuncout 
                            = ((0x00000080U & ((IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__1250__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__1250__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__1250__Vfuncout))) 
                          + VL_EXTEND_II(9,8, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__1251__vector 
                            = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x0aU));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__1251__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__1251__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__1251__Vfuncout)))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1263__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1263__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_22_nl;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1263__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_32)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1263__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1263__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1263__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1263__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_23 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1263__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_61_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_35_nl) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__1247__vector 
        = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_else_2_if_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp 
        = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__1247__vector), 6U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__1247__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__1247__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__1252__vector 
        = (0x000000ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_oelse_1_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__1252__vector), 7U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__1252__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_oelse_1_acc_itm_7_1 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__1252__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1289__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1289__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1289__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_48;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1289__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1289__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1289__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1289__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_25_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1289__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1294__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1294__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1294__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_52;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1294__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1294__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1294__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1294__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_30_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1294__Vfuncout;
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
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1290__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_68_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1290__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_48;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1290__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_25_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1290__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1290__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1290__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1290__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_26_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1290__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1295__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_68_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1295__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_52;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1295__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_30_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1295__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1295__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1295__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1295__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_31_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1295__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1277__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1277__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1277__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_4;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1277__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1277__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1277__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1277__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1277__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_40 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_4)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1293__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1293__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_26_nl;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1293__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_28_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1293__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1293__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1293__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1293__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_29_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1293__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1297__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1297__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_31_nl)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1297__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_32_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1297__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1297__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1297__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1297__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_33_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1297__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1278__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1278__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_4;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1278__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1278__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1278__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1278__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1278__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_1_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1278__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1286__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1286__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1286__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_40;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1286__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1286__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1286__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1286__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_18_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1286__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1279__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1279__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_4)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1279__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_1_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1279__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1279__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1279__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1279__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_2_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1279__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1287__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1287__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_40;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1287__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_18_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1287__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1287__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1287__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1287__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_19_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1287__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1288__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_65_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1288__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_40)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1288__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_19_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1288__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1288__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1288__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1288__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_20_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__1288__Vfuncout;
}
