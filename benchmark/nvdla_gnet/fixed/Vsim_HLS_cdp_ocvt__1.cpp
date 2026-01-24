// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_HLS_cdp_ocvt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__u_HLS_cdp_ocvt_2__0(Vsim_HLS_cdp_ocvt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_cdp_ocvt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__u_HLS_cdp_ocvt_2__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__339__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__339__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__339__vector;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__339__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_6_1_5__341__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_6_1_5__341__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_6_1_5__341__vector;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_6_1_5__341__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__343__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__343__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__343__vector;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__343__vector = 0;
    QData/*49:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__458__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__458__Vfuncout = 0;
    QData/*49:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__458__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__458__input_0 = 0;
    QData/*49:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__458__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__458__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__458__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__458__sel = 0;
    // Body
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__458__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bcwt;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__458__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_d_bfwt;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__458__input_0 
        = (0x0003ffffffffffffULL & (((QData)((IData)(
                                                     vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__p1_pipe_data[4U])) 
                                     << 0x0000001cU) 
                                    | ((QData)((IData)(
                                                       vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__p1_pipe_data[3U])) 
                                       >> 4U)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__458__sel)
            ? __Vfunc_HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__458__input_1
            : __Vfunc_HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__458__input_0);
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__458__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_d_mxwt 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__458__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntSubExt_33U_32U_34U_o_acc_nl 
        = (0x00000007ffffffffULL & (VL_EXTEND_QQ(35,34, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_33_34__436__vector 
                            = (0x00000001ffffffffULL 
                               & vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_d_mxwt);
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_33_34__436__Vfuncout 
                            = (((QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_33_34__436__vector 
                                                            >> 0x20U))))) 
                                << 0x00000021U) | vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_33_34__436__vector);
                    }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_33_34__436__Vfuncout)) 
                                    - VL_EXTEND_QQ(35,34, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_32_34__437__vector 
                            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_datout_offset_use;
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_32_34__437__Vfuncout 
                            = (((QData)((IData)((3U 
                                                 & (- (IData)(
                                                              (vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_32_34__437__vector 
                                                               >> 0x1fU)))))) 
                                << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_32_34__437__vector)));
                    }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_32_34__437__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntSubExt_25U_25U_26U_1_o_acc_itm_2 
        = (0x07ffffffU & (VL_EXTEND_II(27,26, ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__441__vector 
                            = (0x01ffffffU & (IData)(
                                                     (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_d_mxwt 
                                                      >> 0x19U)));
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__441__Vfuncout 
                            = ((0x02000000U & (vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__441__vector 
                                               << 1U)) 
                               | vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__441__vector);
                    }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__441__Vfuncout)) 
                          - VL_EXTEND_II(27,26, ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__442__vector 
                            = (0x01ffffffU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_datout_offset_use);
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__442__Vfuncout 
                            = ((0x02000000U & (vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__442__vector 
                                               << 1U)) 
                               | vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__442__vector);
                    }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__442__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntSubExt_25U_25U_26U_o_acc_itm_2 
        = (0x07ffffffU & (VL_EXTEND_II(27,26, ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__443__vector 
                            = (0x01ffffffU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_d_mxwt));
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__443__Vfuncout 
                            = ((0x02000000U & (vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__443__vector 
                                               << 1U)) 
                               | vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__443__vector);
                    }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__443__Vfuncout)) 
                          - VL_EXTEND_II(27,26, ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__444__vector 
                            = (0x01ffffffU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_datout_offset_use);
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__444__Vfuncout 
                            = ((0x02000000U & (vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__444__vector 
                                               << 1U)) 
                               | vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__444__vector);
                    }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__444__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_nl 
        = (0x0000007fU & ((IData)(0x3dU) + VL_EXTEND_II(7,6, 
                                                        ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_5_6__340__vector 
                            = (0x0000001fU & (IData)(
                                                     (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_d_mxwt 
                                                      >> 0x0bU)));
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_5_6__340__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_5_6__340__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_5_6__340__Vfuncout)))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_nl 
        = (0x000000ffU & ((IData)(0x51U) + VL_EXTEND_II(8,7, 
                                                        ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_6_7__342__vector 
                            = (0x0000003fU & (IData)(
                                                     (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_d_mxwt 
                                                      >> 0x0aU)));
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_6_7__342__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_6_7__342__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_6_7__342__Vfuncout)))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__339__vector 
        = (0x0000007fU & ((IData)(0x11U) + (0x00000040U 
                                            | (0x0000003fU 
                                               & (~ (IData)(
                                                            (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_d_mxwt 
                                                             >> 0x0000000aU)))))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp 
        = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__339__vector), 6U));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__339__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_itm_6 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__339__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_6_1_5__341__vector 
        = (0x0000003fU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_nl));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp 
        = (0x0000003fU & VL_SHIFTR_III(6,6,32, (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_6_1_5__341__vector), 5U));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_6_1_5__341__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_itm_5_1 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_6_1_5__341__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__343__vector 
        = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_nl));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp 
        = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__343__vector), 6U));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__343__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_acc_itm_6_1 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__343__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_13_nl 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_acc_itm_6_1)) 
                 | (2U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_11_nl 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_itm_5_1) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_13_nl));
}

void Vsim_HLS_cdp_ocvt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__u_HLS_cdp_ocvt_2__1(Vsim_HLS_cdp_ocvt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_cdp_ocvt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__u_HLS_cdp_ocvt_2__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__307__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__307__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__307__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__307__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__307__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__307__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__308__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__308__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__308__vector;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__308__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__311__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__311__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__311__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__311__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__311__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__311__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__311__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__311__sel = 0;
    QData/*49:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__312__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__312__Vfuncout = 0;
    QData/*49:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__312__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__312__input_0 = 0;
    QData/*49:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__312__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__312__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__312__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__312__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__313__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__313__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__313__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__313__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__313__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__313__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__313__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__313__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__314__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__314__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__314__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__314__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__314__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__314__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__314__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__314__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__315__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__315__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__315__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__315__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__315__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__315__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__315__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__315__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__316__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__316__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__316__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__316__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__316__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__316__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__316__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__316__sel = 0;
    SData/*13:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__317__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__317__Vfuncout = 0;
    SData/*13:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__317__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__317__input_0 = 0;
    SData/*13:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__317__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__317__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__317__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__317__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__318__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__318__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__318__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__318__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__318__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__318__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__318__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__318__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__319__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__319__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__319__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__319__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__319__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__319__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__319__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__319__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__320__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__320__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__320__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__320__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__320__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__320__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__320__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__320__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__321__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__321__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__321__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__321__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__321__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__321__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__321__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__321__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__325__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__325__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__325__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__325__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__325__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__325__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__325__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__325__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__326__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__326__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__326__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__326__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__326__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__326__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__326__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__326__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__327__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__327__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__327__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__327__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__327__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__327__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__327__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__327__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__328__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__328__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__328__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__328__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__328__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__328__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__328__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__328__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__329__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__329__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__329__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__329__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__329__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__329__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__329__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__329__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__330__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__330__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__330__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__330__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__330__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__330__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__330__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__330__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__331__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__331__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__331__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__331__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__331__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__331__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__331__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__331__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__332__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__332__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__332__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__332__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__332__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__332__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__332__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__332__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__333__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__333__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__333__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__333__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__333__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__333__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__333__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__333__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__359__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__359__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__359__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__359__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__359__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__359__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__359__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__359__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__360__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__360__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__360__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__360__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__360__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__360__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__360__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__360__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__361__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__361__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__361__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__361__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__361__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__361__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__361__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__361__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__362__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__362__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__362__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__362__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__362__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__362__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__362__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__362__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__403__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__403__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__403__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__403__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__403__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__403__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__403__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__403__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__404__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__404__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__404__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__404__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__404__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__404__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__404__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__404__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__405__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__405__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__405__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__405__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__405__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__405__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__405__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__405__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__406__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__406__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__406__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__406__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__406__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__406__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__406__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__406__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__407__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__407__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__407__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__407__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__407__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__407__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__407__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__407__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__408__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__408__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__408__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__408__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__408__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__408__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__408__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__408__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__409__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__409__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__409__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__409__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__409__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__409__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__409__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__409__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__416__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__416__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__416__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__416__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__416__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__416__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__416__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__416__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__417__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__417__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__417__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__417__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__417__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__417__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__417__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__417__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__418__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__418__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__418__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__418__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__418__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__418__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__418__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__418__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__419__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__419__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__419__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__419__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__419__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__419__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__419__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__419__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__426__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__426__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__426__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__426__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__426__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__426__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__426__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__426__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__427__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__427__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__427__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__427__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__427__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__427__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__427__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__427__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__428__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__428__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__428__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__428__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__428__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__428__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__428__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__428__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__432__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__432__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__432__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__432__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__432__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__432__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__432__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__432__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__433__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__433__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__433__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__433__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__433__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__433__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__433__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__433__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__434__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__434__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__434__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__434__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__434__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__434__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__434__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__434__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__435__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__435__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__435__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__435__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__435__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__435__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__435__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__435__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__cdp_cvtout_output_rdy) 
              & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT____VdfgRegularize_hcdf09104_0_3) 
                 & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__u_HLS_cdp_ocvt_3.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__chn_data_out_rsci__DOT__ld))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_biwt));
    vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__434__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__434__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_94;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__434__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_94)) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__434__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__434__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__434__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__434__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_63_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__434__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__432__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__432__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_29;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__432__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_29)) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__432__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__432__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__432__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__432__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_61_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__432__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_25 
        = (1U & ((2U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5)) 
                 | ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse) 
                        & (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_11))) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__362__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__362__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_26;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__362__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_26)) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__362__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__362__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__362__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__362__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_tmp_50 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__362__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__361__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__361__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__361__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__361__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__361__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__361__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__361__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_tmp_41 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__361__Vfuncout;
    vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_15 
        = (1U & ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2) 
                     & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse))) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_22 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_25 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_3)) 
           & (IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__not_tmp_25 
        = (1U & (~ ((0U == (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5)) 
                    | (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_15))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_86_tmp 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_4)) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_24 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_3));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2_mx0c1 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1)) 
              & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_3_mx0c1 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2)) 
              & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_3)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_40 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_42)) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_35 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__307__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse) 
           & ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_st_3) 
                  | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_st_3))) 
              & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_4) 
                 & ((2U == (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)) 
                    & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1)))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__308__vector 
        = (0x0000007fU & ((IData)(1U) + (0x00000040U 
                                         | ((0x0000003eU 
                                             & ((~ 
                                                 ((IData)(9U) 
                                                  + 
                                                  (~ 
                                                   (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_1_16_0_1 
                                                    >> 0x0000000bU)))) 
                                                << 1U)) 
                                            | (1U & 
                                               (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_1_16_0_1 
                                                >> 0x0aU))))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp 
        = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__308__vector), 6U));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__308__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__307__input_0 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__308__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__307__input_0) 
           & (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__307__sel));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__307__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__shift_0_prb 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__307__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__426__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_135_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_69_nl));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__426__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)) 
                    | (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_13))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__426__input_0 
        = (1U & (~ ((IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_13) 
                    & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__426__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__426__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__426__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__426__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_56_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__426__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__417__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__417__input_1 
        = (1U & (~ ((IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_5) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_42))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__417__input_0 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_91_nl) 
                    | (2U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_6)))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__417__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__417__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__417__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__417__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_42_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__417__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__433__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_3) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_43));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__433__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_29)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__433__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_61_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__433__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__433__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__433__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__433__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_62_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__433__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__416__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__416__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_40_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__416__input_0 
        = (((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__equal_tmp_2) 
                | ((2U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_6)) 
                   | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_5)))) 
            | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_43)) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_3));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__416__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__416__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__416__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__416__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_41_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__416__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_41 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_42));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__427__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__equal_tmp_2)) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_43)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__427__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_26)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__427__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_tmp_50;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__427__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__427__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__427__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__427__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_59_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__427__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__329__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__329__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_94;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__329__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_7_cse;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__329__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__329__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__329__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__329__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_65_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__329__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_153_nl 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_42)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__315__sel 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__315__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__315__input_0 
        = (1U & ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_42) 
                     & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse))) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__315__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__315__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__315__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__315__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_81_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__315__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_144_nl 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__404__sel 
        = (2U == (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__404__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)) 
                    & (~ (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_11)))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__404__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__404__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__404__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__404__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__404__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_19_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__404__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_71 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__not_tmp_42 
        = ((~ ((0U == (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_6)) 
               | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse))) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_3));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_28 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_117 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse) 
                 | ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4) 
                    | (0U == (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_70_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_59 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_69_nl) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_89_rgt 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_acc_itm_6_1)) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_92_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_acc_itm_6_1)) 
              | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_itm_5_1)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__403__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__403__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_16_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__403__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_17_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__403__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__403__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__403__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__403__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_18_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__403__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__331__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__331__input_1 
        = ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_8_nl) 
               | ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_st_3) 
                  | ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_3) 
                     | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_3))))) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_39));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__331__input_0 
        = (1U & (~ ((IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_5) 
                    | ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_st_4)) 
                       | ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_st_4) 
                          | ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_st_4) 
                             | ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_42) 
                                | ((IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_14) 
                                   | ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_4) 
                                      | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_4))))))))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__331__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__331__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__331__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__331__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_70_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__331__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__325__sel 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_6) 
                 >> 1U));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__325__input_1 
        = (IData)((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5) 
                    >> 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_22)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__325__input_0 
        = (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5) 
            >> 1U) & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__325__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__325__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__325__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__325__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_83_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__325__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_or_1_cse 
        = (((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)) 
            & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_35));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_FpExpoWidthDec_6U_5U_10U_1U_1U_if_or_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_40) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_41));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__428__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_3;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__428__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_59_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__428__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_tmp_50;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__428__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__428__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__428__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__428__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_60_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__428__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__330__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__330__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_65_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__330__input_0 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_94));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__330__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__330__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__330__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__330__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_66_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__330__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__328__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_43;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__328__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_153_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__328__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_41;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__328__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__328__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__328__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__328__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_84_tmp 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__328__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__435__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_91_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__435__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__not_tmp_57) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_153_nl));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__435__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_63_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__435__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__435__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__435__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__435__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_64_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__435__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__311__sel 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__311__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_144_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__311__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5)) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__311__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__311__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__311__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__311__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_80_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__311__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__316__sel 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__316__input_1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_144_nl) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_42))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__316__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_81_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__316__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__316__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__316__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__316__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_82_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__316__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__405__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_146_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__405__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_19_nl)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__405__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_25;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__405__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__405__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__405__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__405__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_20_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__405__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__327__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_3;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__327__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_71;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__327__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_tmp_41;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__327__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__327__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__327__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__327__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_57_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__327__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__319__sel 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5) 
                 >> 1U));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__319__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__319__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_71;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__319__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__319__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__319__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__319__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_50_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__319__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__318__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__318__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_28;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__318__input_0 
        = (1U & (~ (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_15)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__318__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__318__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__318__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__318__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_39_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__318__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__332__sel 
        = (0U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__332__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__332__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_28;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__332__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__332__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__332__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__332__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_71_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__332__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__407__sel 
        = (0U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__407__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_28;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__407__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__407__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__407__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__407__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__407__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_22_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__407__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__359__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__359__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__359__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_70_cse;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__359__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__359__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__359__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__359__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_28_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__359__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__418__sel 
        = (0U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__418__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_59;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__418__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__not_tmp_42;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__418__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__418__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__418__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__418__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_43_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__418__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__419__sel 
        = (0U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__419__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_59;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__419__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__not_tmp_42;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__419__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__419__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__419__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__419__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_44_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__419__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__326__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_83_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__326__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_FpExpoWidthDec_6U_5U_10U_1U_1U_else_and_2_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__326__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_nor_2_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__326__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__326__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__326__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__326__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_mux1h_4_itm 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__326__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__312__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_80_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__312__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_sva_mx0w0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__312__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntMulExt_26U_16U_42U_1_o_mul_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__312__sel)
            ? __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__312__input_1
            : __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__312__input_0);
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__312__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_mux1h_1_itm 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__312__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__317__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_82_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__317__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_sva_mx0w0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__317__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_14_1_sva_mx0w0;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__317__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__317__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__317__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__317__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_mux1h_2_itm 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__317__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__406__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__406__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_25;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__406__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_20_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__406__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__406__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__406__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__406__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_21_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__406__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__320__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_69_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__320__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_tmp_41)) 
                    | ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5) 
                       >> 1U))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__320__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_50_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__320__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__320__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__320__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__320__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_51_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__320__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__333__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_112_cse;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__333__input_1 
        = (1U & (~ ((0U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5)) 
                    | (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_15))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__333__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_71_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__333__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__333__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__333__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__333__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_72_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__333__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__408__sel 
        = (0U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__408__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_22_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__408__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__not_tmp_25;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__408__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__408__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__408__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__408__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_23_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__408__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__360__sel 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__360__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_28_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__360__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__360__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__360__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__360__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__360__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_tmp_22 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__360__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__321__sel 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__321__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_59)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__321__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_51_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__321__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__321__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__321__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__321__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_52_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__321__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__409__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__409__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_23_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__409__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__not_tmp_25;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__409__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__409__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__409__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__409__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_24_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__409__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__313__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_st_4));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__313__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_tmp_22;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__313__input_0 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_70_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__313__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__313__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__313__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__313__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_32_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__313__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__314__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_42;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__314__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_tmp_22;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__314__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_32_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__314__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__314__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__314__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__314__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_33_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__314__Vfuncout;
}

void Vsim_HLS_cdp_ocvt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__u_HLS_cdp_ocvt_2__2(Vsim_HLS_cdp_ocvt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_cdp_ocvt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__u_HLS_cdp_ocvt_2__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_16;
    HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_16 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__309__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__309__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__309__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__309__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__334__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__334__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__334__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__334__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__334__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__334__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__334__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__334__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__335__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__335__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__335__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__335__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__335__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__335__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__335__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__335__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__336__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__336__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__336__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__336__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__336__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__336__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__336__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__336__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__337__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__337__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__337__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__337__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__338__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__338__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__338__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__338__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__363__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__363__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__363__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__363__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__363__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__363__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__363__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__363__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__364__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__364__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__364__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__364__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__364__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__364__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__364__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__364__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__365__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__365__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__365__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__365__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__365__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__365__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__365__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__365__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__395__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__395__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__395__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__395__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__395__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__395__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__395__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__395__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__396__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__396__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__396__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__396__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__396__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__396__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__396__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__396__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__397__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__397__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__397__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__397__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__397__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__397__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__397__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__397__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__398__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__398__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__398__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__398__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__398__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__398__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__398__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__398__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__399__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__399__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__399__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__399__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__399__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__399__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__399__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__399__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__400__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__400__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__400__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__400__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__400__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__400__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__400__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__400__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__420__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__420__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__420__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__420__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__420__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__420__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__420__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__420__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__421__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__421__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__421__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__421__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__421__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__421__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__421__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__421__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__422__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__422__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__422__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__422__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__422__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__422__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__422__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__422__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__423__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__423__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__423__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__423__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__423__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__423__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__423__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__423__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__438__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__438__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__438__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__438__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__438__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__438__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__438__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__438__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__439__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__439__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__439__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__439__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__439__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__439__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__439__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__439__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__440__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__440__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__440__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__440__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__440__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__440__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__440__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__440__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT____VdfgRegularize_hcdf09104_0_1) 
              & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__u_HLS_cdp_ocvt_3.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__chn_data_in_rsci__DOT__ld)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_biwt));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1_mx0c1 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt)) 
              & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_10 
        = ((IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt));
    vlSelfRef.__PVT__chn_data_in_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse) 
           & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt) 
              & (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__395__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__395__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt)) 
                    | (2U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use)))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__395__input_0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_7_cse)) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__395__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__395__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__395__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__395__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_8_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__395__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_15 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt) 
           & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__420__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__420__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_69_nl)) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__420__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_59;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__420__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__420__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__420__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__420__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_45_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__420__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__363__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__363__input_1 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse) 
                        & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_7_cse))) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__363__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_117;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__363__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__363__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__363__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__363__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_73_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__363__Vfuncout;
    vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_9 
        = ((2U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use)) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_en_1 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_11 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_data_in_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt)) 
                 & ((~ (IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0)) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_16 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_15));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__421__sel 
        = (0U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__421__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_59;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__421__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_45_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__421__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__421__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__421__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__421__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_46_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__421__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__364__sel 
        = (2U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__364__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_117;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__364__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_73_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__364__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__364__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__364__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__364__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_tmp_66 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__364__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_tmp_6 
        = ((IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_9) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_ld_core_psct_mx0c0 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_en_1) 
                 | ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__309__sel 
        = (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_en_1) 
            & ((2U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use)) 
               & (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__state_var)
                    ? 2U : 1U) >> 1U))) | ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_10) 
                                           & (2U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__309__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__309__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__iExpoWidth_oExpoWidth_prb 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__309__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__337__sel 
        = (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_en_1) 
            & ((0U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use)) 
               & (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__state_var)
                    ? 2U : 1U) >> 1U))) | ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_10) 
                                           & (0U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__337__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__337__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_nvdla_int_h_ln346_assert_oWidth_ge_aWidth_p_bWidth_1_sig_mx0w1 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__337__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_17 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_en_1)) 
                 | (2U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__400__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__400__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_11;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__400__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_en_1;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__400__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__400__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__400__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__400__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_15_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__400__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__396__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_11_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__396__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__396__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_11;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__396__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__396__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__396__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__396__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_9_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__396__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__398__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_13_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__398__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__398__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_11;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__398__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__398__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__398__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__398__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_11_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__398__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__335__sel 
        = (0U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__335__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__335__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_11;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__335__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__335__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__335__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__335__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_77_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__335__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_52 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_187_ssc 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
           & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2) 
              & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_42) 
                 & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse))));
    HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_16 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_22)) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__338__sel 
        = (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_16) 
            & (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__state_var)
                 ? 2U : 1U) >> 1U)) | ((IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0) 
                                       & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_15)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__338__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__338__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_nvdla_int_h_ln346_assert_oWidth_ge_aWidth_p_bWidth_2_sig_mx0w1 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__338__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__438__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__438__input_1 
        = (1U & (~ ((~ ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use) 
                        & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt))) 
                    & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__438__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_16;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__438__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__438__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__438__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__438__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_67_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__438__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__422__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__422__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_44_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__422__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_46_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__422__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__422__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__422__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__422__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_47_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__422__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__439__sel 
        = (2U == (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__439__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_tmp_6;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__439__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_9)) 
                    & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__439__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__439__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__439__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__439__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_68_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__439__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__365__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__365__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_tmp_66;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__365__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_17;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__365__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__365__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__365__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__365__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_75_itm 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__365__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__334__sel 
        = (1U & (~ (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_2)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__334__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_tmp_66;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__334__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_17;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__334__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__334__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__334__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__334__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_76_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__334__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__397__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_8_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__397__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_en_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_11_nl))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__397__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_9_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__397__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__397__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__397__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__397__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_10_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__397__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__399__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1) 
           & ((2U == (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)) 
              & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_4)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__399__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_11_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__399__input_0 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_acc_itm_6_1) 
           & ((2U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use)) 
              & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_en_1)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__399__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__399__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__399__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__399__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_12_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__399__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__336__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_112_cse;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__336__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_en_1)) 
                    | (0U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use)))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__336__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_77_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__336__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__336__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__336__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__336__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_78_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__336__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_and_cse 
        = ((IData)(HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_16) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_33_nl));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_173_cse 
        = ((IData)(HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_16) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_39_nl));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_and_cse 
        = ((IData)(HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_16) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_52_nl));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_183_cse 
        = ((IData)(HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_16) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_57_nl));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_and_3_cse 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_66_nl)) 
           & (IData)(HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_16));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_and_cse 
        = ((IData)(HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_16) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_70_nl));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__cfg_truncate_and_1_cse 
        = ((IData)(HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_16) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_72_nl));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__423__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__423__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_43_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__423__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_47_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__423__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__423__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__423__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__423__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_48_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__423__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__440__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__440__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_68_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__440__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_tmp_6;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__440__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__440__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__440__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__440__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_69_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__440__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_and_cse 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_76_nl)) 
           & (IData)(HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_16));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntSubExt_25U_25U_26U_1_o_and_cse 
        = ((IData)(HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_16) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_78_nl));
}

void Vsim_HLS_cdp_ocvt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__u_HLS_cdp_ocvt_3__0(Vsim_HLS_cdp_ocvt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_cdp_ocvt___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__u_HLS_cdp_ocvt_3__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*41:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_42_42__463__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_42_42__463__Vfuncout = 0;
    QData/*41:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_42_42__463__vector;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_42_42__463__vector = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__475__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__475__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__475__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__475__input_0 = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__475__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__475__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__475__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__475__sel = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__476__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__476__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__476__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__476__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__476__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__476__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__519__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__519__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__519__input_2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__519__input_2 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__519__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__519__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__519__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__519__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__519__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__519__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__520__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__520__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__520__input_2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__520__input_2 = 0;
    CData/*5:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__520__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__520__input_1 = 0;
    CData/*5:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__520__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__520__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__520__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__520__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__521__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__521__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__521__input_2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__521__input_2 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__521__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__521__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__521__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__521__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__521__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__521__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__522__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__522__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__522__input_2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__522__input_2 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__522__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__522__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__522__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__522__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__522__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__522__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__523__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__523__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__523__input_2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__523__input_2 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__523__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__523__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__523__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__523__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__523__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__523__sel = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__524__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__524__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__524__input_2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__524__input_2 = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__524__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__524__input_1 = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__524__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__524__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__524__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__524__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__525__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__525__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__525__input_2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__525__input_2 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__525__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__525__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__525__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__525__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__525__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__525__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__526__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__526__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__526__input_2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__526__input_2 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__526__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__526__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__526__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__526__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__526__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__526__sel = 0;
    QData/*41:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__527__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__527__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__527__vector;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__527__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__528__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__528__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__528__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__528__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__528__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__528__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__528__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__528__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__529__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__529__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__529__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__529__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__529__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__529__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__529__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__529__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__530__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__530__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__530__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__530__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__530__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__530__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__530__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__530__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__531__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__531__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__531__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__531__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__531__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__531__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__532__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__532__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__532__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__532__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__532__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__532__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__532__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__532__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__533__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__533__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__533__input_2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__533__input_2 = 0;
    SData/*9:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__533__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__533__input_1 = 0;
    SData/*9:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__533__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__533__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__533__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__533__sel = 0;
    QData/*49:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2u_50_50__534__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2u_50_50__534__Vfuncout = 0;
    QData/*49:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2u_50_50__534__vector;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2u_50_50__534__vector = 0;
    QData/*41:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2u_42_42__535__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2u_42_42__535__Vfuncout = 0;
    QData/*41:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2u_42_42__535__vector;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2u_42_42__535__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__536__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__536__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__536__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__536__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__536__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__536__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__536__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__536__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__537__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__537__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__537__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__537__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__537__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__537__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__537__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__537__sel = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__538__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__538__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__538__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__538__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__538__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__538__sel = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__539__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__539__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__539__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__539__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__539__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__539__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__545__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__545__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__545__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__545__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__545__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__545__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__545__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__545__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__547__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__547__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__547__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__547__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__547__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__547__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__547__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__547__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__554__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__554__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__554__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__554__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__554__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__554__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__554__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__554__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__555__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__555__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__555__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__555__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__555__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__555__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__555__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__555__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__563__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__563__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__563__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__563__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__563__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__563__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__563__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__563__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__568__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__568__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__568__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__568__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__568__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__568__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__568__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__568__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__577__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__577__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__577__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__577__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__577__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__577__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__577__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__577__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__578__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__578__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__578__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__578__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__578__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__578__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__578__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__578__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__582__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__582__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__582__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__582__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__582__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__582__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__582__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__582__sel = 0;
    QData/*41:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_rg__DOT__fshr_u__598__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_rg__DOT__fshr_u__598__Vfuncout = 0;
    QData/*41:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_rg__DOT__fshr_u__598__arg1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_rg__DOT__fshr_u__598__arg1 = 0;
    CData/*5:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_rg__DOT__fshr_u__598__arg2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_rg__DOT__fshr_u__598__arg2 = 0;
    QData/*41:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_rg__DOT__fshr_u__599__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_rg__DOT__fshr_u__599__Vfuncout = 0;
    QData/*41:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_rg__DOT__fshr_u__599__arg1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_rg__DOT__fshr_u__599__arg1 = 0;
    CData/*5:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_rg__DOT__fshr_u__599__arg2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_rg__DOT__fshr_u__599__arg2 = 0;
    SData/*10:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__600__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__600__Vfuncout = 0;
    SData/*10:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__600__arg1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__600__arg1 = 0;
    CData/*5:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__600__arg2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__600__arg2 = 0;
    QData/*49:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_rshift_rg__DOT__fshr_u__601__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_rshift_rg__DOT__fshr_u__601__Vfuncout = 0;
    QData/*49:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_rshift_rg__DOT__fshr_u__601__arg1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_rshift_rg__DOT__fshr_u__601__arg1 = 0;
    CData/*5:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_rshift_rg__DOT__fshr_u__601__arg2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_rshift_rg__DOT__fshr_u__601__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__602__arg1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__602__arg1 = 0;
    CData/*6:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__602__arg2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__602__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__602__sbit;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__602__sbit = 0;
    VlWide<4>/*112:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__606__Vfuncout;
    VL_ZERO_W(113, __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__606__Vfuncout);
    VlWide<4>/*112:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__606__arg1;
    VL_ZERO_W(113, __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__606__arg1);
    CData/*5:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__606__arg2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__606__arg2 = 0;
    VlWide<4>/*104:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__607__Vfuncout;
    VL_ZERO_W(105, __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__607__Vfuncout);
    VlWide<4>/*104:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__607__arg1;
    VL_ZERO_W(105, __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__607__arg1);
    CData/*5:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__607__arg2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__607__arg2 = 0;
    VlWide<4>/*104:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__608__Vfuncout;
    VL_ZERO_W(105, __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__608__Vfuncout);
    VlWide<4>/*104:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__608__arg1;
    VL_ZERO_W(105, __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__608__arg1);
    CData/*5:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__608__arg2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__608__arg2 = 0;
    SData/*10:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u__609__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u__609__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u__609__arg2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u__609__arg2 = 0;
    SData/*10:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__610__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__610__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__610__arg2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__610__arg2 = 0;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_4;
    VlWide<4>/*127:0*/ __Vtemp_6;
    // Body
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_data_in_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_biwt)))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntSubExt_25U_25U_26U_1_o_and_cse) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntSubExt_25U_25U_26U_1_o_acc_itm_2 
                = (0x03ffffffU & vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntSubExt_25U_25U_26U_1_o_acc_itm_2);
        }
        if (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_and_cse) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_itm_2 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_itm;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_bits_slc_FpMantDecShiftRight_10U_6U_10U_least_mask_10_itm_2 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_sva) 
                         >> 0x0aU));
        }
        if (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_and_cse) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_sva_2 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_itm;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_acc_sat_sva_1_0_1 
                = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_obits_fixed_acc_tmp));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_acc_sat_sva_1_7_1 
                = (1U & (IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_obits_fixed_acc_tmp 
                                 >> 7U)));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_nor_ovfl_sva_2 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_nor_ovfl_sva_mx0w0;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_acc_sat_sva_1_0_1 
                = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_1_obits_fixed_acc_tmp));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_acc_sat_sva_1_7_1 
                = (1U & (IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_1_obits_fixed_acc_tmp 
                                 >> 7U)));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_nor_ovfl_sva_2 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_nor_ovfl_sva_mx0w0;
        }
    } else {
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntSubExt_25U_25U_26U_1_o_acc_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_bits_slc_FpMantDecShiftRight_10U_6U_10U_least_mask_10_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_sva_2 = 0ULL;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_acc_sat_sva_1_0_1 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_acc_sat_sva_1_7_1 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_nor_ovfl_sva_2 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_acc_sat_sva_1_0_1 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_acc_sat_sva_1_7_1 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_nor_ovfl_sva_2 = 0U;
    }
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_22))) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_56_nl))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_nor_2_itm_2 
                = (0x0000003fU & (~ ([&]() {
                            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__531__sel 
                                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_nor_ovfl_sva_mx0w0;
                            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__531__input_0 
                                = (0x0000003fU & (IData)(
                                                         (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_obits_fixed_acc_tmp 
                                                          >> 1U)));
                            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                                = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__531__sel)
                                    ? 0x3fU : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__531__input_0));
                            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__531__Vfuncout 
                                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
                        }(), (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__531__Vfuncout))));
        }
    } else {
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_nor_2_itm_2 = 0U;
    }
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__core_wten 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_and_cse) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_acc_sat_sva_1_42_1 
                = (1U & (IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_1_obits_fixed_acc_tmp 
                                 >> 0x0000002aU)));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_nand_itm_2 
                = (0x00000007ffffffffULL != (0x00000007ffffffffULL 
                                             & (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_1_obits_fixed_acc_tmp 
                                                >> 7U)));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_acc_sat_sva_1_42_1 
                = (1U & (IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_obits_fixed_acc_tmp 
                                 >> 0x0000002aU)));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_nand_itm_2 
                = (0x00000007ffffffffULL != (0x00000007ffffffffULL 
                                             & (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_obits_fixed_acc_tmp 
                                                >> 7U)));
        }
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_d_mxwt;
        if (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_ld_core_psct_mx0c0))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_ld_core_psct 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_ld_core_psct_mx0c0;
        }
        if (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_and_cse) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_bits_9_0_sva_2 
                = (0x000003ffU & (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_1_16_0_1 
                                  & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_sva)));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_or_itm_2 
                = (IData)((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_sva_mx0w0) 
                            >> 0x0000000aU) | (0U != 
                                               (0x000003ffU 
                                                & (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_1_16_0_1 
                                                   & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_sva_mx0w0))))));
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_22))) 
             & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_21_nl)))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_st_4 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_st_3;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_or_1_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_18_nl))) {
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__528__sel 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_35;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__528__input_1 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_IntShiftRightSat_50U_6U_16U_oelse_IntShiftRightSat_50U_6U_16U_if_unequal_tmp;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__528__input_0 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_st_3;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__528__sel)
                    ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__528__input_1)
                    : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__528__input_0));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__528__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_st_4 
                = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__528__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_or_1_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_24_nl))) {
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__529__sel 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_35;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__529__input_1 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_IntShiftRightSat_50U_6U_16U_oelse_IntShiftRightSat_50U_6U_16U_if_unequal_tmp;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__529__input_0 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_4;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__529__sel)
                    ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__529__input_1)
                    : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__529__input_0));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__529__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_st_4 
                = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__529__Vfuncout;
        }
        if (((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_85_nl) 
               & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen)) 
              & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_i_1_itm 
                = (0x000003ffffffffffULL & vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_mux1h_1_itm);
        }
        if (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_iswt0 
                = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_en_1)) 
                            & (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__state_var)
                                 ? 2U : 1U) >> 1U))));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_iswt0 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_24;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_FpExpoWidthDec_6U_5U_10U_1U_1U_if_or_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_41_nl))) {
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__530__sel 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_41;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__530__input_1 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_if_IntShiftRightSat_50U_6U_16U_if_or_1_nl;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__530__input_0 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_5;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__530__sel)
                    ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__530__input_1)
                    : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__530__input_0));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__530__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_6 
                = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__530__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_22))) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_42_nl))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_5 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_4;
        }
        if (((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_52) 
               & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_IntShiftRightSat_50U_6U_16U_oelse_IntShiftRightSat_50U_6U_16U_if_unequal_tmp)) 
              & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_i_itm 
                = (0x000000ffU & (IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_mux1h_1_itm 
                                          >> 0x2aU)));
        }
        if (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_24) 
                | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_25)))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_25)));
        }
        if ((((((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_88_nl)) 
                & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen)) 
               & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5))) 
              & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2)) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRight_42U_6U_8U_1_obits_fixed_nor_2_1_itm 
                = (0x0000000fU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_mux1h_4_itm));
        }
        if ((((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
                & (0U == (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5))) 
               & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2)) 
              & (~ ((IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_1_obits_fixed_acc_tmp 
                             >> 0x0000002aU)) & (0x00000007ffffffffULL 
                                                 != 
                                                 (0x00000007ffffffffULL 
                                                  & (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_1_obits_fixed_acc_tmp 
                                                     >> 7U)))))) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRight_42U_6U_8U_1_obits_fixed_nor_2_itm 
                = (3U & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_mux1h_4_itm) 
                         >> 4U));
        }
        if (((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
               & (~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__state_var)
                      ? 2U : 1U))) & (~ ((0U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_6)) 
                                         | (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_3))))) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_48_nl))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_lor_lpi_1_dfm 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_lor_lpi_1_dfm_mx1w0;
        }
    } else {
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_acc_sat_sva_1_42_1 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_nand_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_acc_sat_sva_1_42_1 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_nand_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_d_bfwt = 0ULL;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_ld_core_psct = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_bits_9_0_sva_2 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_or_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_st_4 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_st_4 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_st_4 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_i_1_itm = 0ULL;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_iswt0 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_6 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_5 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_i_itm = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_iswt0 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRight_42U_6U_8U_1_obits_fixed_nor_2_1_itm = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRight_42U_6U_8U_1_obits_fixed_nor_2_itm = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_lor_lpi_1_dfm = 0U;
    }
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_3)) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_22))) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen))) {
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__519__sel 
                = ((4U & ((~ (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_8)) 
                          << 2U)) | (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__equal_tmp_2) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_43)));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__520__sel 
                = ((4U & ((~ (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_8)) 
                          << 2U)) | (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__equal_tmp_2) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_43)));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__524__sel 
                = ((4U & ((~ (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_8)) 
                          << 2U)) | (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__equal_tmp_2) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_43)));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__519__input_0 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_0_sva_4;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__520__input_0 
                = (0x0000003fU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_3_itm));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__524__input_0 
                = ((0x0000000cU & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_1_itm_3_1) 
                                   << 2U)) | (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_1_itm_0) 
                                               << 1U) 
                                              | (1U 
                                                 & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_3_itm) 
                                                    >> 9U))));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_16 
                = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_nl) 
                            | (~ (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_8)))));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_17 
                = (1U & (~ ((((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_sva_2 
                               == ([&]() {
                                            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__527__vector 
                                                = (0x000001ffU 
                                                   & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRightSat_42U_6U_8U_1_oif_1_acc_nl));
                                            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__527__Vfuncout 
                                                = (
                                                   (0x000003fffffffe00ULL 
                                                    & ((- (QData)((IData)(
                                                                          (1U 
                                                                           & ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__527__vector) 
                                                                              >> 8U))))) 
                                                       << 9U)) 
                                                   | (QData)((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__527__vector)));
                                        }(), __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__527__Vfuncout)) 
                              | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_oelse_mux_1_nl)) 
                             | (~ (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_8))) 
                            | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_43))));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__519__input_1 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_o_0_sva;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__520__input_1 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_o_6_1_sva;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__524__input_1 
                = (0x0000000fU & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_o_6_1_sva) 
                                  >> 1U));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__519__input_2 
                = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_3_itm));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__520__input_2 
                = (0x0000003fU & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_3_itm) 
                                  >> 1U));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__524__input_2 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_FpExpoWidthDec_6U_5U_10U_1U_1U_or_3_nl;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__519__input_0) 
                   & (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__519__sel));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__520__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__520__sel)))));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__524__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__524__sel)))));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__519__input_1) 
                      & ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__519__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__520__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__520__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__524__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__524__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__519__input_2) 
                      & ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__519__sel) 
                         >> 2U)));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__520__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__520__sel) 
                                          >> 2U))))));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__524__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__524__sel) 
                                          >> 2U))))));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__519__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__520__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__524__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_0 
                = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__519__Vfuncout;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_6_1 
                = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_6_3_2__520__Vfuncout;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_13_10 
                = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_4_3_2__524__Vfuncout;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__521__sel 
                = ((4U & ((~ (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_8)) 
                          << 2U)) | (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__equal_tmp_2) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_43)));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__521__input_0 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_3_itm) 
                         >> 6U));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__521__input_1 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_o_7_sva;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__521__input_2 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_3_itm) 
                         >> 7U));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__521__input_0) 
                   & (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__521__sel));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__521__input_1) 
                      & ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__521__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__521__input_2) 
                      & ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__521__sel) 
                         >> 2U)));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__521__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_7 
                = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__521__Vfuncout;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__522__sel 
                = ((4U & ((~ (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_8)) 
                          << 2U)) | (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__equal_tmp_2) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_43)));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__522__input_0 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_3_itm) 
                         >> 7U));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__522__input_1 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_o_0_sva;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__522__input_2 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_3_itm) 
                         >> 8U));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__522__input_0) 
                   & (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__522__sel));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__522__input_1) 
                      & ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__522__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__522__input_2) 
                      & ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__522__sel) 
                         >> 2U)));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__522__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_8 
                = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__522__Vfuncout;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__523__sel 
                = ((4U & ((~ (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_8)) 
                          << 2U)) | (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__equal_tmp_2) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_43)));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__523__input_0 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_3_itm) 
                         >> 8U));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__523__input_1 
                = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_o_6_1_sva));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__523__input_2 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_3_itm) 
                         >> 9U));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__523__input_0) 
                   & (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__523__sel));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__523__input_1) 
                      & ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__523__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__523__input_2) 
                      & ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__523__sel) 
                         >> 2U)));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__523__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_9 
                = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__523__Vfuncout;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__525__sel 
                = ((4U & ((~ (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_8)) 
                          << 2U)) | (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__equal_tmp_2) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_43)));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__525__input_0 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_1_itm_3_1) 
                         >> 2U));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__525__input_1 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_o_6_1_sva) 
                         >> 5U));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__525__input_2 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_FpExpoWidthDec_6U_5U_10U_1U_1U_or_2_itm_2;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__525__input_0) 
                   & (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__525__sel));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__525__input_1) 
                      & ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__525__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__525__input_2) 
                      & ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__525__sel) 
                         >> 2U)));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__525__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_14 
                = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__525__Vfuncout;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__526__sel 
                = ((4U & ((~ (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_8)) 
                          << 2U)) | (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__equal_tmp_2) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_43)));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__526__input_0 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_15_sva_4;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__526__input_1 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_o_7_sva;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__526__input_2 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_0_sva_4;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__526__input_0) 
                   & (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__526__sel));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__526__input_1) 
                      & ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__526__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__526__input_2) 
                      & ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__526__sel) 
                         >> 2U)));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__526__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_15 
                = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_3_2__526__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_0 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_6_1 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_7 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_8 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_9 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_13_10 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_14 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_15 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_16 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_17 = 0U;
    }
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_137_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_acc_sat_sva_1_42_1) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_nand_itm_2));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_135_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_acc_sat_sva_1_42_1) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_nand_itm_2));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_iswt0));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_iswt0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__538__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_6;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__538__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRight_42U_6U_8U_1_obits_fixed_nor_2_1_itm;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__538__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__538__input_1)
            : 0x0eU);
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__538__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_mux_6_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__538__Vfuncout;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3273 = (
                                                   (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_9) 
                                                     << 9U) 
                                                    | (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_8) 
                                                        << 8U) 
                                                       | ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_7) 
                                                          << 7U))) 
                                                   | (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_6_1) 
                                                       << 1U) 
                                                      | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_0)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_22))) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_67_nl))) {
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2u_50_50__534__vector 
                = (0x0003ffffffffffffULL & VL_MULS_QQQ(50, 
                                                       (0x0003ffffffffffffULL 
                                                        & VL_EXTENDS_QQ(50,34, 
                                                                        (0x00000003ffffffffULL 
                                                                         & vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntSubExt_33U_32U_34U_o_acc_nl))), 
                                                       (0x0003ffffffffffffULL 
                                                        & VL_EXTENDS_QI(50,16, (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_datout_scale_use)))));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2u_50_50__534__Vfuncout 
                = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2u_50_50__534__vector;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntMulExt_34U_16U_50U_return_sva_2 
                = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2u_50_50__534__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__cfg_truncate_and_1_cse) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__cfg_truncate_1_sva_4 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__cfg_truncate_1_sva_3;
        }
    } else {
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntMulExt_34U_16U_50U_return_sva_2 = 0ULL;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__cfg_truncate_1_sva_4 = 0U;
    }
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__607__arg2 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__cfg_truncate_1_sva_4;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__607__arg1[0U] = 0U;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__607__arg1[1U] 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_i_1_itm) 
           << 0x0000001fU);
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__607__arg1[2U] 
        = (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_i_1_itm) 
            >> 1U) | ((IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_i_1_itm 
                               >> 0x00000020U)) << 0x0000001fU));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__607__arg1[3U] 
        = ((IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_i_1_itm 
                    >> 0x00000020U)) >> 1U);
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[0U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__607__arg1[0U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[1U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__607__arg1[1U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[2U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__607__arg1[2U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[3U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__607__arg1[3U];
    VL_SHIFTRS_WWI(105,105,6, __Vtemp_2, vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__607__arg2));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U] 
        = __Vtemp_2[0U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U] 
        = __Vtemp_2[2U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U] 
        = (0x000001ffU & __Vtemp_2[3U]);
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__607__Vfuncout[0U] 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U];
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__607__Vfuncout[1U] 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U];
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__607__Vfuncout[2U] 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U];
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__607__Vfuncout[3U] 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_asn_rndi_sva[0U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__607__Vfuncout[0U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_asn_rndi_sva[1U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__607__Vfuncout[1U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_asn_rndi_sva[2U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__607__Vfuncout[2U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_asn_rndi_sva[3U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_mbits_fixed_rshift_rg__DOT__fshr_u__607__Vfuncout[3U];
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_rg__DOT__fshr_u__598__arg2 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__cfg_truncate_1_sva_4;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__cfg_truncate_and_1_cse) {
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2u_42_42__535__vector 
                = (0x000003ffffffffffULL & VL_MULS_QQQ(42, 
                                                       (0x000003ffffffffffULL 
                                                        & VL_EXTENDS_QI(42,26, vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntSubExt_25U_25U_26U_o_acc_itm_2)), 
                                                       (0x000003ffffffffffULL 
                                                        & VL_EXTENDS_QI(42,16, (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__cfg_mul_in_1_sva_3)))));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2u_42_42__535__Vfuncout 
                = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2u_42_42__535__vector;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntMulExt_26U_16U_42U_return_sva_2 
                = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2u_42_42__535__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntMulExt_26U_16U_42U_return_sva_2 = 0ULL;
    }
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_rg__DOT__fshr_u__598__arg1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntMulExt_26U_16U_42U_return_sva_2;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_rg__DOT__fshr_u__Vstatic__result_t 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_rg__DOT__fshr_u__598__arg1;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_rg__DOT__fshr_u__Vstatic__result 
        = (0x000003ffffffffffULL & VL_SHIFTRS_QQI(42,42,6, vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_rg__DOT__fshr_u__598__arg2)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_rg__DOT__fshr_u__598__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_rg__DOT__fshr_u__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_itm 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_rshift_rg__DOT__fshr_u__598__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__608__arg2 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__cfg_truncate_1_sva_4;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__608__arg1[0U] = 0U;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__608__arg1[1U] 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntMulExt_26U_16U_42U_return_sva_2) 
           << 0x0000001fU);
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__608__arg1[2U] 
        = (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntMulExt_26U_16U_42U_return_sva_2) 
            >> 1U) | ((IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntMulExt_26U_16U_42U_return_sva_2 
                               >> 0x00000020U)) << 0x0000001fU));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__608__arg1[3U] 
        = ((IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntMulExt_26U_16U_42U_return_sva_2 
                    >> 0x00000020U)) >> 1U);
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[0U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__608__arg1[0U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[1U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__608__arg1[1U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[2U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__608__arg1[2U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[3U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__608__arg1[3U];
    VL_SHIFTRS_WWI(105,105,6, __Vtemp_4, vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__608__arg2));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U] 
        = __Vtemp_4[0U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U] 
        = __Vtemp_4[1U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U] 
        = __Vtemp_4[2U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U] 
        = (0x000001ffU & __Vtemp_4[3U]);
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__608__Vfuncout[0U] 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U];
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__608__Vfuncout[1U] 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U];
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__608__Vfuncout[2U] 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U];
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__608__Vfuncout[3U] 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_asn_rndi_sva[0U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__608__Vfuncout[0U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_asn_rndi_sva[1U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__608__Vfuncout[1U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_asn_rndi_sva[2U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__608__Vfuncout[2U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_asn_rndi_sva[3U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_mbits_fixed_rshift_rg__DOT__fshr_u__608__Vfuncout[3U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_o_7_sva 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_acc_sat_sva_1_7_1) 
                        | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_137_cse))) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_nor_ovfl_sva_2))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_o_0_sva 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_acc_sat_sva_1_0_1) 
                        | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_nor_ovfl_sva_2))) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_137_cse))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__chn_data_in_rsci_unreg_inst__DOT__in_0) 
                | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1_mx0c1)))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1_mx0c1)));
        }
        if (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_183_cse) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_6 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_43 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_42;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__equal_tmp_2 
                = (0U == (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5));
        }
        if (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_and_cse) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_sva_2 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_itm;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_22))) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_62_nl))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_15_sva_4 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_15_sva_3;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
             & (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse) 
                 & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2)) 
                | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_3_mx0c1)))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_3 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_3_mx0c1)));
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_FpExpoWidthDec_6U_5U_10U_1U_1U_if_or_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_60_nl))) {
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__532__sel 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_40;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__532__input_1 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_2_16_1;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__532__input_0 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_0_sva_3;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__532__sel)
                    ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__532__input_1)
                    : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__532__input_0));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__532__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_0_sva_4 
                = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__532__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_187_ssc) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_1_itm_3_1 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_itm;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_1_itm_0 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_2_itm) 
                         >> 0x0aU));
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_22))) 
             & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_64_nl)))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_FpExpoWidthDec_6U_5U_10U_1U_1U_or_2_itm_2 
                = (1U & (((((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_2_14_0_1) 
                                >> 0x0eU)) & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_4)) 
                           & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_4))) 
                          | (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_5))) 
                         | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_4)));
        }
        if (((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_209_cse) 
               & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen)) 
              & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2))) {
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__533__sel 
                = ((4U & ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_86_tmp) 
                              | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_84_tmp))) 
                          << 2U)) | ((((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_84_tmp)) 
                                       & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_86_tmp)) 
                                      << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_84_tmp)));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__533__input_0 
                = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_2_itm));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__533__input_1 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_FpExpoWidthDec_6U_5U_10U_1U_1U_FpExpoWidthDec_6U_5U_10U_1U_1U_nand_nl;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__533__input_2 
                = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_2_14_0_1));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__533__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__533__sel)))));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__533__input_1) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__533__sel) 
                                          >> 1U))))));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__533__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__533__sel) 
                                          >> 2U))))));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__533__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_3_itm 
                = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_v_10_3_2__533__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_22))) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_69_nl))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__cfg_truncate_1_sva_3 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_datout_shifter_use;
        }
        if (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntSubExt_25U_25U_26U_1_o_and_cse) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntSubExt_25U_25U_26U_o_acc_itm_2 
                = (0x03ffffffU & vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntSubExt_25U_25U_26U_o_acc_itm_2);
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__cfg_mul_in_1_sva_3 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_datout_scale_use;
        }
    } else {
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_6 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_sva_2 = 0ULL;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_15_sva_4 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_3 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_0_sva_4 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_43 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_1_itm_3_1 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__equal_tmp_2 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_1_itm_0 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_FpExpoWidthDec_6U_5U_10U_1U_1U_or_2_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_3_itm = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__cfg_truncate_1_sva_3 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntSubExt_25U_25U_26U_o_acc_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__cfg_mul_in_1_sva_3 = 0U;
    }
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_o_6_1_sva 
        = (0x0000003fU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__504__sel 
                        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_137_cse;
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__504__input_0 
                        = (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRight_42U_6U_8U_1_obits_fixed_nor_2_itm) 
                            << 4U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRight_42U_6U_8U_1_obits_fixed_nor_2_1_itm));
                    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__504__sel)
                            ? 0x3fU : (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__504__input_0));
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__504__Vfuncout 
                        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__504__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_o_7_sva 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_acc_sat_sva_1_7_1) 
                        | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_135_cse))) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_nor_ovfl_sva_2))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_o_0_sva 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_acc_sat_sva_1_0_1) 
                        | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_nor_ovfl_sva_2))) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_135_cse))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_o_6_1_sva 
        = (0x0000003fU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__503__sel 
                        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_135_cse;
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__503__input_0 
                        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_nor_2_itm_2;
                    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__503__sel)
                            ? 0x3fU : (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__503__input_0));
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__503__Vfuncout 
                        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__503__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_icwt));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_icwt));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__539__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_5;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__539__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_mux_6_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__539__sel)
            ? 0x0fU : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__539__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__539__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_FpExpoWidthDec_6U_5U_10U_1U_1U_or_3_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__539__Vfuncout;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3274 = (
                                                   ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_14) 
                                                    << 0x0000000eU) 
                                                   | (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_out_rsci_d_13_10) 
                                                       << 0x0000000aU) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3273)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_rg__DOT__fshr_u__599__arg2 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__cfg_truncate_1_sva_4;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_rg__DOT__fshr_u__599__arg1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_i_1_itm;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_rg__DOT__fshr_u__Vstatic__result_t 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_rg__DOT__fshr_u__599__arg1;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_rg__DOT__fshr_u__Vstatic__result 
        = (0x000003ffffffffffULL & VL_SHIFTRS_QQI(42,42,6, vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_rg__DOT__fshr_u__599__arg2)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_rg__DOT__fshr_u__599__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_rg__DOT__fshr_u__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_itm 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_rshift_rg__DOT__fshr_u__599__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_and_nl 
        = (1U & ((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_asn_rndi_sva[1U] 
                  >> 0x0000001eU) & (((0U != vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_asn_rndi_sva[0U]) 
                                      | (0U != (0x3fffffffU 
                                                & vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_asn_rndi_sva[1U]))) 
                                     | (~ (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_asn_rndi_sva[3U] 
                                           >> 8U)))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_and_nl 
        = (1U & ((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_asn_rndi_sva[1U] 
                  >> 0x0000001eU) & (((0U != vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_asn_rndi_sva[0U]) 
                                      | (0U != (0x3fffffffU 
                                                & vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_asn_rndi_sva[1U]))) 
                                     | (~ (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_asn_rndi_sva[3U] 
                                           >> 8U)))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRightSat_42U_6U_8U_1_oif_1_acc_nl 
        = (0x000003ffU & ((IData)(0x01ffU) + VL_EXTEND_II(10,9, 
                                                          ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__546__vector 
                            = (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_o_7_sva) 
                                << 7U) | (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_o_6_1_sva) 
                                           << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_o_0_sva)));
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__546__Vfuncout 
                            = ((0x00000100U & ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__546__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__546__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__546__Vfuncout)))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRightSat_42U_6U_8U_1_oif_acc_nl 
        = (0x000003ffU & ((IData)(1U) + VL_EXTEND_II(10,9, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__500__vector 
                            = (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_o_7_sva) 
                                << 7U) | (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_o_6_1_sva) 
                                           << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_o_0_sva)));
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__500__Vfuncout 
                            = ((0x00000100U & ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__500__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__500__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__500__Vfuncout)))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRightSat_42U_6U_8U_oif_1_acc_nl 
        = (0x000003ffU & ((IData)(0x01ffU) + VL_EXTEND_II(10,9, 
                                                          ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__540__vector 
                            = (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_o_7_sva) 
                                << 7U) | (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_o_6_1_sva) 
                                           << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_o_0_sva)));
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__540__Vfuncout 
                            = ((0x00000100U & ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__540__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__540__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__540__Vfuncout)))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRightSat_42U_6U_8U_oif_acc_nl 
        = (0x000003ffU & ((IData)(1U) + VL_EXTEND_II(10,9, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__541__vector 
                            = (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_o_7_sva) 
                                << 7U) | (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_o_6_1_sva) 
                                           << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_o_0_sva)));
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__541__Vfuncout 
                            = ((0x00000100U & ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__541__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__541__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_9__541__Vfuncout)))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__chn_data_in_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_ld_core_psct) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_ogwt));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__chn_data_out_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_ogwt));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_69_nl 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_3)) 
                 | (0U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_6))));
    vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_8 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__equal_tmp_2) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_43));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_and_cse) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_15_sva_3 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_15_sva_mx0w0;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_0_sva_3 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_0_sva_mx0w0;
        }
        if (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_and_3_cse) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_2_16_1 
                = (1U & (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_1_16_0_1 
                         >> 0x10U));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_5 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_4;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_4 
                = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_nor_itm_2) 
                            | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_IsNaN_6U_10U_nand_itm_2))));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_4 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_3;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_4 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_3;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_2_14_0_1 
                = (0x00007fffU & vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_1_16_0_1);
        }
        if (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_173_cse) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_42 
                = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_52) 
              & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_itm 
                = (7U & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_mux1h_2_itm) 
                         >> 0x0bU));
        }
        if (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_70_cse) 
                | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2_mx0c1)))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2_mx0c1)));
        }
        if (((((~ (((((((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4) 
                            >> 1U)) | (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_4))) 
                       | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_st_3)) 
                      | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_st_3)) 
                     | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_3)) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_3)) 
                   | (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_39)))) 
               | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)) 
              & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_52)) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_2_itm 
                = (0x000007ffU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_mux1h_2_itm));
        }
    } else {
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_15_sva_3 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_0_sva_3 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_2_16_1 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_42 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_itm = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_5 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_4 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_4 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_2_14_0_1 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_2_itm = 0U;
    }
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_1_obits_fixed_acc_tmp 
        = (0x00000fffffffffffULL & (VL_EXTEND_QQ(44,43, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_42_43__505__vector 
                            = (0x000003ffffffffffULL 
                               & (((QData)((IData)(
                                                   vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_asn_rndi_sva[3U])) 
                                   << 0x00000021U) 
                                  | (((QData)((IData)(
                                                      vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_asn_rndi_sva[2U])) 
                                      << 1U) | ((QData)((IData)(
                                                                vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_asn_rndi_sva[1U])) 
                                                >> 0x0000001fU))));
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_42_43__505__Vfuncout 
                            = (((QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_42_43__505__vector 
                                                            >> 0x29U))))) 
                                << 0x0000002aU) | vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_42_43__505__vector);
                    }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_42_43__505__Vfuncout)) 
                                    + VL_EXTEND_QQ(44,43, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_1_43__506__vector 
                            = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_and_nl;
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_1_43__506__Vfuncout 
                            = (QData)((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_1_43__506__vector));
                    }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_1_43__506__Vfuncout))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_rshift_rg__DOT__fshr_u__601__arg2 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__cfg_truncate_1_sva_3;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_rshift_rg__DOT__fshr_u__601__arg1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntMulExt_34U_16U_50U_return_sva_2;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_rshift_rg__DOT__fshr_u__Vstatic__result_t 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_rshift_rg__DOT__fshr_u__601__arg1;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_rshift_rg__DOT__fshr_u__Vstatic__result 
        = (0x0003ffffffffffffULL & VL_SHIFTRS_QQI(50,50,6, vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_rshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_rshift_rg__DOT__fshr_u__601__arg2)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_rshift_rg__DOT__fshr_u__601__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_rshift_rg__DOT__fshr_u__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_sva_mx0w0 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_rshift_rg__DOT__fshr_u__601__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__606__arg2 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__cfg_truncate_1_sva_3;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__606__arg1[0U] = 0U;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__606__arg1[1U] 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntMulExt_34U_16U_50U_return_sva_2) 
           << 0x0000001fU);
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__606__arg1[2U] 
        = (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntMulExt_34U_16U_50U_return_sva_2) 
            >> 1U) | ((IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntMulExt_34U_16U_50U_return_sva_2 
                               >> 0x00000020U)) << 0x0000001fU));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__606__arg1[3U] 
        = ((IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntMulExt_34U_16U_50U_return_sva_2 
                    >> 0x00000020U)) >> 1U);
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[0U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__606__arg1[0U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[1U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__606__arg1[1U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[2U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__606__arg1[2U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t[3U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__606__arg1[3U];
    VL_SHIFTRS_WWI(113,113,6, __Vtemp_6, vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result_t, (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__606__arg2));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U] 
        = __Vtemp_6[0U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U] 
        = __Vtemp_6[1U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U] 
        = __Vtemp_6[2U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U] 
        = (0x0001ffffU & __Vtemp_6[3U]);
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__606__Vfuncout[0U] 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[0U];
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__606__Vfuncout[1U] 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[1U];
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__606__Vfuncout[2U] 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[2U];
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__606__Vfuncout[3U] 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__Vstatic__result[3U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_asn_rndi_sva[0U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__606__Vfuncout[0U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_asn_rndi_sva[1U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__606__Vfuncout[1U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_asn_rndi_sva[2U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__606__Vfuncout[2U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_asn_rndi_sva[3U] 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_mbits_fixed_rshift_rg__DOT__fshr_u__606__Vfuncout[3U];
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_obits_fixed_acc_tmp 
        = (0x00000fffffffffffULL & (VL_EXTEND_QQ(44,43, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_42_43__507__vector 
                            = (0x000003ffffffffffULL 
                               & (((QData)((IData)(
                                                   vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_asn_rndi_sva[3U])) 
                                   << 0x00000021U) 
                                  | (((QData)((IData)(
                                                      vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_asn_rndi_sva[2U])) 
                                      << 1U) | ((QData)((IData)(
                                                                vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_asn_rndi_sva[1U])) 
                                                >> 0x0000001fU))));
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_42_43__507__Vfuncout 
                            = (((QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_42_43__507__vector 
                                                            >> 0x29U))))) 
                                << 0x0000002aU) | vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_42_43__507__vector);
                    }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_42_43__507__Vfuncout)) 
                                    + VL_EXTEND_QQ(44,43, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_1_43__508__vector 
                            = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_and_nl;
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_1_43__508__Vfuncout 
                            = (QData)((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_1_43__508__vector));
                    }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_1_43__508__Vfuncout))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_42_42__463__vector 
        = (0x000003ffffffffffULL & VL_MULS_QQQ(42, 
                                               (0x000003ffffffffffULL 
                                                & VL_EXTENDS_QI(42,26, vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntSubExt_25U_25U_26U_1_o_acc_itm_2)), 
                                               (0x000003ffffffffffULL 
                                                & VL_EXTENDS_QI(42,16, (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__cfg_mul_in_1_sva_3)))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_42_42__463__Vfuncout 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_42_42__463__vector;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntMulExt_26U_16U_42U_1_o_mul_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_42_42__463__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_lor_lpi_1_dfm_mx1w0 
        = ((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_sva_2 
            == ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__501__vector 
                        = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRightSat_42U_6U_8U_1_oif_acc_nl));
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__501__Vfuncout 
                        = ((0x000003fffffffe00ULL & 
                            ((- (QData)((IData)((1U 
                                                 & ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__501__vector) 
                                                    >> 8U))))) 
                             << 9U)) | (QData)((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__501__vector)));
                }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__501__Vfuncout)) 
           | (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_i_sva_2 
              == ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_42__502__vector 
                        = (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_o_7_sva) 
                            << 7U) | (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_o_6_1_sva) 
                                       << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_o_0_sva)));
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_42__502__Vfuncout 
                        = ((0x000003ffffffff00ULL & 
                            ((- (QData)((IData)((1U 
                                                 & ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_42__502__vector) 
                                                    >> 7U))))) 
                             << 8U)) | (QData)((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_42__502__vector)));
                }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_42__502__Vfuncout)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_if_IntShiftRightSat_42U_6U_8U_if_or_1_nl 
        = (((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_sva_2 
             == ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__542__vector 
                            = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRightSat_42U_6U_8U_oif_1_acc_nl));
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__542__Vfuncout 
                            = ((0x000003fffffffe00ULL 
                                & ((- (QData)((IData)(
                                                      (1U 
                                                       & ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__542__vector) 
                                                          >> 8U))))) 
                                   << 9U)) | (QData)((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__542__vector)));
                    }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__542__Vfuncout)) 
            | (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_sva_2 
               == ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__543__vector 
                            = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRightSat_42U_6U_8U_oif_acc_nl));
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__543__Vfuncout 
                            = ((0x000003fffffffe00ULL 
                                & ((- (QData)((IData)(
                                                      (1U 
                                                       & ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__543__vector) 
                                                          >> 8U))))) 
                                   << 9U)) | (QData)((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__543__vector)));
                    }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_9_42__543__Vfuncout))) 
           | (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_sva_2 
              == ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_42__544__vector 
                        = (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_o_7_sva) 
                            << 7U) | (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_o_6_1_sva) 
                                       << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_o_0_sva)));
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_42__544__Vfuncout 
                        = ((0x000003ffffffff00ULL & 
                            ((- (QData)((IData)((1U 
                                                 & ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_42__544__vector) 
                                                    >> 7U))))) 
                             << 8U)) | (QData)((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_42__544__vector)));
                }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_8_42__544__Vfuncout)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_91_nl 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_3)) 
                 | (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_8)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_nor_ovfl_sva_mx0w0 
        = (1U & (~ ((IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_1_obits_fixed_acc_tmp 
                             >> 0x0000002aU)) | (0ULL 
                                                 == 
                                                 (0x00000007ffffffffULL 
                                                  & (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_1_obits_fixed_acc_tmp 
                                                     >> 7U))))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp 
        = ((0x00000007ffffffffULL != (0x00000007ffffffffULL 
                                      & (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_1_obits_fixed_acc_tmp 
                                         >> 7U))) & (IData)(
                                                            (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_1_obits_fixed_acc_tmp 
                                                             >> 0x0000002aU)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_and_nl 
        = (1U & ((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_asn_rndi_sva[1U] 
                  >> 0x0000001eU) & (((0U != vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_asn_rndi_sva[0U]) 
                                      | (0U != (0x3fffffffU 
                                                & vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_asn_rndi_sva[1U]))) 
                                     | (~ (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_asn_rndi_sva[3U] 
                                           >> 0x00000010U)))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_obits_fixed_nor_ovfl_sva_mx0w0 
        = (1U & (~ ((IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_obits_fixed_acc_tmp 
                             >> 0x0000002aU)) | (0ULL 
                                                 == 
                                                 (0x00000007ffffffffULL 
                                                  & (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_obits_fixed_acc_tmp 
                                                     >> 7U))))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_209_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_42) 
           | (0U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5)));
    vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_14 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_5)) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_4)));
    vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_13 
        = (1U & (((0x00000007ffffffffULL != (0x00000007ffffffffULL 
                                             & (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_obits_fixed_acc_tmp 
                                                >> 7U))) 
                  & (IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_obits_fixed_acc_tmp 
                             >> 0x0000002aU))) | ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2)) 
                                                  | (0U 
                                                     != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5)))));
    vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_5 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2)) 
                 | (2U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_29 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_42));
    vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_11 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_st_4) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__not_tmp_57 
        = (1U & (~ ((0U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5)) 
                    & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_and_cse) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_nor_itm_2 
                = (0U == (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_d_mxwt)));
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_IsNaN_6U_10U_nand_itm_2 
                = (0x3fU != (0x0000003fU & (IData)(
                                                   (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_d_mxwt 
                                                    >> 0x0aU))));
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_22))) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_8_nl))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_1_16_0_1 
                = (0x0001ffffU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_d_mxwt));
        }
    } else {
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_nor_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_IsNaN_6U_10U_nand_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_1_16_0_1 = 0U;
    }
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRightSat_50U_6U_16U_oif_1_acc_nl 
        = (0x0003ffffU & ((IData)(0x0001ffffU) + VL_EXTEND_II(18,17, 
                                                              ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_17__564__vector 
                            = ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_15_sva_3) 
                                 << 0x0000000fU) | 
                                ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_itm) 
                                 << 0x0000000cU)) | 
                               (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_2_itm) 
                                 << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_0_sva_3)));
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_17__564__Vfuncout 
                            = ((0x00010000U & ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_17__564__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_17__564__vector));
                    }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_17__564__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRightSat_50U_6U_16U_oif_acc_nl 
        = (0x0003ffffU & ((IData)(1U) + VL_EXTEND_II(18,17, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_17__565__vector 
                            = ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_15_sva_3) 
                                 << 0x0000000fU) | 
                                ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_itm) 
                                 << 0x0000000cU)) | 
                               (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_2_itm) 
                                 << 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_0_sva_3)));
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_17__565__Vfuncout 
                            = ((0x00010000U & ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_17__565__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_17__565__vector));
                    }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_17__565__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_FpMantDecShiftRight_10U_6U_10U_o_mant_sum_sva 
        = (0x00000fffU & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_itm_2) 
                          + VL_EXTEND_II(12,11, ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_1_11__511__vector 
                            = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_or_itm_2) 
                               & ((0U != (0x000003ffU 
                                          & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_2_14_0_1) 
                                             & ((IData)(0x03ffU) 
                                                + (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_2_itm))))) 
                                  | ((1U & (((IData)(0x07ffU) 
                                             + (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_o_14_1_2_itm)) 
                                            >> 0x0000000aU)) 
                                     | ((0U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_bits_9_0_sva_2)) 
                                        | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_bits_slc_FpMantDecShiftRight_10U_6U_10U_least_mask_10_itm_2)))));
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_1_11__511__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_1_11__511__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_1_11__511__Vfuncout)))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_22))) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_10_nl))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_st_3 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_itm_6;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_22))) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_12_nl))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_st_3 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_itm_5_1;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_22))) 
             & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_75_itm)))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_4 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_acc_itm_6_1;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_22))) 
             & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_15_nl))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse) 
                  & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_acc_itm_6_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_89_rgt))) 
             & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_75_itm)))) {
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__536__sel 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_89_rgt;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__536__input_1 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__536__input_0 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_itm_5_1;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__536__sel)
                    ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__536__input_1)
                    : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__536__input_0));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__536__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_3 
                = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__536__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
              & ((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse) 
                   & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_acc_itm_6_1)) 
                  & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_itm_5_1))) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_92_rgt))) 
             & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_75_itm)))) {
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__537__sel 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_92_rgt;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__537__input_1 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs;
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__537__input_0 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_itm_6;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__537__sel)
                    ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__537__input_1)
                    : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__537__input_0));
            __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__537__Vfuncout 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_3 
                = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__537__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_st_3 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_st_3 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_4 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_3 = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_3 = 0U;
    }
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_nor_2_nl 
        = (0x0000003fU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__477__sel 
                        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_nor_ovfl_sva_mx0w0;
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__477__input_0 
                        = (0x0000003fU & (IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_42U_6U_8U_1_obits_fixed_acc_tmp 
                                                  >> 1U)));
                    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__477__sel)
                            ? 0x3fU : (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__477__input_0));
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__477__Vfuncout 
                        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__477__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_164 
        = (IData)((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5) 
                    >> 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_50U_6U_16U_obits_fixed_acc_sat_sva 
        = (0x000fffffffffffffULL & (VL_EXTEND_QQ(52,51, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_50_51__509__vector 
                            = (0x0003ffffffffffffULL 
                               & (((QData)((IData)(
                                                   vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_asn_rndi_sva[3U])) 
                                   << 0x00000021U) 
                                  | (((QData)((IData)(
                                                      vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_asn_rndi_sva[2U])) 
                                      << 1U) | ((QData)((IData)(
                                                                vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_asn_rndi_sva[1U])) 
                                                >> 0x0000001fU))));
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_50_51__509__Vfuncout 
                            = (((QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_50_51__509__vector 
                                                            >> 0x31U))))) 
                                << 0x00000032U) | vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_50_51__509__vector);
                    }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_50_51__509__Vfuncout)) 
                                    + VL_EXTEND_QQ(52,51, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_1_51__510__vector 
                            = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_and_nl;
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_1_51__510__Vfuncout 
                            = (QData)((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_1_51__510__vector));
                    }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_1_51__510__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_26 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_209_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_94 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__not_tmp_57) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_42));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_if_IntShiftRightSat_50U_6U_16U_if_or_1_nl 
        = (1U & (((((QData)((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_i_itm)) 
                    << 0x0000002aU) | vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_i_1_itm) 
                  == ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_17_50__566__vector 
                            = (0x0001ffffU & vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRightSat_50U_6U_16U_oif_1_acc_nl);
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_17_50__566__Vfuncout 
                            = ((0x0003fffffffe0000ULL 
                                & ((- (QData)((IData)(
                                                      (1U 
                                                       & (vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_17_50__566__vector 
                                                          >> 0x10U))))) 
                                   << 0x00000011U)) 
                               | (QData)((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_17_50__566__vector)));
                    }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_17_50__566__Vfuncout)) 
                 | (~ (((((QData)((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_i_itm)) 
                          << 0x0000002aU) | vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_IntShiftRightSat_50U_6U_16U_i_1_itm) 
                        != ([&]() {
                                vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_17_50__567__vector 
                                    = (0x0001ffffU 
                                       & vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRightSat_50U_6U_16U_oif_acc_nl);
                                vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_17_50__567__Vfuncout 
                                    = ((0x0003fffffffe0000ULL 
                                        & ((- (QData)((IData)(
                                                              (1U 
                                                               & (vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_17_50__567__vector 
                                                                  >> 0x10U))))) 
                                           << 0x00000011U)) 
                                       | (QData)((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_17_50__567__vector)));
                            }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_17_50__567__Vfuncout)) 
                       & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_st_4)))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__582__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_4;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__582__input_1 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_2_14_0_1));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__582__input_0 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_FpMantDecShiftRight_10U_6U_10U_o_mant_sum_sva));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__582__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__582__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__582__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__582__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_mux_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__582__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__475__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_4;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__475__input_1 
        = (0x0000000fU & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_2_14_0_1) 
                          >> 0x0aU));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__475__input_0 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_FpMantDecShiftRight_10U_6U_10U_o_mant_sum_sva) 
                 >> 0x0000000aU));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__475__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__475__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__475__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__475__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_mux_6_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__475__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__545__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_43;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__545__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_6;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__545__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_if_IntShiftRightSat_42U_6U_8U_if_or_1_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__545__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__545__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__545__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__545__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__545__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__547__sel 
        = (0U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_6));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__547__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_lor_lpi_1_dfm;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__547__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_lor_lpi_1_dfm_mx1w0;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__547__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__547__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__547__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__547__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_1_oelse_mux_1_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__547__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__555__sel 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__555__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__555__input_0 
        = (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5) 
            >> 1U) & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_st_4) 
                      & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_st_4)) 
                         & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__555__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__555__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__555__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__555__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_17_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__555__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__568__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_42;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__568__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__568__input_0 
        = (1U & (~ ((2U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5)) 
                    | ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2)) 
                       | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_4)))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__568__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__568__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__568__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__568__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_40_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__568__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__577__sel 
        = (0U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__577__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp)) 
                    | ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5) 
                       >> 1U))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__577__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_164;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__577__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__577__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__577__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__577__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_87_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__577__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_and_unfl_sva 
        = ((IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_50U_6U_16U_obits_fixed_acc_sat_sva 
                    >> 0x00000032U)) & (0x00000007ffffffffULL 
                                        != (0x00000007ffffffffULL 
                                            & (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_50U_6U_16U_obits_fixed_acc_sat_sva 
                                               >> 0x0000000fU))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_nor_ovfl_sva 
        = (1U & (~ ((IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_50U_6U_16U_obits_fixed_acc_sat_sva 
                             >> 0x00000032U)) | (0ULL 
                                                 == 
                                                 (0x00000007ffffffffULL 
                                                  & (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_50U_6U_16U_obits_fixed_acc_sat_sva 
                                                     >> 0x0000000fU))))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_39 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_IsNaN_6U_10U_nand_itm_2) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_nor_itm_2));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__s 
        = ((0x0000003eU & (((IData)(9U) + (~ (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_1_16_0_1 
                                              >> 0x0000000bU))) 
                           << 1U)) | (1U & (~ (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_1_16_0_1 
                                               >> 0x0000000aU))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg_s 
        = (0x000000ffU & ((IData)(0x7fU) + VL_EXTEND_II(8,7, 
                                                        ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_6_7__459__vector 
                            = ((0x0000003eU & (((IData)(9U) 
                                                + (~ 
                                                   (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_1_16_0_1 
                                                    >> 0x0000000bU))) 
                                               << 1U)) 
                               | (1U & (~ (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_1_16_0_1 
                                           >> 0x0aU))));
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_6_7__459__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_6_7__459__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_6_7__459__Vfuncout)))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_nand_nl 
        = (0x000003ffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__583__sel 
                        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_4)));
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__583__input_1 
                        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_mux_nl;
                    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__583__sel)
                            ? (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__583__input_1)
                            : 0U);
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__583__Vfuncout 
                        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__583__Vfuncout))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__476__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_4)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__476__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_mux_6_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__476__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__476__input_1)
            : 0U);
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__476__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_FpExpoWidthDec_6U_5U_10U_1U_1U_else_and_2_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_4_2_2__476__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_112_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1)) 
                 | (0U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4))));
    vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_2 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1)) 
                 | (2U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_146_nl 
        = (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4) 
            >> 1U) & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_4));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_7_cse 
        = (1U & ((0U == (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__578__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_42) 
           | (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_14));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__578__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_164;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__578__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_87_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__578__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__578__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__578__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__578__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_88_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__578__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_15_sva_mx0w0 
        = (1U & (~ ((~ ((IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_50U_6U_16U_obits_fixed_acc_sat_sva 
                                 >> 0x0000000fU)) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_and_unfl_sva))) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_nor_ovfl_sva))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_0_sva_mx0w0 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_nor_ovfl_sva) 
                        | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_50U_6U_16U_obits_fixed_acc_sat_sva))) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_and_unfl_sva))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
             & (~ (((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_22) 
                      | (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt))) 
                     | (2U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use))) 
                    | (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_acc_itm_6_1))) 
                   | ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__state_var)
                       ? 2U : 1U))))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_itm_5_1;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
             & (~ ((((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_22) 
                       | (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt))) 
                      | (2U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use))) 
                     | (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_acc_itm_6_1))) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_itm_5_1)) 
                   | ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__state_var)
                       ? 2U : 1U))))) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs 
                = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_itm_6;
        }
    } else {
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs = 0U;
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs = 0U;
    }
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_nor_2_nl 
        = (0x00003fffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__498__sel 
                        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_nor_ovfl_sva;
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__498__input_0 
                        = (0x00003fffU & (IData)((vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntShiftRight_50U_6U_16U_obits_fixed_acc_sat_sva 
                                                  >> 1U)));
                    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__498__sel)
                            ? 0x3fffU : (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__498__input_0));
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__498__Vfuncout 
                        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__498__Vfuncout))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__600__arg2 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__s;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__600__arg1 
        = (0x00000400U | (0x000003ffU & vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_1_16_0_1));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result_t = 0U;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result_t 
        = ((0x0800U & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result_t)) 
           | (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__600__arg1));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result 
        = (0x00000fffU & VL_SHIFTRS_III(12,12,6, (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result_t), (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__600__arg2)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__600__Vfuncout 
        = (0x000007ffU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__Vstatic__result));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_itm 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__fshr_u__600__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u__609__arg2 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_rshift_rg__DOT__s;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__610__arg2 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u__609__arg2;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t = 0U;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = (1U | (0x07fcU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x000007ffU & VL_SHIFTL_III(11,11,6, (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t), (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__610__arg2)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__610__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u__609__Vfuncout 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u_1__610__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_sva 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_least_mask_lshift_rg__DOT__fshl_u__609__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__602__sbit = 0U;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__602__arg2 
        = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg_s));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__602__arg1 = 1U;
    if ((0x00000040U & (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__602__arg2))) {
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 
            = (((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__602__sbit) 
                << 1U) | (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__602__arg1));
        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__603__sbit 
            = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__602__sbit;
        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__603__arg2 
            = (0x0000007fU & (~ (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__602__arg2)));
        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__603__arg1 
            = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1) 
                     >> 1U));
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = (0x000007ffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__603__sbit))));
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__Vstatic__result_t 
            = ((0x07feU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__Vstatic__result_t)) 
               | (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__603__arg1));
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__Vstatic__result 
            = (0x000007ffU & VL_SHIFTRS_III(11,11,7, (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__Vstatic__result_t), (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__603__arg2)));
        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__603__Vfuncout 
            = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__602__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshr_u__603__Vfuncout;
    } else {
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__Vstatic__sbit_arg1 = 0U;
        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__604__sbit 
            = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__602__sbit;
        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__604__arg2 
            = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__602__arg2;
        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__604__arg1 
            = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__602__arg1;
        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__605__sbit 
            = vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__604__sbit;
        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__605__arg2 
            = vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__604__arg2;
        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__605__arg1 
            = (((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__604__sbit) 
                << 1U) | (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__604__arg1));
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = (0x000007ffU & (- (IData)((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__605__sbit))));
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
            = ((0x07fcU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t)) 
               | (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__605__arg1));
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result 
            = (0x000007ffU & VL_SHIFTL_III(11,11,7, (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result_t), (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__605__arg2)));
        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__605__Vfuncout 
            = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__Vstatic__result;
        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__604__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u_1__605__Vfuncout;
        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__602__Vfuncout 
            = vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_u__604__Vfuncout;
    }
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_sva_mx0w0 
        = vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_lshift_rg__DOT__fshl_s__602__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_FpExpoWidthDec_6U_5U_10U_1U_1U_FpExpoWidthDec_6U_5U_10U_1U_1U_nand_nl 
        = (0x000003ffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__584__sel 
                        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_5;
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__584__input_1 
                        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_nand_nl;
                    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__584__sel)
                            ? (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__584__input_1)
                            : 0U);
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__584__Vfuncout 
                        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_10_2_2__584__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_8_nl 
        = (1U & ((IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_2) 
                 | ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_4)) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_st_3))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__554__sel 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__554__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__554__input_0 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_146_nl) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_st_3)) 
              & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__554__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__554__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__554__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__554__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_16_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__554__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_14_1_sva_mx0w0 
        = (0x00003fffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__499__sel 
                        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_and_unfl_sva;
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__499__input_0 
                        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_50U_6U_16U_obits_fixed_nor_2_nl;
                    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__499__sel)
                            ? 0x3fffU : (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__499__input_0));
                    vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__499__Vfuncout 
                        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__499__Vfuncout))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__state_var = 1U;
        }
    } else {
        vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__state_var = 0U;
    }
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_IntShiftRightSat_50U_6U_16U_oelse_IntShiftRightSat_50U_6U_16U_if_unequal_tmp 
        = (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_sva_mx0w0 
           != ([&]() {
                vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_50__497__vector 
                    = (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_15_sva_mx0w0) 
                        << 0x0000000fU) | (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_14_1_sva_mx0w0) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_0_sva_mx0w0)));
                vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_50__497__Vfuncout 
                    = ((0x0003ffffffff0000ULL & ((- (QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_50__497__vector) 
                                                                        >> 0x0fU))))) 
                                                 << 0x00000010U)) 
                       | (QData)((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_50__497__vector)));
            }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_16_50__497__Vfuncout));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__563__sel 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__563__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_IntShiftRightSat_50U_6U_16U_oelse_IntShiftRightSat_50U_6U_16U_if_unequal_tmp;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__563__input_0 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4) 
                    >> 1U)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__563__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__563__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__563__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__563__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_85_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__563__Vfuncout;
}

void Vsim_HLS_cdp_ocvt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__u_HLS_cdp_ocvt_3__0(Vsim_HLS_cdp_ocvt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_cdp_ocvt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__u_HLS_cdp_ocvt_3__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__492__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__492__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__492__vector;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__492__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_6_1_5__494__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_6_1_5__494__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_6_1_5__494__vector;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_6_1_5__494__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__496__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__496__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__496__vector;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__496__vector = 0;
    QData/*49:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__611__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__611__Vfuncout = 0;
    QData/*49:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__611__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__611__input_0 = 0;
    QData/*49:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__611__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__611__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__611__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__611__sel = 0;
    // Body
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__611__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bcwt;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__611__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_d_bfwt;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__611__input_0 
        = (0x0003ffffffffffffULL & (((QData)((IData)(
                                                     vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__p1_pipe_data[6U])) 
                                     << 0x0000002aU) 
                                    | (((QData)((IData)(
                                                        vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__p1_pipe_data[5U])) 
                                        << 0x0000000aU) 
                                       | ((QData)((IData)(
                                                          vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__p1_pipe_data[4U])) 
                                          >> 0x00000016U))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__611__sel)
            ? __Vfunc_HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__611__input_1
            : __Vfunc_HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__611__input_0);
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__611__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_d_mxwt 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__MUX_v_50_2_2__611__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntSubExt_33U_32U_34U_o_acc_nl 
        = (0x00000007ffffffffULL & (VL_EXTEND_QQ(35,34, 
                                                 ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_33_34__589__vector 
                            = (0x00000001ffffffffULL 
                               & vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_d_mxwt);
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_33_34__589__Vfuncout 
                            = (((QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_33_34__589__vector 
                                                            >> 0x20U))))) 
                                << 0x00000021U) | vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_33_34__589__vector);
                    }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_33_34__589__Vfuncout)) 
                                    - VL_EXTEND_QQ(35,34, 
                                                   ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_32_34__590__vector 
                            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_datout_offset_use;
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_32_34__590__Vfuncout 
                            = (((QData)((IData)((3U 
                                                 & (- (IData)(
                                                              (vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_32_34__590__vector 
                                                               >> 0x1fU)))))) 
                                << 0x00000020U) | (QData)((IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_32_34__590__vector)));
                    }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_32_34__590__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntSubExt_25U_25U_26U_1_o_acc_itm_2 
        = (0x07ffffffU & (VL_EXTEND_II(27,26, ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__594__vector 
                            = (0x01ffffffU & (IData)(
                                                     (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_d_mxwt 
                                                      >> 0x19U)));
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__594__Vfuncout 
                            = ((0x02000000U & (vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__594__vector 
                                               << 1U)) 
                               | vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__594__vector);
                    }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__594__Vfuncout)) 
                          - VL_EXTEND_II(27,26, ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__595__vector 
                            = (0x01ffffffU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_datout_offset_use);
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__595__Vfuncout 
                            = ((0x02000000U & (vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__595__vector 
                                               << 1U)) 
                               | vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__595__vector);
                    }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__595__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_IntSubExt_25U_25U_26U_o_acc_itm_2 
        = (0x07ffffffU & (VL_EXTEND_II(27,26, ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__596__vector 
                            = (0x01ffffffU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_d_mxwt));
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__596__Vfuncout 
                            = ((0x02000000U & (vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__596__vector 
                                               << 1U)) 
                               | vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__596__vector);
                    }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__596__Vfuncout)) 
                          - VL_EXTEND_II(27,26, ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__597__vector 
                            = (0x01ffffffU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_datout_offset_use);
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__597__Vfuncout 
                            = ((0x02000000U & (vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__597__vector 
                                               << 1U)) 
                               | vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__597__vector);
                    }(), vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_s2s_25_26__597__Vfuncout))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_nl 
        = (0x0000007fU & ((IData)(0x3dU) + VL_EXTEND_II(7,6, 
                                                        ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_5_6__493__vector 
                            = (0x0000001fU & (IData)(
                                                     (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_d_mxwt 
                                                      >> 0x0bU)));
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_5_6__493__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_5_6__493__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2u_5_6__493__Vfuncout)))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_nl 
        = (0x000000ffU & ((IData)(0x51U) + VL_EXTEND_II(8,7, 
                                                        ([&]() {
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_6_7__495__vector 
                            = (0x0000003fU & (IData)(
                                                     (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_d_mxwt 
                                                      >> 0x0aU)));
                        vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_6_7__495__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_6_7__495__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_cdp_ocvt_core_inst__DOT__conv_u2s_6_7__495__Vfuncout)))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__492__vector 
        = (0x0000007fU & ((IData)(0x11U) + (0x00000040U 
                                            | (0x0000003fU 
                                               & (~ (IData)(
                                                            (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_d_mxwt 
                                                             >> 0x0000000aU)))))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp 
        = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__492__vector), 6U));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__492__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_itm_6 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__492__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_6_1_5__494__vector 
        = (0x0000003fU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_nl));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp 
        = (0x0000003fU & VL_SHIFTR_III(6,6,32, (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_6_1_5__494__vector), 5U));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_6_1_5__494__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_itm_5_1 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_6_1_5__494__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__496__vector 
        = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nl_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_nl));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp 
        = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__496__vector), 6U));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__496__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_acc_itm_6_1 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__496__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_13_nl 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_acc_itm_6_1)) 
                 | (2U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_11_nl 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_itm_5_1) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_13_nl));
}

void Vsim_HLS_cdp_ocvt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__u_HLS_cdp_ocvt_3__1(Vsim_HLS_cdp_ocvt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_cdp_ocvt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__u_HLS_cdp_ocvt_3__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__460__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__460__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__460__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__460__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__460__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__460__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__461__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__461__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__461__vector;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__461__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__464__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__464__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__464__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__464__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__464__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__464__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__464__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__464__sel = 0;
    QData/*49:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__465__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__465__Vfuncout = 0;
    QData/*49:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__465__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__465__input_0 = 0;
    QData/*49:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__465__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__465__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__465__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__465__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__466__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__466__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__466__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__466__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__466__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__466__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__466__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__466__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__467__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__467__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__467__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__467__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__467__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__467__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__467__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__467__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__468__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__468__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__468__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__468__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__468__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__468__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__468__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__468__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__469__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__469__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__469__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__469__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__469__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__469__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__469__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__469__sel = 0;
    SData/*13:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__470__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__470__Vfuncout = 0;
    SData/*13:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__470__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__470__input_0 = 0;
    SData/*13:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__470__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__470__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__470__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__470__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__471__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__471__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__471__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__471__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__471__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__471__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__471__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__471__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__472__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__472__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__472__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__472__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__472__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__472__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__472__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__472__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__473__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__473__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__473__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__473__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__473__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__473__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__473__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__473__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__474__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__474__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__474__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__474__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__474__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__474__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__474__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__474__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__478__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__478__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__478__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__478__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__478__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__478__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__478__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__478__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__479__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__479__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__479__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__479__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__479__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__479__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__479__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__479__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__480__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__480__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__480__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__480__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__480__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__480__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__480__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__480__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__481__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__481__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__481__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__481__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__481__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__481__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__481__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__481__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__482__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__482__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__482__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__482__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__482__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__482__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__482__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__482__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__483__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__483__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__483__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__483__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__483__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__483__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__483__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__483__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__484__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__484__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__484__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__484__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__484__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__484__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__484__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__484__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__485__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__485__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__485__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__485__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__485__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__485__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__485__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__485__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__486__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__486__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__486__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__486__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__486__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__486__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__486__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__486__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__512__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__512__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__512__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__512__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__512__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__512__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__512__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__512__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__513__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__513__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__513__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__513__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__513__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__513__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__513__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__513__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__514__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__514__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__514__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__514__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__514__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__514__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__514__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__514__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__515__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__515__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__515__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__515__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__515__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__515__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__515__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__515__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__556__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__556__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__556__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__556__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__556__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__556__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__556__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__556__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__557__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__557__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__557__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__557__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__557__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__557__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__557__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__557__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__558__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__558__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__558__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__558__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__558__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__558__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__558__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__558__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__559__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__559__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__559__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__559__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__559__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__559__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__559__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__559__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__560__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__560__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__560__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__560__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__560__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__560__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__560__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__560__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__561__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__561__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__561__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__561__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__561__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__561__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__561__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__561__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__562__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__562__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__562__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__562__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__562__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__562__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__562__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__562__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__569__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__569__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__569__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__569__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__569__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__569__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__569__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__569__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__570__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__570__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__570__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__570__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__570__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__570__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__570__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__570__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__571__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__571__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__571__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__571__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__571__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__571__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__571__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__571__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__572__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__572__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__572__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__572__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__572__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__572__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__572__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__572__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__579__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__579__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__579__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__579__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__579__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__579__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__579__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__579__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__580__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__580__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__580__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__580__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__580__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__580__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__580__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__580__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__581__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__581__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__581__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__581__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__581__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__581__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__581__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__581__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__585__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__585__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__585__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__585__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__585__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__585__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__585__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__585__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__586__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__586__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__586__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__586__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__586__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__586__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__586__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__586__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__587__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__587__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__587__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__587__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__587__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__587__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__587__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__587__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__588__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__588__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__588__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__588__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__588__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__588__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__588__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__588__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_ctrl_inst__DOT__chn_data_out_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__cdp_cvtout_output_rdy) 
              & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT____VdfgRegularize_hcdf09104_0_4)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_biwt));
    vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_22 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__587__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__587__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_94;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__587__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_94)) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__587__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__587__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__587__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__587__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_63_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__587__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__585__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__585__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_29;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__585__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_29)) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__585__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__585__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__585__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__585__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_61_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__585__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_25 
        = (1U & ((2U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5)) 
                 | ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse) 
                        & (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_11))) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__515__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__515__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_26;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__515__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_26)) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__515__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__515__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__515__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__515__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_tmp_50 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__515__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__514__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__514__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__514__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__514__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__514__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__514__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__514__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_tmp_41 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__514__Vfuncout;
    vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_15 
        = (1U & ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2) 
                     & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse))) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_25 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_3)) 
           & (IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__not_tmp_25 
        = (1U & (~ ((0U == (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5)) 
                    | (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_15))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_86_tmp 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_4)) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_89_rgt 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_acc_itm_6_1)) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_24 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_3));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_92_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_acc_itm_6_1)) 
              | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_itm_5_1)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2_mx0c1 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1)) 
              & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_3_mx0c1 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2)) 
              & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_3)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_40 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_42)) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_35 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__460__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse) 
           & ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_st_3) 
                  | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_st_3))) 
              & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_4) 
                 & ((2U == (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)) 
                    & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1)))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__461__vector 
        = (0x0000007fU & ((IData)(1U) + (0x00000040U 
                                         | ((0x0000003eU 
                                             & ((~ 
                                                 ((IData)(9U) 
                                                  + 
                                                  (~ 
                                                   (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_1_16_0_1 
                                                    >> 0x0000000bU)))) 
                                                << 1U)) 
                                            | (1U & 
                                               (vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__i_data_sva_1_16_0_1 
                                                >> 0x0aU))))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp 
        = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__461__vector), 6U));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__461__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__460__input_0 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__readslicef_7_1_6__461__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__460__input_0) 
           & (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__460__sel));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__460__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__shift_0_prb 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__460__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__556__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__556__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_16_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__556__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_17_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__556__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__556__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__556__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__556__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_18_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__556__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__579__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_135_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_69_nl));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__579__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)) 
                    | (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_13))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__579__input_0 
        = (1U & (~ ((IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_13) 
                    & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__579__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__579__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__579__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__579__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_56_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__579__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__570__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__570__input_1 
        = (1U & (~ ((IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_5) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_42))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__570__input_0 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_91_nl) 
                    | (2U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_6)))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__570__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__570__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__570__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__570__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_42_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__570__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__586__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_3) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_43));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__586__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_29)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__586__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_61_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__586__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__586__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__586__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__586__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_62_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__586__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__569__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__569__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_40_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__569__input_0 
        = (((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__equal_tmp_2) 
                | ((2U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_6)) 
                   | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_5)))) 
            | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_43)) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_3));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__569__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__569__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__569__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__569__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_41_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__569__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_41 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_42));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__484__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__484__input_1 
        = ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_8_nl) 
               | ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_st_3) 
                  | ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_3) 
                     | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_3))))) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_39));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__484__input_0 
        = (1U & (~ ((IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_5) 
                    | ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_st_4)) 
                       | ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_st_4) 
                          | ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_st_4) 
                             | ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_42) 
                                | ((IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_14) 
                                   | ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_acc_6_svs_4) 
                                      | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_else_if_acc_5_svs_4))))))))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__484__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__484__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__484__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__484__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_70_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__484__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__478__sel 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_6) 
                 >> 1U));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__478__input_1 
        = (IData)((((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5) 
                    >> 1U) | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_22)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__478__input_0 
        = (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5) 
            >> 1U) & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__478__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__478__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__478__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__478__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_83_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__478__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__580__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__equal_tmp_2)) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_43)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__580__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_26)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__580__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_tmp_50;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__580__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__580__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__580__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__580__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_59_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__580__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__482__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__482__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_94;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__482__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_7_cse;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__482__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__482__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__482__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__482__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_65_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__482__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_153_nl 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_42)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__468__sel 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__468__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__468__input_0 
        = (1U & ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_42) 
                     & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse))) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__468__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__468__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__468__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__468__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_81_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__468__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_144_nl 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__557__sel 
        = (2U == (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__557__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)) 
                    & (~ (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_11)))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__557__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__557__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__557__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__557__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__557__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_19_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__557__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_71 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__not_tmp_42 
        = ((~ ((0U == (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_6)) 
               | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse))) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_3));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_28 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_117 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse) 
                 | ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4) 
                    | (0U == (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_70_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_59 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_69_nl) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_FpExpoWidthDec_6U_5U_10U_1U_1U_else_else_if_or_1_cse 
        = (((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)) 
            & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_35));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_FpExpoWidthDec_6U_5U_10U_1U_1U_if_or_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_40) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_41));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__479__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_83_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__479__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_else_FpExpoWidthDec_6U_5U_10U_1U_1U_else_and_2_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__479__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_nor_2_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__479__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__479__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__479__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__479__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRight_42U_6U_8U_1_obits_fixed_mux1h_4_itm 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_6_2_2__479__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__581__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_3;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__581__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_59_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__581__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_tmp_50;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__581__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__581__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__581__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__581__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_60_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__581__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__483__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__483__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_65_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__483__input_0 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_94));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__483__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__483__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__483__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__483__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_66_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__483__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__481__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_43;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__481__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_153_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__481__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_41;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__481__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__481__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__481__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__481__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_84_tmp 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__481__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__588__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_91_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__588__input_1 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__not_tmp_57) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_153_nl));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__588__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_63_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__588__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__588__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__588__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__588__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_64_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__588__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__464__sel 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__464__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_144_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__464__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5)) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__464__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__464__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__464__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__464__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_80_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__464__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__469__sel 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__469__input_1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_144_nl) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_42))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__469__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_81_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__469__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__469__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__469__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__469__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_82_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__469__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__558__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_146_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__558__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_19_nl)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__558__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_25;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__558__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__558__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__558__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__558__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_20_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__558__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__480__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_3;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__480__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_71;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__480__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_tmp_41;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__480__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__480__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__480__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__480__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_57_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__480__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__472__sel 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5) 
                 >> 1U));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__472__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__472__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_71;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__472__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__472__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__472__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__472__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_50_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__472__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__471__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__471__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_28;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__471__input_0 
        = (1U & (~ (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_15)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__471__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__471__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__471__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__471__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_39_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__471__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__485__sel 
        = (0U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__485__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__485__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_28;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__485__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__485__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__485__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__485__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_71_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__485__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__560__sel 
        = (0U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__560__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_28;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__560__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__560__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__560__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__560__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__560__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_22_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__560__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__512__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__512__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__512__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_70_cse;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__512__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__512__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__512__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__512__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_28_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__512__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__571__sel 
        = (0U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__571__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_59;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__571__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__not_tmp_42;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__571__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__571__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__571__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__571__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_43_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__571__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__572__sel 
        = (0U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__572__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_59;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__572__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__not_tmp_42;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__572__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__572__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__572__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__572__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_44_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__572__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__465__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_80_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__465__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_sva_mx0w0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__465__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntMulExt_26U_16U_42U_1_o_mul_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__465__sel)
            ? __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__465__input_1
            : __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__465__input_0);
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__465__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_i_mux1h_1_itm 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_50_2_2__465__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__470__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_82_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__470__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_guard_mask_sva_mx0w0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__470__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_14_1_sva_mx0w0;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__470__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__470__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__470__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__470__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_mux1h_2_itm 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_v_14_2_2__470__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__559__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__559__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_25;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__559__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_20_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__559__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__559__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__559__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__559__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_21_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__559__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__473__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_69_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__473__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_tmp_41)) 
                    | ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5) 
                       >> 1U))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__473__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_50_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__473__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__473__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__473__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__473__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_51_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__473__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__486__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_112_cse;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__486__input_1 
        = (1U & (~ ((0U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5)) 
                    | (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_15))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__486__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_71_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__486__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__486__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__486__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__486__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_72_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__486__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__561__sel 
        = (0U != (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__561__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_22_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__561__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__not_tmp_25;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__561__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__561__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__561__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__561__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_23_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__561__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__513__sel 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__513__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_28_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__513__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__513__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__513__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__513__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__513__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_tmp_22 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__513__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__474__sel 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__474__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_59)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__474__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_51_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__474__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__474__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__474__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__474__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_52_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__474__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__562__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__562__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_23_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__562__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__not_tmp_25;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__562__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__562__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__562__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__562__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_24_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__562__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__466__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_5) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_st_4));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__466__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_tmp_22;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__466__input_0 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_70_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__466__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__466__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__466__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__466__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_32_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__466__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__467__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_42;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__467__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_tmp_22;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__467__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_32_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__467__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__467__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__467__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__467__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_33_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__467__Vfuncout;
}

void Vsim_HLS_cdp_ocvt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__u_HLS_cdp_ocvt_3__2(Vsim_HLS_cdp_ocvt* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_cdp_ocvt___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__u_HLS_cdp_ocvt_3__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_16;
    HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_16 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__462__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__462__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__462__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__462__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__487__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__487__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__487__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__487__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__487__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__487__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__487__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__487__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__488__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__488__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__488__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__488__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__488__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__488__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__488__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__488__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__489__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__489__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__489__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__489__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__489__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__489__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__489__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__489__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__490__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__490__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__490__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__490__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__491__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__491__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__491__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__491__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__516__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__516__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__516__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__516__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__516__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__516__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__516__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__516__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__517__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__517__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__517__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__517__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__517__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__517__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__517__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__517__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__518__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__518__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__518__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__518__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__518__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__518__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__518__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__518__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__548__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__548__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__548__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__548__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__548__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__548__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__548__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__548__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__549__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__549__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__549__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__549__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__549__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__549__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__549__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__549__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__550__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__550__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__550__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__550__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__550__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__550__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__550__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__550__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__551__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__551__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__551__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__551__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__551__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__551__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__551__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__551__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__552__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__552__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__552__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__552__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__552__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__552__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__552__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__552__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__553__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__553__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__553__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__553__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__553__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__553__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__553__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__553__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__573__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__573__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__573__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__573__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__573__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__573__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__573__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__573__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__574__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__574__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__574__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__574__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__574__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__574__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__574__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__574__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__575__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__575__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__575__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__575__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__575__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__575__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__575__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__575__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__576__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__576__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__576__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__576__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__576__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__576__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__576__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__576__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__591__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__591__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__591__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__591__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__591__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__591__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__591__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__591__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__592__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__592__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__592__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__592__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__592__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__592__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__592__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__592__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__593__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__593__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__593__input_0;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__593__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__593__input_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__593__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__593__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__593__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_ctrl_inst__DOT__chn_data_in_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT____VdfgRegularize_hcdf09104_0_1) 
              & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__u_HLS_cdp_ocvt_2.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__chn_data_in_rsci__DOT__ld)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_biwt));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1_mx0c1 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt)) 
              & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_10 
        = ((IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt));
    vlSelfRef.__PVT__chn_data_in_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse) 
           & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt) 
              & (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__548__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__548__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt)) 
                    | (2U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use)))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__548__input_0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_7_cse)) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__548__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__548__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__548__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__548__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_8_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__548__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_15 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt) 
           & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__573__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__573__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_69_nl)) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__573__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_59;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__573__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__573__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__573__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__573__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_45_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__573__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__516__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__516__input_1 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__reg_chn_data_out_rsci_ld_core_psct_cse) 
                        & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_7_cse))) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__516__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_117;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__516__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__516__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__516__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__516__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_73_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__516__Vfuncout;
    vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_9 
        = ((2U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use)) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_en_1 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_11 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_data_in_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt)) 
                 & ((~ (IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0)) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_out_rsci_chn_data_out_wait_dp_inst__DOT__chn_data_out_rsci_bawt))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_16 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_15));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__574__sel 
        = (0U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__574__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_59;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__574__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_45_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__574__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__574__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__574__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__574__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_46_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__574__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__517__sel 
        = (2U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__517__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_117;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__517__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_73_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__517__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__517__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__517__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__517__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_tmp_66 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__517__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_tmp_6 
        = ((IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_9) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__chn_data_in_rsci_ld_core_psct_mx0c0 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_en_1) 
                 | ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__462__sel 
        = (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_en_1) 
            & ((2U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use)) 
               & (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__state_var)
                    ? 2U : 1U) >> 1U))) | ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_10) 
                                           & (2U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__462__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__462__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__iExpoWidth_oExpoWidth_prb 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__462__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__490__sel 
        = (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_en_1) 
            & ((0U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use)) 
               & (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__state_var)
                    ? 2U : 1U) >> 1U))) | ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_10) 
                                           & (0U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__490__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__490__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_nvdla_int_h_ln346_assert_oWidth_ge_aWidth_p_bWidth_1_sig_mx0w1 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__490__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_17 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_en_1)) 
                 | (2U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__553__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__553__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_11;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__553__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_en_1;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__553__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__553__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__553__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__553__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_15_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__553__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__549__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_11_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__549__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__549__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_11;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__549__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__549__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__549__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__549__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_9_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__549__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__551__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_13_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__551__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__551__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_11;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__551__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__551__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__551__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__551__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_11_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__551__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__488__sel 
        = (0U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__488__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__488__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_11;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__488__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__488__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__488__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__488__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_77_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__488__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_52 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_187_ssc 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen) 
           & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2) 
              & ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__nor_tmp_42) 
                 & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse))));
    HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_16 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_22)) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__core_wen));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__491__sel 
        = (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_16) 
            & (((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_core_fsm_inst__DOT__state_var)
                 ? 2U : 1U) >> 1U)) | ((IData)(vlSelfRef.__PVT__chn_data_out_rsci_unreg_inst__DOT__in_0) 
                                       & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_15)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__491__sel;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__491__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_nvdla_int_h_ln346_assert_oWidth_ge_aWidth_p_bWidth_2_sig_mx0w1 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX1HOT_s_1_1_2__491__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__591__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__591__input_1 
        = (1U & (~ ((~ ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use) 
                        & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_inst__DOT__HLS_cdp_ocvt_core_chn_data_in_rsci_chn_data_in_wait_dp_inst__DOT__chn_data_in_rsci_bawt))) 
                    & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__591__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_dcpl_16;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__591__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__591__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__591__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__591__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_67_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__591__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__575__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__575__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_44_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__575__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_46_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__575__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__575__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__575__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__575__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_47_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__575__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__592__sel 
        = (2U == (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__592__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_tmp_6;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__592__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_9)) 
                    & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_2_cse))));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__592__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__592__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__592__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__592__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_68_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__592__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__518__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__518__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_tmp_66;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__518__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_17;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__518__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__518__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__518__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__518__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_75_itm 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__518__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__487__sel 
        = (1U & (~ (IData)(vlSelfRef.HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_2)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__487__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_tmp_66;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__487__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_tmp_17;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__487__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__487__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__487__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__487__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_76_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__487__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__550__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_8_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__550__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_en_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_11_nl))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__550__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_9_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__550__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__550__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__550__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__550__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_10_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__550__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__552__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1) 
           & ((2U == (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__io_read_cfg_precision_rsc_svs_st_4)) 
              & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_slc_FpExpoWidthDec_6U_5U_10U_1U_1U_acc_6_svs_4)));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__552__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_11_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__552__input_0 
        = ((IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_acc_itm_6_1) 
           & ((2U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use)) 
              & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_en_1)));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__552__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__552__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__552__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__552__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_12_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__552__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__489__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__or_112_cse;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__489__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_en_1)) 
                    | (0U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_cvtout__DOT__reg2dp_input_data_type_use)))));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__489__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_77_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__489__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__489__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__489__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__489__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_78_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__489__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_50U_6U_16U_o_and_cse 
        = ((IData)(HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_16) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_33_nl));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_173_cse 
        = ((IData)(HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_16) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_39_nl));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntShiftRightSat_42U_6U_8U_i_and_cse 
        = ((IData)(HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_16) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_52_nl));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_183_cse 
        = ((IData)(HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_16) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_57_nl));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpExpoWidthDec_6U_5U_10U_1U_1U_if_and_3_cse 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_66_nl)) 
           & (IData)(HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_16));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__FpMantDecShiftRight_10U_6U_10U_i_mant_s_and_cse 
        = ((IData)(HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_16) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_70_nl));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__cfg_truncate_and_1_cse 
        = ((IData)(HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_16) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_72_nl));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__576__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__576__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_43_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__576__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_47_nl;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__576__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__576__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__576__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__576__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_48_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__576__Vfuncout;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__593__sel 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__593__input_1 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_68_nl;
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__593__input_0 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__and_tmp_6;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__593__sel)
            ? (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__593__input_1)
            : (IData)(__Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__593__input_0));
    __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__593__Vfuncout 
        = vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_69_nl 
        = __Vfunc_HLS_cdp_ocvt_core_inst__DOT__MUX_s_1_2_2__593__Vfuncout;
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IsNaN_6U_10U_and_cse 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_76_nl)) 
           & (IData)(HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_16));
    vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__IntSubExt_25U_25U_26U_1_o_and_cse 
        = ((IData)(HLS_cdp_ocvt_core_inst__DOT____VdfgRegularize_hf3393c1f_0_16) 
           & (IData)(vlSelfRef.__PVT__HLS_cdp_ocvt_core_inst__DOT__mux_78_nl));
}
