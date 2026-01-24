// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_HLS_fp17_mul___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit2__DOT__u_fp_mul__0(Vsim_HLS_fp17_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp17_mul___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit2__DOT__u_fp_mul__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*21:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__663__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__663__Vfuncout = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__663__vector;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__663__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__668__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__668__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__668__vector;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__668__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__669__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__669__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__669__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__669__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__669__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__669__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__669__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__669__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__670__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__670__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__670__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__670__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__670__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__670__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__670__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__670__sel = 0;
    IData/*19:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__671__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__671__Vfuncout = 0;
    IData/*19:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__671__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__671__input_0 = 0;
    IData/*19:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__671__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__671__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__671__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__671__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__672__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__672__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__672__input_2;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__672__input_2 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__672__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__672__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__672__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__672__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__679__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__679__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__679__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__679__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__679__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__679__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__679__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__679__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__680__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__680__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__680__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__680__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__680__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__680__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__680__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__680__sel = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__681__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__681__Vfuncout = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__681__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__681__input_0 = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__681__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__681__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__681__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__681__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__682__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__682__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__682__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__682__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__682__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__682__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__682__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__682__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__683__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__683__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__683__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__683__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__683__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__683__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__683__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__683__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__684__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__684__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__684__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__684__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__684__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__684__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__684__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__684__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__685__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__685__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__685__input_2;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__685__input_2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__685__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__685__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__685__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__685__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__685__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__685__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__687__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__687__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__687__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__687__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__687__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__687__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__687__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__687__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__688__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__688__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__688__vector;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__688__vector = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__691__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__691__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__691__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__691__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__691__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__691__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__695__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__695__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__695__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__695__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__695__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__695__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__695__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__695__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__706__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__706__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__706__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__706__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__706__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__706__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__706__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__706__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__707__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__707__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__707__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__707__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__707__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__707__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__707__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__707__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__711__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__711__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__711__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__711__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__711__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__711__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__711__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__711__sel = 0;
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
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt)))));
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
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_62))) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_62;
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
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_16 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_sva_5 = 0U;
    }
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__668__vector 
        = (0x0000003fU & ((IData)(1U) + (0x00000020U 
                                         | (0x0000001fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_sva_5) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp 
        = (0x0000003fU & VL_SHIFTR_III(6,6,32, (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__668__vector), 5U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__668__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_if_if_acc_1_itm_5_1 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__668__Vfuncout;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_b_rsci_iswt0_cse 
                = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_en_1)) 
                            & (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
                                 ? 2U : 1U) >> 1U))));
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_b_rsci_iswt0_cse = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_b_rsci_iswt0_cse));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_and_cse) {
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__679__sel 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_or_2_cse;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__679__input_1 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_9_0_itm_2;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__679__input_0 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_FpMul_6U_10U_FpMul_6U_10U_nor_1_nl;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__679__sel)
                    ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__679__input_1)
                    : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__679__input_0));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__679__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_9_0 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__679__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_iswt0 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_13;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_9_0 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_iswt0 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_iswt0));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_13) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_15)))) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_15)));
        }
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_oelse_1_and_1_cse) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_4 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_3;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
              & ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse) 
                   & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3))) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_3)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_40_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_7))) {
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__681__sel 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_40_rgt;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__681__input_1 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__681__input_0 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_mul_tmp;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__681__sel)
                    ? __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__681__input_1
                    : __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__681__input_0);
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__681__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__681__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 = 0U;
    }
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__671__sel 
        = (1U & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                 >> 0x15U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__671__input_1 
        = (0x000fffffU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                          >> 1U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__671__input_0 
        = (0x000fffffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2);
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__671__sel)
            ? __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__671__input_1
            : __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__671__input_0);
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__671__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_20_1_lpi_1_dfm_3_mx0 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__671__Vfuncout;
    vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_6 
        = ((((~ (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                 >> 0x00000015U)) | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_if_if_acc_1_itm_5_1)) 
            & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_4)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_4));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__669__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_if_if_acc_1_itm_5_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__669__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_slc_FpMul_6U_10U_p_mant_p1_21_itm_2;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__669__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_slc_FpMul_6U_10U_p_mant_p1_21_itm_2)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
             & ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2)) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_4)) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10_mx0c1)))) {
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__680__sel 
                = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10_mx0c1));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__680__input_1 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_FpMul_6U_10U_and_2_nl;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__680__input_0 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_15_10_itm_2;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__680__sel)
                    ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__680__input_1)
                    : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__680__input_0));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__680__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__680__Vfuncout;
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
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__683__sel 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_28;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__683__input_1 
                = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ua_sva_1_15_0_1));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__683__input_0 
                = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ub_sva_1_15_0_1));
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__683__sel)
                    ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__683__input_1)
                    : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__683__input_0));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__683__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_9_0_itm_2 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__683__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
              & (((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_if_2_FpMul_6U_10U_if_2_or_tmp) 
                      | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_oelse_1_acc_itm_7_1))) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_45_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_23))) {
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__684__sel 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_45_rgt;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__684__input_1 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__684__input_0 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__684__sel)
                    ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__684__input_1)
                    : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__684__input_0));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__684__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_3 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__684__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_mux_10_itm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_9_0_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_3 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__669__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__669__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__669__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__669__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_36_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__669__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMantRNE_22U_11U_else_carry_sva 
        = (1U & ((vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_20_1_lpi_1_dfm_3_mx0 
                  >> 9U) & ((vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                             & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                                >> 0x00000015U)) | (IData)(
                                                           (0U 
                                                            != 
                                                            (0x000005ffU 
                                                             & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_20_1_lpi_1_dfm_3_mx0))))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__670__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_36_nl) 
           & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
              >> 0x00000015U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__670__input_1 
        = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_sva_5)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__670__input_0 
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
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__682__sel 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_28;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__682__input_1 
                = (0x0000003fU & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ua_sva_1_15_0_1) 
                                  >> 0x0aU));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__682__input_0 
                = (0x0000003fU & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ub_sva_1_15_0_1) 
                                  >> 0x0aU));
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__682__sel)
                    ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__682__input_1)
                    : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__682__input_0));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__682__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_15_10_itm_2 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__682__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_15_10_itm_2 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__670__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__670__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__670__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__670__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__670__Vfuncout;
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
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__685__sel 
                = (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_52_rgt) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_60_rgt) 
                               << 1U) | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_61_rgt)));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__685__input_0 
                = (1U & ((vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                          ^ vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt) 
                         >> 0x00000010U));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__685__input_1 
                = (1U & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                         >> 0x10U));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__685__input_2 
                = (1U & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                         >> 0x10U));
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__685__input_0) 
                   & (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__685__sel));
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__685__input_1) 
                      & ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__685__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__685__input_2) 
                      & ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__685__sel) 
                         >> 2U)));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__685__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_mux_10_itm_3 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__685__Vfuncout;
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
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__686__vector 
                            = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMantRNE_22U_11U_else_carry_sva;
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__686__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__686__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__686__Vfuncout)))));
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
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__687__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMantRNE_22U_11U_else_and_svs)) 
                 | (0x3fU != (0x0000003fU & ((IData)(1U) 
                                             + (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0))))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__687__input_1 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMantRNE_22U_11U_else_acc_nl));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__688__vector 
        = (0x3fU == (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__688__Vfuncout 
        = (0x000003ffU & (- (IData)((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__688__vector))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__687__input_0 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__688__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__687__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__687__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__687__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__687__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_37_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__687__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__672__sel 
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
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__672__input_0 
        = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__672__input_2 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__672__input_0) 
           & (- (IData)((1U & (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__672__sel)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result) 
           | (0x3eU & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__672__sel) 
                                        >> 1U))))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__672__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__672__sel) 
                                  >> 2U))))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__672__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_o_expo_lpi_1_dfm 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__672__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_42_cse 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_4)) 
                    | (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_1))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_nor_nl 
        = (0x000003ffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__689__sel 
                        = (1U & (~ (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_6)));
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__689__input_0 
                        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_37_nl;
                    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__689__sel)
                            ? 0x03ffU : (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__689__input_0));
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__689__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__689__Vfuncout))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_2_lpi_1_dfm 
        = ((0U == (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_o_expo_lpi_1_dfm)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_4));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_65_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_3)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_7 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_3) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__695__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_slc_FpMul_6U_10U_p_mant_p1_21_itm_2;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__695__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_42_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__695__input_0 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_or_2_cse) 
                    | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2)) 
                       | ((vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                           >> 0x00000015U) | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_4)) 
                                              | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_4)))))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__695__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__695__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__695__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__695__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_4_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__695__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_49 
        = (1U & ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_3) 
                     & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1))) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__663__vector 
        = (0x003fffffU & ((0x00000400U | (0x000003ffU 
                                          & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ua_sva_1_15_0_1))) 
                          * (0x00000400U | (0x000003ffU 
                                            & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ub_sva_1_15_0_1)))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__663__Vfuncout 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__663__vector;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_mul_tmp 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__663__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__691__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_2_lpi_1_dfm)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__691__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_o_expo_lpi_1_dfm;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__691__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__691__input_1)
            : 0U);
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__691__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_FpMul_6U_10U_and_2_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__691__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_FpMul_6U_10U_FpMul_6U_10U_nor_1_nl 
        = (0x000003ffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__690__sel 
                        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_2_lpi_1_dfm;
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__690__input_0 
                        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_nor_nl;
                    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__690__sel)
                            ? 0x03ffU : (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__690__input_0));
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__690__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__690__Vfuncout))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_32 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_7)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_11 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_7) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__711__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__711__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__711__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_49)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__711__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__711__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__711__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__711__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_32_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__711__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__706__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_3;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__706__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__706__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_49;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__706__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__706__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__706__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__706__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_27_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__706__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__707__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__707__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_49;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__707__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_27_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__707__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__707__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__707__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__707__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_28_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__707__Vfuncout;
}

void Vsim_HLS_fp17_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit2__DOT__u_fp_mul__0(Vsim_HLS_fp17_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp17_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit2__DOT__u_fp_mul__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__653__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__653__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__653__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__653__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__653__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__653__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__653__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__653__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__654__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__654__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__654__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__654__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__654__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__654__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__654__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__654__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__655__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__655__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__655__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__655__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__655__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__655__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__655__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__655__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__656__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__656__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__656__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__656__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__656__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__656__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__656__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__656__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__674__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__674__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__674__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__674__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__674__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__674__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__674__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__674__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__675__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__675__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__675__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__675__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__675__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__675__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__675__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__675__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__696__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__696__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__696__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__696__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__696__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__696__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__696__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__696__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__697__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__697__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__697__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__697__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__697__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__697__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__697__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__697__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__698__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__698__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__698__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__698__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__698__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__698__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__698__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__698__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__699__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__699__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__699__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__699__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__699__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__699__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__699__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__699__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__700__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__700__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__700__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__700__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__700__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__700__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__700__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__700__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & ((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit3__DOT__fp16_en_sync)) 
              | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit2__DOT__mul_unit_rdy)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_7 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__655__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__655__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_32;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__655__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_32)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__655__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__655__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__655__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__655__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_16_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__655__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__653__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__653__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_11;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__653__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_11)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__653__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__653__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__653__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__653__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_12_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__653__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__674__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__674__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__674__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__674__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__674__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__674__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__674__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_6 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__674__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_15 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2)) 
           & (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_40_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_65_cse));
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
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__696__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__696__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)) 
                    | ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_3) 
                           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_7)) 
                              | (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_mul_tmp 
                                 >> 0x00000015U)))) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3)))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__696__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_4_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__696__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__696__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__696__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__696__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_5_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__696__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__656__sel 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_or_2_cse))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__656__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_16_nl;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__656__input_0 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_3) 
                    | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__656__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__656__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__656__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__656__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_17_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__656__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__654__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_or_2_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__654__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_11)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__654__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_12_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__654__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__654__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__654__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__654__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_13_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__654__Vfuncout;
    vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_8 
        = ((IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_1) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_16 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_4)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_13));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__675__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__675__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_16;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__675__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_6;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__675__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__675__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__675__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__675__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_7 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__675__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__699__sel 
        = (1U & (~ (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__699__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_16;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__699__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_6;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__699__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__699__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__699__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__699__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_10_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__699__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__697__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_42_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__697__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_16;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__697__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_6;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__697__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__697__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__697__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__697__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_8_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__697__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__700__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__700__input_1 
        = (1U & (~ (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_8)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__700__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_10_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__700__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__700__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__700__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__700__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_11_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__700__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__698__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_65_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__698__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_4)) 
                    | (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_8))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__698__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_8_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__698__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__698__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__698__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__698__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_9_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__698__Vfuncout;
}

void Vsim_HLS_fp17_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit2__DOT__u_fp_mul__1(Vsim_HLS_fp17_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp17_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit2__DOT__u_fp_mul__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__714__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__714__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__714__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__714__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__714__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__714__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__714__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__714__sel = 0;
    // Body
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__714__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__714__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__714__input_0 
        = (0x0001ffffU & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[1U] 
                          >> 2U));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__714__sel)
            ? __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__714__input_1
            : __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__714__input_0);
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__714__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__714__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_56 
        = (IData)(((0x0000fc00U != (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                   | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_oelse_1_acc_1_nl 
        = (0x000000ffU & ((IData)(0x61U) + VL_EXTEND_II(8,7, 
                                                        ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__664__vector 
                            = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                              >> 0x0aU));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__664__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__664__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__664__Vfuncout)))));
}

void Vsim_HLS_fp17_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit2__DOT__u_fp_mul__2(Vsim_HLS_fp17_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp17_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit2__DOT__u_fp_mul__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__713__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__713__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__713__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__713__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__713__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__713__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__713__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__713__sel = 0;
    // Body
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__713__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__713__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__713__input_0 
        = (0x0001ffffU & (IData)((vlSymsp->TOP.__VdfgRegularize_he50b618e_0_62 
                                  >> 0x00000024U)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__713__sel)
            ? __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__713__input_1
            : __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__713__input_0);
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__713__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__713__Vfuncout;
}

void Vsim_HLS_fp17_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit2__DOT__u_fp_mul__3(Vsim_HLS_fp17_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp17_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit2__DOT__u_fp_mul__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_9;
    HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_9 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__650__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__650__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__650__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__650__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__650__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__650__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__650__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__650__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__651__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__651__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__651__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__651__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__652__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__652__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__652__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__652__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__673__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__673__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__673__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__673__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__673__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__673__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__673__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__673__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit2__DOT__mul_fp_vld) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit2__DOT__mul_fp_vld) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld)));
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
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__673__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__673__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__673__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__673__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__673__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__673__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__673__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_3 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__673__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_en_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse));
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
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__650__sel 
        = (1U & (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__651__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_en_1) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__651__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__651__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__650__input_1 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__651__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__652__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
            ? 0U : 1U);
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__652__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__652__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__650__input_0 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__652__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__650__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__650__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__650__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__650__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__iMantWidth_oMantWidth_prb 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__650__Vfuncout;
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

void Vsim_HLS_fp17_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit2__DOT__u_fp_mul__5(Vsim_HLS_fp17_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp17_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit2__DOT__u_fp_mul__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__657__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__657__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__657__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__657__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__657__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__657__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__657__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__657__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__662__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__662__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__662__vector;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__662__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__667__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__667__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__667__vector;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__667__vector = 0;
    // Body
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__657__sel 
        = (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__657__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_56;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__657__input_0 
        = ((0x3fU != (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                     >> 0x0000000aU))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_56));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__657__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__657__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__657__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__657__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_35_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__657__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_else_2_acc_1_nl 
        = (0x000000ffU & (VL_EXTEND_II(8,7, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__658__vector 
                            = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x0aU));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__658__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__658__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__658__Vfuncout))) 
                          + VL_EXTEND_II(8,7, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__659__vector 
                            = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                              >> 0x0aU));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__659__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__659__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__659__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_if_2_FpMul_6U_10U_if_2_or_tmp 
        = ((0U == (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
           | (0U == (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_oelse_1_acc_nl 
        = (0x000001ffU & (VL_EXTEND_II(9,8, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__665__vector 
                            = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_oelse_1_acc_1_nl));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__665__Vfuncout 
                            = ((0x00000080U & ((IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__665__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__665__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__665__Vfuncout))) 
                          + VL_EXTEND_II(9,8, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__666__vector 
                            = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x0aU));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__666__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__666__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__666__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_else_2_if_acc_nl 
        = (0x000000ffU & ((IData)(0x51U) + VL_EXTEND_II(8,7, 
                                                        ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__661__vector 
                            = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_else_2_acc_1_nl));
                        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__Vstatic__tmp 
                            = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__661__vector), 1U));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__661__Vfuncout 
                            = (0x0000003fU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__Vstatic__tmp));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__660__vector 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__661__Vfuncout;
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__660__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__660__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__660__Vfuncout)))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__667__vector 
        = (0x000000ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_oelse_1_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__667__vector), 7U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__667__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_oelse_1_acc_itm_7_1 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__667__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__662__vector 
        = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_else_2_if_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp 
        = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__662__vector), 6U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__662__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__662__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_68_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_if_2_FpMul_6U_10U_if_2_or_tmp) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_oelse_1_acc_itm_7_1));
}

void Vsim_HLS_fp17_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit2__DOT__u_fp_mul__6(Vsim_HLS_fp17_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp17_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit2__DOT__u_fp_mul__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__676__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__676__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__676__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__676__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__676__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__676__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__676__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__676__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__677__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__677__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__677__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__677__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__677__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__677__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__677__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__677__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__678__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__678__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__678__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__678__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__678__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__678__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__678__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__678__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__692__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__692__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__692__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__692__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__692__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__692__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__692__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__692__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__693__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__693__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__693__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__693__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__693__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__693__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__693__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__693__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__694__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__694__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__694__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__694__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__694__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__694__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__694__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__694__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__701__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__701__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__701__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__701__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__701__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__701__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__701__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__701__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__702__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__702__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__702__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__702__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__702__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__702__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__702__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__702__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__703__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__703__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__703__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__703__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__703__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__703__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__703__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__703__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__704__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__704__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__704__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__704__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__704__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__704__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__704__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__704__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__705__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__705__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__705__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__705__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__705__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__705__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__705__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__705__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__708__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__708__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__708__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__708__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__708__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__708__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__708__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__708__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__709__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__709__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__709__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__709__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__709__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__709__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__709__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__709__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__710__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__710__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__710__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__710__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__710__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__710__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__710__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__710__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__712__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__712__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__712__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__712__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__712__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__712__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__712__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__712__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_52 
        = (1U & ((~ (IData)(((0x0000fc00U == (0x0000fc00U 
                                              & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1)))) 
                 | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__676__sel 
        = (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__676__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__676__input_0 
        = ((0x3fU != (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                     >> 0x0000000aU))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__676__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__676__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__676__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__676__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_21 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__676__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_4 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_oelse_1_acc_itm_7_1) 
                 | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_if_2_FpMul_6U_10U_if_2_or_tmp))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__709__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__709__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__709__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_52;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__709__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__709__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__709__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__709__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_30_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__709__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__677__sel 
        = (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__677__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_21;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__677__input_0 
        = ((0x3fU != (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                     >> 0x0000000aU))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_21));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__677__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__677__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__677__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__677__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_22_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__677__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_48 
        = (1U & ((~ (IData)(((0x0000fc00U == (0x0000fc00U 
                                              & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_21)))) 
                 | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__692__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__692__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__692__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_4;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__692__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__692__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__692__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__692__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__692__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_40 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_4)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__710__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_68_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__710__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_52;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__710__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_30_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__710__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__710__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__710__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__710__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_31_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__710__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__678__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__678__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_22_nl;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__678__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_32)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__678__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__678__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__678__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__678__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_23 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__678__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__704__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__704__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__704__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_48;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__704__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__704__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__704__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__704__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_25_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__704__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__693__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__693__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_4;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__693__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__693__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__693__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__693__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__693__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_1_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__693__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__701__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__701__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__701__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_40;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__701__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__701__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__701__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__701__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_18_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__701__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__712__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__712__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_31_nl)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__712__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_32_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__712__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__712__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__712__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__712__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_33_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__712__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__705__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_68_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__705__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_48;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__705__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_25_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__705__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__705__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__705__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__705__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_26_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__705__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__694__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__694__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_4)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__694__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_1_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__694__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__694__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__694__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__694__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_2_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__694__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__702__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__702__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_40;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__702__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_18_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__702__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__702__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__702__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__702__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_19_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__702__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__708__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__708__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_26_nl;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__708__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_28_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__708__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__708__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__708__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__708__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_29_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__708__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__703__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_65_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__703__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_40)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__703__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_19_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__703__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__703__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__703__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__703__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_20_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__703__Vfuncout;
}

void Vsim_HLS_fp17_mul___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit3__DOT__u_fp_mul__0(Vsim_HLS_fp17_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp17_mul___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit3__DOT__u_fp_mul__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*21:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__728__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__728__Vfuncout = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__728__vector;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__728__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__733__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__733__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__733__vector;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__733__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__734__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__734__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__734__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__734__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__734__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__734__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__734__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__734__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__735__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__735__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__735__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__735__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__735__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__735__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__735__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__735__sel = 0;
    IData/*19:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__736__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__736__Vfuncout = 0;
    IData/*19:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__736__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__736__input_0 = 0;
    IData/*19:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__736__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__736__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__736__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__736__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__737__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__737__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__737__input_2;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__737__input_2 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__737__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__737__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__737__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__737__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__744__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__744__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__744__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__744__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__744__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__744__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__744__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__744__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__745__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__745__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__745__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__745__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__745__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__745__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__745__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__745__sel = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__746__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__746__Vfuncout = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__746__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__746__input_0 = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__746__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__746__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__746__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__746__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__747__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__747__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__747__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__747__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__747__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__747__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__747__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__747__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__748__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__748__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__748__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__748__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__748__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__748__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__748__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__748__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__749__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__749__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__749__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__749__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__749__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__749__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__749__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__749__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__750__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__750__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__750__input_2;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__750__input_2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__750__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__750__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__750__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__750__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__750__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__750__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__752__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__752__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__752__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__752__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__752__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__752__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__752__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__752__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__753__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__753__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__753__vector;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__753__vector = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__756__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__756__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__756__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__756__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__756__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__756__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__760__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__760__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__760__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__760__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__760__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__760__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__760__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__760__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__771__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__771__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__771__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__771__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__771__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__771__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__771__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__771__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__772__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__772__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__772__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__772__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__772__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__772__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__772__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__772__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__776__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__776__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__776__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__776__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__776__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__776__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__776__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__776__sel = 0;
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
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt)))));
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
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_62))) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_62;
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
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_16 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_sva_5 = 0U;
    }
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__733__vector 
        = (0x0000003fU & ((IData)(1U) + (0x00000020U 
                                         | (0x0000001fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_sva_5) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp 
        = (0x0000003fU & VL_SHIFTR_III(6,6,32, (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__733__vector), 5U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__733__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_if_if_acc_1_itm_5_1 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__733__Vfuncout;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_b_rsci_iswt0_cse 
                = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_en_1)) 
                            & (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
                                 ? 2U : 1U) >> 1U))));
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_b_rsci_iswt0_cse = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_b_rsci_iswt0_cse));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_and_cse) {
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__744__sel 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_or_2_cse;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__744__input_1 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_9_0_itm_2;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__744__input_0 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_FpMul_6U_10U_FpMul_6U_10U_nor_1_nl;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__744__sel)
                    ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__744__input_1)
                    : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__744__input_0));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__744__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_9_0 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__744__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_iswt0 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_13;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_9_0 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_iswt0 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_iswt0));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_13) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_15)))) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_15)));
        }
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_oelse_1_and_1_cse) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_4 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_3;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
              & ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse) 
                   & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3))) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_3)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_40_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_7))) {
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__746__sel 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_40_rgt;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__746__input_1 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__746__input_0 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_mul_tmp;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__746__sel)
                    ? __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__746__input_1
                    : __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__746__input_0);
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__746__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__746__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 = 0U;
    }
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__736__sel 
        = (1U & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                 >> 0x15U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__736__input_1 
        = (0x000fffffU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                          >> 1U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__736__input_0 
        = (0x000fffffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2);
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__736__sel)
            ? __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__736__input_1
            : __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__736__input_0);
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__736__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_20_1_lpi_1_dfm_3_mx0 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__736__Vfuncout;
    vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_6 
        = ((((~ (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                 >> 0x00000015U)) | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_if_if_acc_1_itm_5_1)) 
            & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_4)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_4));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__734__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_if_if_acc_1_itm_5_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__734__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_slc_FpMul_6U_10U_p_mant_p1_21_itm_2;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__734__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_slc_FpMul_6U_10U_p_mant_p1_21_itm_2)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
             & ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2)) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_4)) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10_mx0c1)))) {
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__745__sel 
                = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10_mx0c1));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__745__input_1 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_FpMul_6U_10U_and_2_nl;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__745__input_0 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_15_10_itm_2;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__745__sel)
                    ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__745__input_1)
                    : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__745__input_0));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__745__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__745__Vfuncout;
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
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__748__sel 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_28;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__748__input_1 
                = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ua_sva_1_15_0_1));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__748__input_0 
                = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ub_sva_1_15_0_1));
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__748__sel)
                    ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__748__input_1)
                    : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__748__input_0));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__748__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_9_0_itm_2 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__748__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
              & (((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_if_2_FpMul_6U_10U_if_2_or_tmp) 
                      | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_oelse_1_acc_itm_7_1))) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_45_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_23))) {
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__749__sel 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_45_rgt;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__749__input_1 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__749__input_0 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__749__sel)
                    ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__749__input_1)
                    : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__749__input_0));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__749__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_3 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__749__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_mux_10_itm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_9_0_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_3 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__734__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__734__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__734__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__734__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_36_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__734__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMantRNE_22U_11U_else_carry_sva 
        = (1U & ((vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_20_1_lpi_1_dfm_3_mx0 
                  >> 9U) & ((vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                             & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                                >> 0x00000015U)) | (IData)(
                                                           (0U 
                                                            != 
                                                            (0x000005ffU 
                                                             & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_20_1_lpi_1_dfm_3_mx0))))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__735__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_36_nl) 
           & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
              >> 0x00000015U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__735__input_1 
        = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_sva_5)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__735__input_0 
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
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__747__sel 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_28;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__747__input_1 
                = (0x0000003fU & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ua_sva_1_15_0_1) 
                                  >> 0x0aU));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__747__input_0 
                = (0x0000003fU & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ub_sva_1_15_0_1) 
                                  >> 0x0aU));
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__747__sel)
                    ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__747__input_1)
                    : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__747__input_0));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__747__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_15_10_itm_2 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__747__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_15_10_itm_2 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__735__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__735__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__735__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__735__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__735__Vfuncout;
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
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__750__sel 
                = (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_52_rgt) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_60_rgt) 
                               << 1U) | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_61_rgt)));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__750__input_0 
                = (1U & ((vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                          ^ vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt) 
                         >> 0x00000010U));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__750__input_1 
                = (1U & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                         >> 0x10U));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__750__input_2 
                = (1U & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                         >> 0x10U));
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__750__input_0) 
                   & (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__750__sel));
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__750__input_1) 
                      & ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__750__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__750__input_2) 
                      & ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__750__sel) 
                         >> 2U)));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__750__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_mux_10_itm_3 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__750__Vfuncout;
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
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__751__vector 
                            = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMantRNE_22U_11U_else_carry_sva;
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__751__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__751__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__751__Vfuncout)))));
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
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__752__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMantRNE_22U_11U_else_and_svs)) 
                 | (0x3fU != (0x0000003fU & ((IData)(1U) 
                                             + (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0))))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__752__input_1 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMantRNE_22U_11U_else_acc_nl));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__753__vector 
        = (0x3fU == (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__753__Vfuncout 
        = (0x000003ffU & (- (IData)((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__753__vector))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__752__input_0 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__753__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__752__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__752__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__752__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__752__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_37_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__752__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__737__sel 
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
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__737__input_0 
        = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__737__input_2 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__737__input_0) 
           & (- (IData)((1U & (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__737__sel)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result) 
           | (0x3eU & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__737__sel) 
                                        >> 1U))))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__737__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__737__sel) 
                                  >> 2U))))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__737__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_o_expo_lpi_1_dfm 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__737__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_42_cse 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_4)) 
                    | (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_1))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_nor_nl 
        = (0x000003ffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__754__sel 
                        = (1U & (~ (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_6)));
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__754__input_0 
                        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_37_nl;
                    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__754__sel)
                            ? 0x03ffU : (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__754__input_0));
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__754__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__754__Vfuncout))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_2_lpi_1_dfm 
        = ((0U == (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_o_expo_lpi_1_dfm)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_4));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_65_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_3)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_7 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_3) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__760__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_slc_FpMul_6U_10U_p_mant_p1_21_itm_2;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__760__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_42_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__760__input_0 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_or_2_cse) 
                    | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2)) 
                       | ((vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                           >> 0x00000015U) | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_4)) 
                                              | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_4)))))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__760__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__760__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__760__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__760__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_4_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__760__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_49 
        = (1U & ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_3) 
                     & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1))) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__728__vector 
        = (0x003fffffU & ((0x00000400U | (0x000003ffU 
                                          & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ua_sva_1_15_0_1))) 
                          * (0x00000400U | (0x000003ffU 
                                            & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ub_sva_1_15_0_1)))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__728__Vfuncout 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__728__vector;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_mul_tmp 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__728__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__756__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_2_lpi_1_dfm)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__756__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_o_expo_lpi_1_dfm;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__756__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__756__input_1)
            : 0U);
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__756__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_FpMul_6U_10U_and_2_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__756__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_FpMul_6U_10U_FpMul_6U_10U_nor_1_nl 
        = (0x000003ffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__755__sel 
                        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_2_lpi_1_dfm;
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__755__input_0 
                        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_nor_nl;
                    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__755__sel)
                            ? 0x03ffU : (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__755__input_0));
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__755__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__755__Vfuncout))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_32 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_7)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_11 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_7) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__776__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__776__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__776__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_49)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__776__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__776__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__776__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__776__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_32_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__776__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__771__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_3;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__771__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__771__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_49;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__771__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__771__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__771__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__771__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_27_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__771__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__772__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__772__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_49;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__772__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_27_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__772__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__772__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__772__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__772__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_28_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__772__Vfuncout;
}

void Vsim_HLS_fp17_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit3__DOT__u_fp_mul__0(Vsim_HLS_fp17_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp17_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit3__DOT__u_fp_mul__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__718__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__718__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__718__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__718__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__718__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__718__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__718__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__718__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__719__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__719__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__719__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__719__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__719__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__719__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__719__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__719__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__720__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__720__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__720__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__720__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__720__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__720__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__720__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__720__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__721__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__721__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__721__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__721__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__721__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__721__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__721__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__721__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__739__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__739__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__739__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__739__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__739__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__739__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__739__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__739__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__740__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__740__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__740__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__740__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__740__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__740__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__740__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__740__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__761__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__761__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__761__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__761__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__761__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__761__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__761__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__761__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__762__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__762__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__762__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__762__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__762__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__762__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__762__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__762__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__763__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__763__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__763__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__763__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__763__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__763__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__763__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__763__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__764__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__764__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__764__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__764__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__764__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__764__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__764__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__764__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__765__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__765__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__765__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__765__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__765__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__765__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__765__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__765__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & ((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit3__DOT__fp16_en_sync)) 
              | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit3__DOT__mul_unit_rdy)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_7 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__720__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__720__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_32;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__720__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_32)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__720__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__720__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__720__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__720__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_16_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__720__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__718__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__718__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_11;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__718__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_11)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__718__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__718__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__718__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__718__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_12_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__718__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__739__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__739__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__739__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__739__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__739__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__739__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__739__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_6 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__739__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_15 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2)) 
           & (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_40_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_65_cse));
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
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__761__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__761__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)) 
                    | ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_3) 
                           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_7)) 
                              | (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_mul_tmp 
                                 >> 0x00000015U)))) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3)))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__761__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_4_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__761__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__761__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__761__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__761__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_5_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__761__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__721__sel 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_or_2_cse))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__721__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_16_nl;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__721__input_0 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_3) 
                    | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__721__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__721__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__721__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__721__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_17_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__721__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__719__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_or_2_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__719__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_11)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__719__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_12_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__719__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__719__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__719__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__719__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_13_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__719__Vfuncout;
    vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_8 
        = ((IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_1) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_16 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_4)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_13));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__740__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__740__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_16;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__740__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_6;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__740__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__740__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__740__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__740__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_7 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__740__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__764__sel 
        = (1U & (~ (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__764__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_16;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__764__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_6;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__764__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__764__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__764__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__764__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_10_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__764__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__762__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_42_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__762__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_16;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__762__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_6;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__762__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__762__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__762__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__762__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_8_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__762__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__765__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__765__input_1 
        = (1U & (~ (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_8)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__765__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_10_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__765__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__765__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__765__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__765__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_11_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__765__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__763__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_65_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__763__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_4)) 
                    | (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_8))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__763__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_8_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__763__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__763__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__763__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__763__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_9_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__763__Vfuncout;
}

void Vsim_HLS_fp17_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit3__DOT__u_fp_mul__1(Vsim_HLS_fp17_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp17_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit3__DOT__u_fp_mul__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__779__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__779__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__779__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__779__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__779__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__779__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__779__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__779__sel = 0;
    // Body
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__779__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__779__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__779__input_0 
        = (0x0001ffffU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[2U] 
                           << 0x0000000dU) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__p2_pipe_data[1U] 
                                              >> 0x00000013U)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__779__sel)
            ? __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__779__input_1
            : __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__779__input_0);
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__779__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__779__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_56 
        = (IData)(((0x0000fc00U != (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                   | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_oelse_1_acc_1_nl 
        = (0x000000ffU & ((IData)(0x61U) + VL_EXTEND_II(8,7, 
                                                        ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__729__vector 
                            = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                              >> 0x0aU));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__729__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__729__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__729__Vfuncout)))));
}

void Vsim_HLS_fp17_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit3__DOT__u_fp_mul__2(Vsim_HLS_fp17_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp17_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit3__DOT__u_fp_mul__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__778__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__778__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__778__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__778__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__778__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__778__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__778__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__778__sel = 0;
    // Body
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__778__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__778__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__778__input_0 
        = (0x0001ffffU & ((vlSymsp->TOP.__VdfgRegularize_he50b618e_0_67[2U] 
                           << 0x0000000aU) | (vlSymsp->TOP.__VdfgRegularize_he50b618e_0_67[1U] 
                                              >> 0x00000016U)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__778__sel)
            ? __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__778__input_1
            : __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__778__input_0);
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__778__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__778__Vfuncout;
}

void Vsim_HLS_fp17_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit3__DOT__u_fp_mul__3(Vsim_HLS_fp17_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp17_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit3__DOT__u_fp_mul__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_9;
    HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_9 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__715__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__715__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__715__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__715__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__715__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__715__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__715__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__715__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__716__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__716__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__716__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__716__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__717__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__717__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__717__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__717__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__738__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__738__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__738__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__738__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__738__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__738__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__738__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__738__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit3__DOT__mul_fp_vld) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit3__DOT__mul_fp_vld) 
              & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld)));
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
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__738__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__738__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__738__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__738__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__738__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__738__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__738__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_3 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__738__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_en_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse));
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
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__715__sel 
        = (1U & (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__716__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_en_1) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__716__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__716__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__715__input_1 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__716__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__717__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
            ? 0U : 1U);
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__717__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__717__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__715__input_0 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__717__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__715__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__715__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__715__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__715__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__iMantWidth_oMantWidth_prb 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__715__Vfuncout;
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

void Vsim_HLS_fp17_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit3__DOT__u_fp_mul__5(Vsim_HLS_fp17_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp17_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit3__DOT__u_fp_mul__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__722__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__722__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__722__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__722__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__722__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__722__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__722__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__722__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__727__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__727__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__727__vector;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__727__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__732__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__732__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__732__vector;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__732__vector = 0;
    // Body
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__722__sel 
        = (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__722__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_56;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__722__input_0 
        = ((0x3fU != (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                     >> 0x0000000aU))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_56));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__722__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__722__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__722__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__722__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_35_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__722__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_else_2_acc_1_nl 
        = (0x000000ffU & (VL_EXTEND_II(8,7, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__723__vector 
                            = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x0aU));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__723__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__723__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__723__Vfuncout))) 
                          + VL_EXTEND_II(8,7, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__724__vector 
                            = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                              >> 0x0aU));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__724__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__724__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__724__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_if_2_FpMul_6U_10U_if_2_or_tmp 
        = ((0U == (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
           | (0U == (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_oelse_1_acc_nl 
        = (0x000001ffU & (VL_EXTEND_II(9,8, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__730__vector 
                            = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_oelse_1_acc_1_nl));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__730__Vfuncout 
                            = ((0x00000080U & ((IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__730__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__730__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__730__Vfuncout))) 
                          + VL_EXTEND_II(9,8, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__731__vector 
                            = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x0aU));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__731__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__731__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__731__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_else_2_if_acc_nl 
        = (0x000000ffU & ((IData)(0x51U) + VL_EXTEND_II(8,7, 
                                                        ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__726__vector 
                            = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_else_2_acc_1_nl));
                        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__Vstatic__tmp 
                            = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__726__vector), 1U));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__726__Vfuncout 
                            = (0x0000003fU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__Vstatic__tmp));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__725__vector 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__726__Vfuncout;
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__725__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__725__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__725__Vfuncout)))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__732__vector 
        = (0x000000ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_oelse_1_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__732__vector), 7U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__732__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_oelse_1_acc_itm_7_1 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__732__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__727__vector 
        = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_else_2_if_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp 
        = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__727__vector), 6U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__727__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__727__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_68_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_if_2_FpMul_6U_10U_if_2_or_tmp) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_oelse_1_acc_itm_7_1));
}

void Vsim_HLS_fp17_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit3__DOT__u_fp_mul__6(Vsim_HLS_fp17_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp17_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_mul__DOT__u_mul_unit3__DOT__u_fp_mul__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__741__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__741__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__741__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__741__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__741__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__741__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__741__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__741__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__742__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__742__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__742__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__742__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__742__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__742__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__742__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__742__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__743__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__743__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__743__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__743__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__743__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__743__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__743__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__743__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__757__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__757__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__757__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__757__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__757__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__757__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__757__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__757__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__758__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__758__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__758__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__758__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__758__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__758__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__758__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__758__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__759__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__759__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__759__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__759__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__759__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__759__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__759__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__759__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__766__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__766__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__766__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__766__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__766__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__766__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__766__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__766__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__767__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__767__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__767__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__767__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__767__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__767__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__767__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__767__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__768__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__768__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__768__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__768__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__768__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__768__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__768__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__768__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__769__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__769__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__769__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__769__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__769__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__769__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__769__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__769__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__770__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__770__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__770__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__770__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__770__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__770__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__770__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__770__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__773__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__773__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__773__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__773__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__773__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__773__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__773__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__773__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__774__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__774__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__774__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__774__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__774__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__774__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__774__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__774__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__775__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__775__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__775__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__775__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__775__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__775__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__775__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__775__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__777__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__777__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__777__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__777__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__777__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__777__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__777__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__777__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_52 
        = (1U & ((~ (IData)(((0x0000fc00U == (0x0000fc00U 
                                              & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1)))) 
                 | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__741__sel 
        = (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__741__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__741__input_0 
        = ((0x3fU != (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                     >> 0x0000000aU))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__741__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__741__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__741__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__741__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_21 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__741__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_4 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_oelse_1_acc_itm_7_1) 
                 | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_if_2_FpMul_6U_10U_if_2_or_tmp))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__774__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__774__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__774__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_52;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__774__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__774__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__774__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__774__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_30_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__774__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__742__sel 
        = (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__742__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_21;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__742__input_0 
        = ((0x3fU != (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                     >> 0x0000000aU))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_21));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__742__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__742__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__742__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__742__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_22_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__742__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_48 
        = (1U & ((~ (IData)(((0x0000fc00U == (0x0000fc00U 
                                              & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_21)))) 
                 | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__757__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__757__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__757__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_4;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__757__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__757__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__757__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__757__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__757__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_40 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_4)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__775__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_68_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__775__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_52;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__775__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_30_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__775__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__775__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__775__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__775__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_31_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__775__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__743__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__743__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_22_nl;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__743__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_32)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__743__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__743__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__743__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__743__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_23 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__743__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__769__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__769__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__769__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_48;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__769__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__769__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__769__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__769__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_25_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__769__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__758__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__758__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_4;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__758__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__758__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__758__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__758__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__758__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_1_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__758__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__766__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__766__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__766__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_40;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__766__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__766__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__766__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__766__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_18_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__766__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__777__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__777__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_31_nl)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__777__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_32_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__777__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__777__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__777__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__777__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_33_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__777__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__770__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_68_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__770__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_48;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__770__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_25_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__770__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__770__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__770__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__770__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_26_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__770__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__759__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__759__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_4)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__759__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_1_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__759__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__759__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__759__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__759__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_2_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__759__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__767__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__767__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_40;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__767__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_18_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__767__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__767__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__767__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__767__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_19_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__767__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__773__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__773__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_26_nl;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__773__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_28_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__773__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__773__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__773__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__773__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_29_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__773__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__768__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_65_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__768__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_40)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__768__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_19_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__768__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__768__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__768__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__768__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_20_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__768__Vfuncout;
}

void Vsim_HLS_fp17_mul___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mul_padx_kwidth__0(Vsim_HLS_fp17_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp17_mul___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mul_padx_kwidth__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*21:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__793__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__793__Vfuncout = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__793__vector;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__793__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__798__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__798__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__798__vector;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__798__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__799__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__799__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__799__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__799__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__799__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__799__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__799__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__799__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__800__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__800__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__800__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__800__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__800__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__800__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__800__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__800__sel = 0;
    IData/*19:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__801__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__801__Vfuncout = 0;
    IData/*19:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__801__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__801__input_0 = 0;
    IData/*19:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__801__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__801__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__801__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__801__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__802__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__802__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__802__input_2;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__802__input_2 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__802__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__802__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__802__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__802__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__809__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__809__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__809__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__809__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__809__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__809__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__809__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__809__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__810__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__810__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__810__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__810__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__810__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__810__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__810__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__810__sel = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__811__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__811__Vfuncout = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__811__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__811__input_0 = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__811__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__811__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__811__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__811__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__812__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__812__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__812__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__812__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__812__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__812__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__812__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__812__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__813__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__813__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__813__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__813__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__813__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__813__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__813__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__813__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__814__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__814__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__814__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__814__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__814__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__814__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__814__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__814__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__815__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__815__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__815__input_2;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__815__input_2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__815__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__815__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__815__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__815__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__815__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__815__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__817__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__817__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__817__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__817__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__817__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__817__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__817__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__817__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__818__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__818__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__818__vector;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__818__vector = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__821__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__821__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__821__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__821__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__821__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__821__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__825__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__825__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__825__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__825__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__825__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__825__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__825__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__825__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__836__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__836__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__836__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__836__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__836__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__836__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__836__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__836__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__837__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__837__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__837__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__837__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__837__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__837__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__837__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__837__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__841__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__841__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__841__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__841__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__841__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__841__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__841__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__841__sel = 0;
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
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_sva_5 = 0U;
    }
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__798__vector 
        = (0x0000003fU & ((IData)(1U) + (0x00000020U 
                                         | (0x0000001fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_sva_5) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp 
        = (0x0000003fU & VL_SHIFTR_III(6,6,32, (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__798__vector), 5U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__798__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_if_if_acc_1_itm_5_1 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__798__Vfuncout;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_16 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_mux_10_itm_4;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__809__sel 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_or_2_cse;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__809__input_1 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_9_0_itm_2;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__809__input_0 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_FpMul_6U_10U_FpMul_6U_10U_nor_1_nl;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__809__sel)
                    ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__809__input_1)
                    : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__809__input_0));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__809__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_9_0 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__809__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_oelse_1_and_1_cse) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_4 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_3;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
              & ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse) 
                   & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3))) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_3)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_40_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_7))) {
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__811__sel 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_40_rgt;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__811__input_1 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__811__input_0 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_mul_tmp;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__811__sel)
                    ? __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__811__input_1
                    : __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__811__input_0);
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__811__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__811__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_16 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_9_0 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 = 0U;
    }
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__801__sel 
        = (1U & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                 >> 0x15U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__801__input_1 
        = (0x000fffffU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                          >> 1U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__801__input_0 
        = (0x000fffffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2);
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__801__sel)
            ? __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__801__input_1
            : __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__801__input_0);
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__801__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_20_1_lpi_1_dfm_3_mx0 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__801__Vfuncout;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
             & ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2)) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_4)) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10_mx0c1)))) {
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__810__sel 
                = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10_mx0c1));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__810__input_1 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_FpMul_6U_10U_and_2_nl;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__810__input_0 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_15_10_itm_2;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__810__sel)
                    ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__810__input_1)
                    : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__810__input_0));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__810__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__810__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_iswt0 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_13;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_iswt0 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_iswt0));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_13) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_15)))) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_15)));
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_62))) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_62;
        }
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_b_rsci_iswt0_cse 
                = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_en_1)) 
                            & (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
                                 ? 2U : 1U) >> 1U))));
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_b_rsci_iswt0_cse = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_b_rsci_iswt0_cse));
    vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_6 
        = ((((~ (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                 >> 0x00000015U)) | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_if_if_acc_1_itm_5_1)) 
            & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_4)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_4));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__799__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_if_if_acc_1_itm_5_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__799__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_slc_FpMul_6U_10U_p_mant_p1_21_itm_2;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__799__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_slc_FpMul_6U_10U_p_mant_p1_21_itm_2)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
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
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__814__sel 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_45_rgt;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__814__input_1 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__814__input_0 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__814__sel)
                    ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__814__input_1)
                    : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__814__input_0));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__814__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_3 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__814__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_mux_10_itm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_3 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__799__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__799__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__799__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__799__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_36_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__799__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMantRNE_22U_11U_else_carry_sva 
        = (1U & ((vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_20_1_lpi_1_dfm_3_mx0 
                  >> 9U) & ((vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                             & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                                >> 0x00000015U)) | (IData)(
                                                           (0U 
                                                            != 
                                                            (0x000005ffU 
                                                             & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_20_1_lpi_1_dfm_3_mx0))))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__800__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_36_nl) 
           & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
              >> 0x00000015U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__800__input_1 
        = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_sva_5)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__800__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_sva_5;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_and_1_cse) {
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__813__sel 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_28;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__813__input_1 
                = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ua_sva_1_15_0_1));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__813__input_0 
                = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ub_sva_1_15_0_1));
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__813__sel)
                    ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__813__input_1)
                    : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__813__input_0));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__813__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_9_0_itm_2 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__813__Vfuncout;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__812__sel 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_28;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__812__input_1 
                = (0x0000003fU & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ua_sva_1_15_0_1) 
                                  >> 0x0aU));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__812__input_0 
                = (0x0000003fU & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ub_sva_1_15_0_1) 
                                  >> 0x0aU));
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__812__sel)
                    ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__812__input_1)
                    : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__812__input_0));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__812__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_15_10_itm_2 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__812__Vfuncout;
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
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__800__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__800__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__800__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__800__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__800__Vfuncout;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_52_rgt) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_60_rgt)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_61_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_3))) {
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__815__sel 
                = (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_52_rgt) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_60_rgt) 
                               << 1U) | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_61_rgt)));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__815__input_0 
                = (1U & ((vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                          ^ vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt) 
                         >> 0x00000010U));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__815__input_1 
                = (1U & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                         >> 0x10U));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__815__input_2 
                = (1U & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                         >> 0x10U));
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__815__input_0) 
                   & (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__815__sel));
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__815__input_1) 
                      & ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__815__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__815__input_2) 
                      & ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__815__sel) 
                         >> 2U)));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__815__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_mux_10_itm_3 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__815__Vfuncout;
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
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__816__vector 
                            = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMantRNE_22U_11U_else_carry_sva;
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__816__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__816__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__816__Vfuncout)))));
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
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__817__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMantRNE_22U_11U_else_and_svs)) 
                 | (0x3fU != (0x0000003fU & ((IData)(1U) 
                                             + (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0))))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__817__input_1 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMantRNE_22U_11U_else_acc_nl));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__818__vector 
        = (0x3fU == (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__818__Vfuncout 
        = (0x000003ffU & (- (IData)((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__818__vector))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__817__input_0 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__818__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__817__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__817__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__817__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__817__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_37_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__817__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__802__sel 
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
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__802__input_0 
        = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__802__input_2 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__802__input_0) 
           & (- (IData)((1U & (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__802__sel)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result) 
           | (0x3eU & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__802__sel) 
                                        >> 1U))))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__802__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__802__sel) 
                                  >> 2U))))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__802__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_o_expo_lpi_1_dfm 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__802__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_42_cse 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_4)) 
                    | (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_1))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_nor_nl 
        = (0x000003ffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__819__sel 
                        = (1U & (~ (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_6)));
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__819__input_0 
                        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_37_nl;
                    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__819__sel)
                            ? 0x03ffU : (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__819__input_0));
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__819__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__819__Vfuncout))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_2_lpi_1_dfm 
        = ((0U == (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_o_expo_lpi_1_dfm)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_4));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_65_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_3)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_7 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_3) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__825__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_slc_FpMul_6U_10U_p_mant_p1_21_itm_2;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__825__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_42_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__825__input_0 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_or_2_cse) 
                    | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2)) 
                       | ((vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                           >> 0x00000015U) | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_4)) 
                                              | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_4)))))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__825__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__825__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__825__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__825__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_4_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__825__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_49 
        = (1U & ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_3) 
                     & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1))) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__793__vector 
        = (0x003fffffU & ((0x00000400U | (0x000003ffU 
                                          & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ua_sva_1_15_0_1))) 
                          * (0x00000400U | (0x000003ffU 
                                            & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ub_sva_1_15_0_1)))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__793__Vfuncout 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__793__vector;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_mul_tmp 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__793__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__821__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_2_lpi_1_dfm)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__821__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_o_expo_lpi_1_dfm;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__821__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__821__input_1)
            : 0U);
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__821__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_FpMul_6U_10U_and_2_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__821__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_FpMul_6U_10U_FpMul_6U_10U_nor_1_nl 
        = (0x000003ffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__820__sel 
                        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_2_lpi_1_dfm;
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__820__input_0 
                        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_nor_nl;
                    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__820__sel)
                            ? 0x03ffU : (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__820__input_0));
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__820__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__820__Vfuncout))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_32 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_7)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_11 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_7) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__841__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__841__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__841__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_49)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__841__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__841__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__841__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__841__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_32_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__841__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__836__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_3;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__836__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__836__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_49;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__836__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__836__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__836__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__836__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_27_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__836__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__837__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__837__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_49;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__837__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_27_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__837__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__837__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__837__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__837__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_28_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__837__Vfuncout;
}

void Vsim_HLS_fp17_mul___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mul_padx_kwidth__1(Vsim_HLS_fp17_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp17_mul___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mul_padx_kwidth__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__783__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__783__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__783__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__783__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__783__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__783__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__783__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__783__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__784__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__784__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__784__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__784__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__784__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__784__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__784__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__784__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__785__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__785__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__785__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__785__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__785__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__785__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__785__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__785__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__786__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__786__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__786__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__786__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__786__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__786__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__786__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__786__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__804__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__804__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__804__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__804__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__804__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__804__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__804__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__804__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__805__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__805__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__805__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__805__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__805__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__805__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__805__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__805__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__826__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__826__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__826__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__826__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__826__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__826__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__826__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__826__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__827__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__827__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__827__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__827__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__827__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__827__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__827__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__827__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__828__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__828__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__828__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__828__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__828__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__828__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__828__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__828__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__829__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__829__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__829__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__829__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__829__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__829__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__829__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__829__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__830__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__830__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__830__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__830__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__830__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__830__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__830__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__830__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp_mulw_prdy) 
              & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pipe_p7__DOT__p7_pipe_valid)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_7 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__785__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__785__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_32;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__785__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_32)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__785__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__785__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__785__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__785__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_16_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__785__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__783__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__783__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_11;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__783__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_11)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__783__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__783__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__783__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__783__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_12_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__783__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__804__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__804__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__804__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__804__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__804__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__804__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__804__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_6 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__804__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_15 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2)) 
           & (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_40_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_65_cse));
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
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__826__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__826__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)) 
                    | ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_3) 
                           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_7)) 
                              | (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_mul_tmp 
                                 >> 0x00000015U)))) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3)))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__826__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_4_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__826__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__826__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__826__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__826__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_5_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__826__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__786__sel 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_or_2_cse))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__786__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_16_nl;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__786__input_0 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_3) 
                    | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__786__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__786__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__786__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__786__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_17_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__786__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__784__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_or_2_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__784__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_11)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__784__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_12_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__784__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__784__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__784__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__784__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_13_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__784__Vfuncout;
    vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_8 
        = ((IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_1) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_16 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_4)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_13));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__805__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__805__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_16;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__805__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_6;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__805__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__805__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__805__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__805__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_7 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__805__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__829__sel 
        = (1U & (~ (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__829__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_16;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__829__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_6;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__829__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__829__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__829__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__829__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_10_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__829__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__827__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_42_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__827__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_16;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__827__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_6;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__827__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__827__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__827__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__827__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_8_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__827__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__830__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__830__input_1 
        = (1U & (~ (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_8)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__830__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_10_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__830__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__830__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__830__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__830__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_11_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__830__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__828__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_65_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__828__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_4)) 
                    | (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_8))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__828__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_8_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__828__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__828__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__828__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__828__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_9_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__828__Vfuncout;
}

void Vsim_HLS_fp17_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mul_padx_kwidth__0(Vsim_HLS_fp17_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp17_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mul_padx_kwidth__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_9;
    HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_9 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__780__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__780__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__780__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__780__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__780__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__780__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__780__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__780__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__781__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__781__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__781__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__781__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__782__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__782__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__782__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__782__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__803__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__803__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__803__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__803__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__803__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__803__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__803__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__803__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_mulw_in_vld) 
           & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld) 
              & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_mul_pad_line_in_rdy)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__vd 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_mulw_in_vld) 
           & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
              & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_mul_pad_line_in_rdy)));
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
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__803__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__803__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__803__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__803__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__803__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__803__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__803__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_3 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__803__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_en_1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse));
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
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__780__sel 
        = (1U & (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__781__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_en_1) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__781__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__781__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__780__input_1 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__781__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__782__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
            ? 0U : 1U);
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__782__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__782__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__780__input_0 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__782__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__780__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__780__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__780__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__780__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__iMantWidth_oMantWidth_prb 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__780__Vfuncout;
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

void Vsim_HLS_fp17_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mul_padx_kwidth__1(Vsim_HLS_fp17_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp17_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mul_padx_kwidth__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__844__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__844__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__844__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__844__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__844__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__844__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__844__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__844__sel = 0;
    // Body
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__844__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__844__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__844__input_0 
        = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__kernel_width_fp17;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__844__sel)
            ? __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__844__input_1
            : __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__844__input_0);
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__844__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__844__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_56 
        = (IData)(((0x0000fc00U != (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                   | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_oelse_1_acc_1_nl 
        = (0x000000ffU & ((IData)(0x61U) + VL_EXTEND_II(8,7, 
                                                        ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__794__vector 
                            = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                              >> 0x0aU));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__794__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__794__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__794__Vfuncout)))));
}

void Vsim_HLS_fp17_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mul_padx_kwidth__2(Vsim_HLS_fp17_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp17_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mul_padx_kwidth__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__787__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__787__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__787__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__787__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__787__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__787__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__787__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__787__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__792__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__792__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__792__vector;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__792__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__797__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__797__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__797__vector;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__797__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__806__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__806__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__806__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__806__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__806__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__806__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__806__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__806__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__807__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__807__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__807__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__807__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__807__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__807__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__807__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__807__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__808__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__808__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__808__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__808__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__808__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__808__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__808__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__808__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__822__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__822__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__822__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__822__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__822__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__822__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__822__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__822__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__823__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__823__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__823__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__823__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__823__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__823__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__823__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__823__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__824__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__824__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__824__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__824__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__824__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__824__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__824__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__824__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__831__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__831__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__831__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__831__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__831__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__831__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__831__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__831__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__832__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__832__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__832__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__832__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__832__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__832__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__832__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__832__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__833__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__833__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__833__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__833__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__833__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__833__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__833__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__833__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__834__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__834__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__834__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__834__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__834__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__834__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__834__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__834__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__835__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__835__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__835__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__835__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__835__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__835__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__835__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__835__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__838__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__838__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__838__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__838__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__838__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__838__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__838__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__838__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__839__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__839__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__839__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__839__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__839__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__839__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__839__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__839__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__840__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__840__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__840__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__840__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__840__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__840__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__840__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__840__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__842__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__842__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__842__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__842__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__842__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__842__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__842__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__842__sel = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__843__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__843__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__843__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__843__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__843__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__843__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__843__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__843__sel = 0;
    // Body
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__843__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__843__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__843__input_0 
        = (0x0001ffffU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__pad_table_out);
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__843__sel)
            ? __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__843__input_1
            : __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__843__input_0);
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__843__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__843__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_52_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse) 
           & (IData)(((0x0000fc00U == (0x0000fc00U 
                                       & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                      & (0U != (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_60_rgt 
        = ((IData)(((0x0000fc00U != (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                    | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt)))) 
           & (IData)((((0x0000fc00U == (0x0000fc00U 
                                        & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                       & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                      & (0U != (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt)))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__787__sel 
        = (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__787__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_56;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__787__input_0 
        = ((0x3fU != (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                     >> 0x0000000aU))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_56));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__787__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__787__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__787__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__787__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_35_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__787__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_52 
        = (1U & ((~ (IData)(((0x0000fc00U == (0x0000fc00U 
                                              & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1)))) 
                 | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__806__sel 
        = (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__806__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__806__input_0 
        = ((0x3fU != (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                     >> 0x0000000aU))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__806__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__806__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__806__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__806__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_21 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__806__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_else_2_acc_1_nl 
        = (0x000000ffU & (VL_EXTEND_II(8,7, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__788__vector 
                            = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x0aU));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__788__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__788__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__788__Vfuncout))) 
                          + VL_EXTEND_II(8,7, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__789__vector 
                            = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                              >> 0x0aU));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__789__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__789__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__789__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_if_2_FpMul_6U_10U_if_2_or_tmp 
        = ((0U == (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
           | (0U == (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_oelse_1_acc_nl 
        = (0x000001ffU & (VL_EXTEND_II(9,8, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__795__vector 
                            = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_oelse_1_acc_1_nl));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__795__Vfuncout 
                            = ((0x00000080U & ((IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__795__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__795__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__795__Vfuncout))) 
                          + VL_EXTEND_II(9,8, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__796__vector 
                            = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x0aU));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__796__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__796__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__796__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_61_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_35_nl) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__807__sel 
        = (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__807__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_21;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__807__input_0 
        = ((0x3fU != (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                     >> 0x0000000aU))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_21));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__807__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__807__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__807__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__807__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_22_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__807__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_48 
        = (1U & ((~ (IData)(((0x0000fc00U == (0x0000fc00U 
                                              & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_21)))) 
                 | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_else_2_if_acc_nl 
        = (0x000000ffU & ((IData)(0x51U) + VL_EXTEND_II(8,7, 
                                                        ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__791__vector 
                            = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_else_2_acc_1_nl));
                        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__Vstatic__tmp 
                            = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__791__vector), 1U));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__791__Vfuncout 
                            = (0x0000003fU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__Vstatic__tmp));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__790__vector 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__791__Vfuncout;
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__790__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__790__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__790__Vfuncout)))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__797__vector 
        = (0x000000ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_oelse_1_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__797__vector), 7U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__797__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_oelse_1_acc_itm_7_1 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__797__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__808__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__808__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_22_nl;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__808__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_32)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__808__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__808__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__808__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__808__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_23 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__808__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__792__vector 
        = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_else_2_if_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp 
        = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__792__vector), 6U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__792__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__792__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_68_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_if_2_FpMul_6U_10U_if_2_or_tmp) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_oelse_1_acc_itm_7_1));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_4 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_oelse_1_acc_itm_7_1) 
                 | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_if_2_FpMul_6U_10U_if_2_or_tmp))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__834__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__834__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__834__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_48;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__834__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__834__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__834__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__834__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_25_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__834__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__839__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__839__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__839__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_52;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__839__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__839__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__839__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__839__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_30_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__839__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_45_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_68_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__822__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__822__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__822__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_4;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__822__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__822__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__822__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__822__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__822__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_40 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_4)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__835__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_68_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__835__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_48;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__835__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_25_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__835__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__835__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__835__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__835__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_26_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__835__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__840__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_68_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__840__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_52;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__840__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_30_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__840__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__840__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__840__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__840__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_31_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__840__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__823__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__823__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_4;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__823__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__823__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__823__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__823__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__823__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_1_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__823__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__831__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__831__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__831__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_40;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__831__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__831__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__831__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__831__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_18_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__831__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__838__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__838__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_26_nl;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__838__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_28_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__838__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__838__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__838__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__838__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_29_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__838__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__842__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__842__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_31_nl)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__842__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_32_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__842__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__842__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__842__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__842__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_33_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__842__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__824__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__824__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_4)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__824__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_1_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__824__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__824__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__824__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__824__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_2_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__824__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__832__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__832__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_40;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__832__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_18_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__832__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__832__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__832__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__832__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_19_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__832__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__833__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_65_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__833__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_40)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__833__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_19_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__833__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__833__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__833__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__833__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_20_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__833__Vfuncout;
}

void Vsim_HLS_fp17_mul___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulw_0__0(Vsim_HLS_fp17_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp17_mul___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulw_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*21:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__858__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__858__Vfuncout = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__858__vector;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__858__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__863__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__863__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__863__vector;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__863__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__864__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__864__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__864__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__864__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__864__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__864__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__864__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__864__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__865__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__865__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__865__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__865__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__865__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__865__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__865__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__865__sel = 0;
    IData/*19:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__866__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__866__Vfuncout = 0;
    IData/*19:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__866__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__866__input_0 = 0;
    IData/*19:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__866__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__866__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__866__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__866__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__867__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__867__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__867__input_2;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__867__input_2 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__867__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__867__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__867__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__867__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__874__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__874__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__874__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__874__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__874__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__874__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__874__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__874__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__875__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__875__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__875__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__875__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__875__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__875__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__875__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__875__sel = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__876__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__876__Vfuncout = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__876__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__876__input_0 = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__876__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__876__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__876__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__876__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__877__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__877__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__877__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__877__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__877__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__877__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__877__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__877__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__878__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__878__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__878__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__878__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__878__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__878__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__878__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__878__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__879__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__879__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__879__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__879__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__879__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__879__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__879__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__879__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__880__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__880__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__880__input_2;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__880__input_2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__880__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__880__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__880__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__880__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__880__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__880__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__882__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__882__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__882__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__882__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__882__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__882__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__882__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__882__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__883__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__883__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__883__vector;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__883__vector = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__886__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__886__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__886__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__886__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__886__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__886__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__890__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__890__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__890__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__890__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__890__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__890__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__890__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__890__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__901__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__901__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__901__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__901__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__901__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__901__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__901__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__901__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__902__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__902__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__902__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__902__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__902__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__902__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__902__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__902__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__906__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__906__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__906__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__906__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__906__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__906__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__906__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__906__sel = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__908__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__908__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__908__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__908__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__908__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__908__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__908__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__908__sel = 0;
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
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__863__vector 
        = (0x0000003fU & ((IData)(1U) + (0x00000020U 
                                         | (0x0000001fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_sva_5) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp 
        = (0x0000003fU & VL_SHIFTR_III(6,6,32, (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__863__vector), 5U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__863__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_if_if_acc_1_itm_5_1 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__863__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_iswt0));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_16 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_mux_10_itm_4;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__874__sel 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_or_2_cse;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__874__input_1 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_9_0_itm_2;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__874__input_0 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_FpMul_6U_10U_FpMul_6U_10U_nor_1_nl;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__874__sel)
                    ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__874__input_1)
                    : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__874__input_0));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__874__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_9_0 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__874__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_oelse_1_and_1_cse) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_4 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_3;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_62))) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_62;
        }
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_b_rsci_iswt0_cse 
                = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_en_1)) 
                            & (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
                                 ? 2U : 1U) >> 1U))));
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_16 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_9_0 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse = 0U;
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
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__876__sel 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_40_rgt;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__876__input_1 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__876__input_0 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_mul_tmp;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__876__sel)
                    ? __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__876__input_1
                    : __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__876__input_0);
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__876__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__876__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 = 0U;
    }
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__866__sel 
        = (1U & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                 >> 0x15U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__866__input_1 
        = (0x000fffffU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                          >> 1U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__866__input_0 
        = (0x000fffffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2);
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__866__sel)
            ? __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__866__input_1
            : __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__866__input_0);
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__866__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_20_1_lpi_1_dfm_3_mx0 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__866__Vfuncout;
    vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_6 
        = ((((~ (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                 >> 0x00000015U)) | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_if_if_acc_1_itm_5_1)) 
            & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_4)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_4));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__864__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_if_if_acc_1_itm_5_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__864__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_slc_FpMul_6U_10U_p_mant_p1_21_itm_2;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__864__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_slc_FpMul_6U_10U_p_mant_p1_21_itm_2)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
             & ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2)) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_4)) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10_mx0c1)))) {
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__875__sel 
                = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10_mx0c1));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__875__input_1 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_FpMul_6U_10U_and_2_nl;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__875__input_0 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_15_10_itm_2;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__875__sel)
                    ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__875__input_1)
                    : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__875__input_0));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__875__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__875__Vfuncout;
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
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__879__sel 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_45_rgt;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__879__input_1 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__879__input_0 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__879__sel)
                    ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__879__input_1)
                    : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__879__input_0));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__879__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_3 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__879__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_mux_10_itm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_3 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__864__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__864__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__864__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__864__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_36_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__864__Vfuncout;
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
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__865__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_36_nl) 
           & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
              >> 0x00000015U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__865__input_1 
        = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_sva_5)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__865__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_sva_5;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_and_1_cse) {
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__878__sel 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_28;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__878__input_1 
                = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ua_sva_1_15_0_1));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__878__input_0 
                = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ub_sva_1_15_0_1));
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__878__sel)
                    ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__878__input_1)
                    : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__878__input_0));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__878__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_9_0_itm_2 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__878__Vfuncout;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__877__sel 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_28;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__877__input_1 
                = (0x0000003fU & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ua_sva_1_15_0_1) 
                                  >> 0x0aU));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__877__input_0 
                = (0x0000003fU & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ub_sva_1_15_0_1) 
                                  >> 0x0aU));
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__877__sel)
                    ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__877__input_1)
                    : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__877__input_0));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__877__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_15_10_itm_2 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__877__Vfuncout;
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
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__865__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__865__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__865__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__865__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__865__Vfuncout;
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
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__880__sel 
                = (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_52_rgt) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_60_rgt) 
                               << 1U) | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_61_rgt)));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__880__input_0 
                = (1U & ((vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                          ^ vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt) 
                         >> 0x00000010U));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__880__input_1 
                = (1U & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                         >> 0x10U));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__880__input_2 
                = (1U & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                         >> 0x10U));
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__880__input_0) 
                   & (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__880__sel));
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__880__input_1) 
                      & ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__880__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__880__input_2) 
                      & ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__880__sel) 
                         >> 2U)));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__880__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_mux_10_itm_3 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__880__Vfuncout;
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
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__881__vector 
                            = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMantRNE_22U_11U_else_carry_sva;
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__881__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__881__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__881__Vfuncout)))));
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
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__882__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMantRNE_22U_11U_else_and_svs)) 
                 | (0x3fU != (0x0000003fU & ((IData)(1U) 
                                             + (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0))))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__882__input_1 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMantRNE_22U_11U_else_acc_nl));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__883__vector 
        = (0x3fU == (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__883__Vfuncout 
        = (0x000003ffU & (- (IData)((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__883__vector))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__882__input_0 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__883__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__882__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__882__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__882__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__882__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_37_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__882__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__867__sel 
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
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__867__input_0 
        = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__867__input_2 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__867__input_0) 
           & (- (IData)((1U & (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__867__sel)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result) 
           | (0x3eU & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__867__sel) 
                                        >> 1U))))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__867__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__867__sel) 
                                  >> 2U))))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__867__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_o_expo_lpi_1_dfm 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__867__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_42_cse 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_4)) 
                    | (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_1))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__908__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__908__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__908__input_0 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_add_0.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
            << 0x00000010U) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_add_0.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10) 
                                << 0x0000000aU) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_add_0.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__908__sel)
            ? __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__908__input_1
            : __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__908__input_0);
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__908__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__908__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_nor_nl 
        = (0x000003ffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__884__sel 
                        = (1U & (~ (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_6)));
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__884__input_0 
                        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_37_nl;
                    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__884__sel)
                            ? 0x03ffU : (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__884__input_0));
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__884__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__884__Vfuncout))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_2_lpi_1_dfm 
        = ((0U == (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_o_expo_lpi_1_dfm)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_4));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_65_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_3)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_7 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_3) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__890__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_slc_FpMul_6U_10U_p_mant_p1_21_itm_2;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__890__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_42_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__890__input_0 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_or_2_cse) 
                    | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2)) 
                       | ((vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                           >> 0x00000015U) | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_4)) 
                                              | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_4)))))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__890__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__890__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__890__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__890__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_4_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__890__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_49 
        = (1U & ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_3) 
                     & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1))) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__858__vector 
        = (0x003fffffU & ((0x00000400U | (0x000003ffU 
                                          & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ua_sva_1_15_0_1))) 
                          * (0x00000400U | (0x000003ffU 
                                            & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ub_sva_1_15_0_1)))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__858__Vfuncout 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__858__vector;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_mul_tmp 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__858__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__886__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_2_lpi_1_dfm)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__886__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_o_expo_lpi_1_dfm;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__886__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__886__input_1)
            : 0U);
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__886__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_FpMul_6U_10U_and_2_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__886__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_FpMul_6U_10U_FpMul_6U_10U_nor_1_nl 
        = (0x000003ffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__885__sel 
                        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_2_lpi_1_dfm;
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__885__input_0 
                        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_nor_nl;
                    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__885__sel)
                            ? 0x03ffU : (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__885__input_0));
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__885__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__885__Vfuncout))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_32 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_7)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_11 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_7) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__906__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__906__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__906__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_49)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__906__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__906__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__906__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__906__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_32_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__906__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__901__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_3;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__901__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__901__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_49;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__901__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__901__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__901__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__901__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_27_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__901__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__902__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__902__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_49;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__902__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_27_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__902__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__902__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__902__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__902__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_28_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__902__Vfuncout;
}

void Vsim_HLS_fp17_mul___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulw_0__1(Vsim_HLS_fp17_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp17_mul___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulw_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_9;
    HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_9 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__845__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__845__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__845__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__845__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__845__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__845__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__845__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__845__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__846__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__846__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__846__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__846__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__847__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__847__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__847__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__847__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__848__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__848__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__848__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__848__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__848__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__848__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__848__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__848__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__849__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__849__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__849__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__849__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__849__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__849__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__849__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__849__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__850__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__850__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__850__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__850__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__850__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__850__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__850__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__850__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__851__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__851__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__851__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__851__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__851__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__851__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__851__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__851__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__868__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__868__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__868__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__868__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__868__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__868__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__868__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__868__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__869__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__869__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__869__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__869__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__869__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__869__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__869__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__869__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__870__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__870__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__870__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__870__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__870__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__870__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__870__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__870__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__871__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__871__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__871__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__871__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__871__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__871__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__871__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__871__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__891__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__891__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__891__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__891__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__891__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__891__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__891__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__891__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__892__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__892__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__892__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__892__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__892__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__892__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__892__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__892__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__893__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__893__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__893__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__893__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__893__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__893__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__893__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__893__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__894__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__894__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__894__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__894__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__894__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__894__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__894__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__894__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__895__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__895__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__895__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__895__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__895__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__895__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__895__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__895__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd 
        = ((0x0000000fU == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_add_pad_out_vld)) 
           & (IData)(((0x0fU == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_mulw_in_b_rdy)) 
                      & (0x0eU == (0x0eU & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_mulw_in_a_rdy))))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__vd 
        = ((0x0000000fU == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_add_pad_out_vld)) 
           & (IData)(((0x0fU == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_mulw_in_a_rdy)) 
                      & (0x0eU == (0x0eU & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_mulw_in_b_rdy))))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_mulv_rdy) 
           & (0x0eU == (0x0eU & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_mulw_out_vld))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt));
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
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__850__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__850__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_32;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__850__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_32)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__850__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__850__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__850__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__850__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_16_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__850__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__848__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__848__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_11;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__848__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_11)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__848__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__848__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__848__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__848__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_12_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__848__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__869__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__869__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__869__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__869__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__869__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__869__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__869__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_6 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__869__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_52 
        = (1U & ((~ (IData)(((0x0000fc00U == (0x0000fc00U 
                                              & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1)))) 
                 | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__871__sel 
        = (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__871__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__871__input_0 
        = ((0x3fU != (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                     >> 0x0000000aU))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__871__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__871__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__871__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__871__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_21 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__871__Vfuncout;
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
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__868__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__868__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__868__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__868__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__868__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__868__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__868__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_3 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__868__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__891__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__891__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)) 
                    | ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_3) 
                           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_7)) 
                              | (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_mul_tmp 
                                 >> 0x00000015U)))) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3)))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__891__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_4_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__891__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__891__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__891__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__891__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_5_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__891__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__851__sel 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_or_2_cse))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__851__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_16_nl;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__851__input_0 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_3) 
                    | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__851__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__851__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__851__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__851__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_17_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__851__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__849__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_or_2_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__849__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_11)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__849__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_12_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__849__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__849__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__849__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__849__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_13_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__849__Vfuncout;
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
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__845__sel 
        = (1U & (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__846__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_en_1) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__846__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__846__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__845__input_1 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__846__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__847__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
            ? 0U : 1U);
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__847__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__847__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__845__input_0 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__847__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__845__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__845__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__845__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__845__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__iMantWidth_oMantWidth_prb 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__845__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__870__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__870__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_16;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__870__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_6;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__870__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__870__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__870__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__870__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_7 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__870__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__894__sel 
        = (1U & (~ (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__894__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_16;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__894__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_6;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__894__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__894__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__894__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__894__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_10_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__894__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__892__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_42_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__892__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_16;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__892__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_6;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__892__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__892__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__892__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__892__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_8_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__892__Vfuncout;
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
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__895__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__895__input_1 
        = (1U & (~ (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_8)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__895__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_10_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__895__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__895__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__895__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__895__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_11_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__895__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__893__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_65_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__893__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_4)) 
                    | (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_8))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__893__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_8_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__893__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__893__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__893__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__893__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_9_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__893__Vfuncout;
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

void Vsim_HLS_fp17_mul___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulw_0__2(Vsim_HLS_fp17_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp17_mul___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulw_0__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__d 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__dp2reg_consumer)
            ? vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d1_recip_kernel_width
            : vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_reg__DOT__reg2dp_d0_recip_kernel_width);
}

void Vsim_HLS_fp17_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulw_0__0(Vsim_HLS_fp17_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp17_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulw_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__852__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__852__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__852__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__852__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__852__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__852__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__852__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__852__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__857__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__857__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__857__vector;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__857__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__862__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__862__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__862__vector;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__862__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__872__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__872__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__872__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__872__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__872__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__872__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__872__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__872__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__873__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__873__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__873__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__873__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__873__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__873__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__873__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__873__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__887__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__887__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__887__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__887__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__887__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__887__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__887__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__887__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__888__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__888__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__888__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__888__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__888__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__888__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__888__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__888__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__889__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__889__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__889__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__889__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__889__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__889__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__889__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__889__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__896__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__896__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__896__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__896__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__896__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__896__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__896__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__896__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__897__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__897__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__897__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__897__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__897__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__897__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__897__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__897__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__898__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__898__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__898__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__898__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__898__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__898__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__898__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__898__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__899__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__899__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__899__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__899__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__899__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__899__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__899__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__899__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__900__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__900__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__900__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__900__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__900__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__900__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__900__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__900__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__903__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__903__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__903__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__903__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__903__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__903__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__903__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__903__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__904__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__904__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__904__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__904__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__904__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__904__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__904__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__904__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__905__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__905__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__905__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__905__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__905__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__905__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__905__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__905__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__907__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__907__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__907__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__907__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__907__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__907__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__907__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__907__sel = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__909__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__909__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__909__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__909__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__909__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__909__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__909__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__909__sel = 0;
    // Body
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__909__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__909__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__909__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__d;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__909__sel)
            ? __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__909__input_1
            : __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__909__input_0);
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__909__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__909__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_56 
        = (IData)(((0x0000fc00U != (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                   | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_else_2_acc_1_nl 
        = (0x000000ffU & (VL_EXTEND_II(8,7, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__853__vector 
                            = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x0aU));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__853__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__853__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__853__Vfuncout))) 
                          + VL_EXTEND_II(8,7, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__854__vector 
                            = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                              >> 0x0aU));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__854__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__854__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__854__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_if_2_FpMul_6U_10U_if_2_or_tmp 
        = ((0U == (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
           | (0U == (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_oelse_1_acc_1_nl 
        = (0x000000ffU & ((IData)(0x61U) + VL_EXTEND_II(8,7, 
                                                        ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__859__vector 
                            = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                              >> 0x0aU));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__859__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__859__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__859__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_60_rgt 
        = ((IData)(((0x0000fc00U != (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                    | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt)))) 
           & (IData)((((0x0000fc00U == (0x0000fc00U 
                                        & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                       & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                      & (0U != (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt)))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__872__sel 
        = (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__872__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_21;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__872__input_0 
        = ((0x3fU != (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                     >> 0x0000000aU))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_21));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__872__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__872__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__872__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__872__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_22_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__872__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_48 
        = (1U & ((~ (IData)(((0x0000fc00U == (0x0000fc00U 
                                              & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_21)))) 
                 | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__852__sel 
        = (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__852__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_56;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__852__input_0 
        = ((0x3fU != (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                     >> 0x0000000aU))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_56));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__852__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__852__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__852__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__852__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_35_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__852__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_else_2_if_acc_nl 
        = (0x000000ffU & ((IData)(0x51U) + VL_EXTEND_II(8,7, 
                                                        ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__856__vector 
                            = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_else_2_acc_1_nl));
                        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__Vstatic__tmp 
                            = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__856__vector), 1U));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__856__Vfuncout 
                            = (0x0000003fU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__Vstatic__tmp));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__855__vector 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__856__Vfuncout;
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__855__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__855__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__855__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_oelse_1_acc_nl 
        = (0x000001ffU & (VL_EXTEND_II(9,8, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__860__vector 
                            = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_oelse_1_acc_1_nl));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__860__Vfuncout 
                            = ((0x00000080U & ((IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__860__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__860__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__860__Vfuncout))) 
                          + VL_EXTEND_II(9,8, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__861__vector 
                            = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x0aU));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__861__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__861__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__861__Vfuncout)))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__873__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__873__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_22_nl;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__873__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_32)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__873__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__873__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__873__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__873__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_23 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__873__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_61_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_35_nl) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__857__vector 
        = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_else_2_if_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp 
        = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__857__vector), 6U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__857__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__857__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__862__vector 
        = (0x000000ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_oelse_1_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__862__vector), 7U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__862__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_oelse_1_acc_itm_7_1 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__862__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__899__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__899__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__899__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_48;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__899__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__899__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__899__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__899__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_25_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__899__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__904__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__904__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__904__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_52;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__904__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__904__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__904__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__904__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_30_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__904__Vfuncout;
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
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__900__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_68_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__900__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_48;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__900__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_25_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__900__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__900__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__900__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__900__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_26_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__900__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__905__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_68_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__905__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_52;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__905__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_30_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__905__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__905__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__905__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__905__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_31_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__905__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__887__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__887__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__887__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_4;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__887__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__887__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__887__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__887__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__887__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_40 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_4)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__903__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__903__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_26_nl;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__903__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_28_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__903__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__903__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__903__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__903__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_29_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__903__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__907__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__907__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_31_nl)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__907__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_32_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__907__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__907__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__907__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__907__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_33_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__907__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__888__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__888__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_4;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__888__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__888__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__888__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__888__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__888__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_1_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__888__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__896__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__896__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__896__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_40;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__896__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__896__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__896__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__896__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_18_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__896__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__889__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__889__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_4)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__889__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_1_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__889__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__889__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__889__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__889__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_2_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__889__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__897__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__897__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_40;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__897__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_18_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__897__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__897__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__897__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__897__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_19_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__897__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__898__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_65_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__898__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_40)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__898__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_19_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__898__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__898__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__898__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__898__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_20_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__898__Vfuncout;
}

void Vsim_HLS_fp17_mul___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulw_1__0(Vsim_HLS_fp17_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp17_mul___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulw_1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*21:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__923__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__923__Vfuncout = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__923__vector;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__923__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__928__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__928__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__928__vector;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__928__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__929__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__929__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__929__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__929__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__929__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__929__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__929__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__929__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__930__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__930__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__930__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__930__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__930__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__930__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__930__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__930__sel = 0;
    IData/*19:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__931__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__931__Vfuncout = 0;
    IData/*19:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__931__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__931__input_0 = 0;
    IData/*19:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__931__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__931__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__931__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__931__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__932__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__932__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__932__input_2;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__932__input_2 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__932__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__932__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__932__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__932__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__939__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__939__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__939__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__939__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__939__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__939__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__939__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__939__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__940__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__940__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__940__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__940__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__940__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__940__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__940__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__940__sel = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__941__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__941__Vfuncout = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__941__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__941__input_0 = 0;
    IData/*21:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__941__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__941__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__941__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__941__sel = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__942__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__942__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__942__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__942__input_0 = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__942__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__942__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__942__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__942__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__943__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__943__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__943__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__943__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__943__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__943__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__943__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__943__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__944__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__944__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__944__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__944__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__944__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__944__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__944__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__944__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__945__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__945__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__945__input_2;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__945__input_2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__945__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__945__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__945__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__945__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__945__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__945__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__947__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__947__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__947__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__947__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__947__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__947__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__947__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__947__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__948__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__948__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__948__vector;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__948__vector = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__951__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__951__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__951__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__951__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__951__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__951__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__955__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__955__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__955__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__955__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__955__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__955__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__955__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__955__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__966__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__966__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__966__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__966__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__966__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__966__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__966__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__966__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__967__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__967__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__967__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__967__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__967__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__967__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__967__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__967__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__971__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__971__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__971__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__971__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__971__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__971__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__971__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__971__sel = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__973__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__973__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__973__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__973__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__973__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__973__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__973__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__973__sel = 0;
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
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__928__vector 
        = (0x0000003fU & ((IData)(1U) + (0x00000020U 
                                         | (0x0000001fU 
                                            & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_sva_5) 
                                               >> 1U)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp 
        = (0x0000003fU & VL_SHIFTR_III(6,6,32, (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__928__vector), 5U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__928__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_if_if_acc_1_itm_5_1 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_6_1_5__928__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_iswt0));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_and_cse) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_16 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_mux_10_itm_4;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__939__sel 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_or_2_cse;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__939__input_1 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_9_0_itm_2;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__939__input_0 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_FpMul_6U_10U_FpMul_6U_10U_nor_1_nl;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__939__sel)
                    ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__939__input_1)
                    : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__939__input_0));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__939__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_9_0 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__939__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_oelse_1_and_1_cse) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_4 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_3;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_62))) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_62;
        }
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_b_rsci_iswt0_cse 
                = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_en_1)) 
                            & (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
                                 ? 2U : 1U) >> 1U))));
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_16 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_9_0 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_b_rsci_ld_core_psct_cse = 0U;
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
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__941__sel 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_40_rgt;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__941__input_1 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__941__input_0 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_mul_tmp;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__941__sel)
                    ? __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__941__input_1
                    : __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__941__input_0);
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__941__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_22_2_2__941__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 = 0U;
    }
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__931__sel 
        = (1U & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                 >> 0x15U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__931__input_1 
        = (0x000fffffU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                          >> 1U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__931__input_0 
        = (0x000fffffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2);
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__931__sel)
            ? __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__931__input_1
            : __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__931__input_0);
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__931__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_20_1_lpi_1_dfm_3_mx0 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_20_2_2__931__Vfuncout;
    vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_6 
        = ((((~ (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                 >> 0x00000015U)) | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_if_if_acc_1_itm_5_1)) 
            & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_4)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_4));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__929__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_if_if_acc_1_itm_5_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__929__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_slc_FpMul_6U_10U_p_mant_p1_21_itm_2;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__929__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_slc_FpMul_6U_10U_p_mant_p1_21_itm_2)));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
             & ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2)) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_4)) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10_mx0c1)))) {
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__940__sel 
                = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_4)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10_mx0c1));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__940__input_1 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_FpMul_6U_10U_and_2_nl;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__940__input_0 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_15_10_itm_2;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__940__sel)
                    ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__940__input_1)
                    : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__940__input_0));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__940__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__940__Vfuncout;
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
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__944__sel 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_45_rgt;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__944__input_1 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__944__input_0 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__944__sel)
                    ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__944__input_1)
                    : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__944__input_0));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__944__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_3 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__944__Vfuncout;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_o_rsci_d_15_10 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_mux_10_itm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_3 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__929__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__929__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__929__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__929__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_36_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__929__Vfuncout;
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
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__930__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_36_nl) 
           & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
              >> 0x00000015U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__930__input_1 
        = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_sva_5)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__930__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_sva_5;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_and_1_cse) {
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__943__sel 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_28;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__943__input_1 
                = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ua_sva_1_15_0_1));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__943__input_0 
                = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ub_sva_1_15_0_1));
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__943__sel)
                    ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__943__input_1)
                    : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__943__input_0));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__943__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_9_0_itm_2 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__943__Vfuncout;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__942__sel 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_dcpl_28;
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__942__input_1 
                = (0x0000003fU & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ua_sva_1_15_0_1) 
                                  >> 0x0aU));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__942__input_0 
                = (0x0000003fU & ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ub_sva_1_15_0_1) 
                                  >> 0x0aU));
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__942__sel)
                    ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__942__input_1)
                    : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__942__input_0));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__942__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpBitsToFloat_6U_10U_1_slc_FpBitsToFloat_6U_10U_ubits_1_15_10_itm_2 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__942__Vfuncout;
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
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__930__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__930__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__930__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__930__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__930__Vfuncout;
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_52_rgt) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_60_rgt)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_61_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_3))) {
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__945__sel 
                = (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_52_rgt) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_60_rgt) 
                               << 1U) | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_61_rgt)));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__945__input_0 
                = (1U & ((vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                          ^ vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt) 
                         >> 0x00000010U));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__945__input_1 
                = (1U & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                         >> 0x10U));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__945__input_2 
                = (1U & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                         >> 0x10U));
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__945__input_0) 
                   & (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__945__sel));
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__945__input_1) 
                      & ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__945__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__945__input_2) 
                      & ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__945__sel) 
                         >> 2U)));
            __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__945__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_mux_10_itm_3 
                = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_3_2__945__Vfuncout;
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
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__946__vector 
                            = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMantRNE_22U_11U_else_carry_sva;
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__946__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__946__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_1_10__946__Vfuncout)))));
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
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__947__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMantRNE_22U_11U_else_and_svs)) 
                 | (0x3fU != (0x0000003fU & ((IData)(1U) 
                                             + (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0))))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__947__input_1 
        = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMantRNE_22U_11U_else_acc_nl));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__948__vector 
        = (0x3fU == (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__948__Vfuncout 
        = (0x000003ffU & (- (IData)((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__948__vector))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__947__input_0 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__signext_10_1__948__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__947__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__947__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__947__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__947__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_37_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__947__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__932__sel 
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
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__932__input_0 
        = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__932__input_2 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_expo_lpi_1_dfm_1_mx0;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__932__input_0) 
           & (- (IData)((1U & (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__932__sel)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result) 
           | (0x3eU & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__932__sel) 
                                        >> 1U))))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__932__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__932__sel) 
                                  >> 2U))))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__932__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_o_expo_lpi_1_dfm 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_v_6_3_2__932__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_42_cse 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_4)) 
                    | (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_1))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__973__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__973__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__973__input_0 
        = (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_add_1.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_16) 
            << 0x00000010U) | (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_add_1.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_15_10) 
                                << 0x0000000aU) | (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_add_1.__PVT__HLS_fp17_add_core_inst__DOT__chn_o_rsci_d_9_0)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__973__sel)
            ? __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__973__input_1
            : __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__973__input_0);
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__973__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__973__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_nor_nl 
        = (0x000003ffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__949__sel 
                        = (1U & (~ (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_6)));
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__949__input_0 
                        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_37_nl;
                    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__949__sel)
                            ? 0x03ffU : (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__949__input_0));
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__949__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__949__Vfuncout))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_2_lpi_1_dfm 
        = ((0U == (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_o_expo_lpi_1_dfm)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_4));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_65_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_3)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_7 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_3) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__955__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_else_slc_FpMul_6U_10U_p_mant_p1_21_itm_2;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__955__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_42_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__955__input_0 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_or_2_cse) 
                    | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2)) 
                       | ((vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_sva_2 
                           >> 0x00000015U) | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_4)) 
                                              | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_4)))))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__955__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__955__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__955__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__955__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_4_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__955__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_49 
        = (1U & ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_3) 
                     & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1))) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__923__vector 
        = (0x003fffffU & ((0x00000400U | (0x000003ffU 
                                          & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ua_sva_1_15_0_1))) 
                          * (0x00000400U | (0x000003ffU 
                                            & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_ub_sva_1_15_0_1)))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__923__Vfuncout 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__923__vector;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_mul_tmp 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_22_22__923__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__951__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_2_lpi_1_dfm)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__951__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_o_expo_lpi_1_dfm;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__951__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__951__input_1)
            : 0U);
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__951__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_FpMul_6U_10U_and_2_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_6_2_2__951__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_FpMul_6U_10U_FpMul_6U_10U_nor_1_nl 
        = (0x000003ffU & (~ ([&]() {
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__950__sel 
                        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_2_lpi_1_dfm;
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__950__input_0 
                        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_nor_nl;
                    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                        = ((IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__950__sel)
                            ? 0x03ffU : (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__950__input_0));
                    vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__950__Vfuncout 
                        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
                }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_v_10_2_2__950__Vfuncout))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_32 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_7)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_11 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_7) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__971__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__971__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__971__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_49)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__971__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__971__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__971__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__971__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_32_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__971__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__966__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_3;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__966__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__966__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_49;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__966__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__966__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__966__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__966__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_27_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__966__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__967__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__967__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_49;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__967__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_27_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__967__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__967__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__967__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__967__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_28_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__967__Vfuncout;
}

void Vsim_HLS_fp17_mul___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulw_1__1(Vsim_HLS_fp17_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp17_mul___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulw_1__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_9;
    HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_9 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__910__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__910__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__910__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__910__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__910__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__910__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__910__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__910__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__911__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__911__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__911__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__911__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__912__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__912__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__912__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__912__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__913__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__913__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__913__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__913__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__913__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__913__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__913__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__913__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__914__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__914__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__914__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__914__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__914__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__914__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__914__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__914__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__915__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__915__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__915__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__915__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__915__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__915__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__915__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__915__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__916__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__916__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__916__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__916__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__916__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__916__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__916__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__916__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__933__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__933__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__933__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__933__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__933__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__933__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__933__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__933__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__934__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__934__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__934__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__934__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__934__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__934__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__934__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__934__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__935__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__935__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__935__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__935__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__935__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__935__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__935__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__935__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__936__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__936__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__936__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__936__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__936__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__936__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__936__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__936__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__956__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__956__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__956__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__956__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__956__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__956__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__956__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__956__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__957__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__957__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__957__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__957__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__957__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__957__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__957__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__957__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__958__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__958__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__958__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__958__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__958__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__958__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__958__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__958__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__959__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__959__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__959__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__959__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__959__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__959__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__959__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__959__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__960__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__960__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__960__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__960__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__960__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__960__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__960__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__960__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd 
        = ((0x0000000fU == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_add_pad_out_vld)) 
           & ((0x0000000fU == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_mulw_in_b_rdy)) 
              & (IData)(((0x0cU == (0x0cU & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_mulw_in_a_rdy))) 
                         & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulw_0.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__vd 
        = ((0x0000000fU == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_add_pad_out_vld)) 
           & ((0x0000000fU == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_mulw_in_a_rdy)) 
              & (IData)(((0x0cU == (0x0cU & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_mulw_in_b_rdy))) 
                         & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulw_0.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_mulv_rdy) 
           & (IData)(((0x0cU == (0x0cU & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_mulw_out_vld))) 
                      & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulw_0.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_inst__DOT__HLS_fp17_mul_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt));
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
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__915__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__915__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_32;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__915__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_32)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__915__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__915__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__915__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__915__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_16_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__915__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__913__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__913__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_11;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__913__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_11)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__913__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__913__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__913__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__913__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_12_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__913__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__934__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__934__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__934__input_0 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__934__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__934__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__934__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__934__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_6 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__934__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_52 
        = (1U & ((~ (IData)(((0x0000fc00U == (0x0000fc00U 
                                              & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1)))) 
                 | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__936__sel 
        = (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__936__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__936__input_0 
        = ((0x3fU != (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                     >> 0x0000000aU))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__936__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__936__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__936__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__936__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_21 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__936__Vfuncout;
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
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__933__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__933__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__933__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__933__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__933__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__933__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__933__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_3 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__933__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__956__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__956__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)) 
                    | ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_3) 
                           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_7)) 
                              | (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_p_mant_p1_mul_tmp 
                                 >> 0x00000015U)))) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3)))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__956__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_4_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__956__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__956__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__956__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__956__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_5_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__956__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__916__sel 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_or_2_cse))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__916__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_16_nl;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__916__input_0 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_1_land_lpi_1_dfm_3) 
                    | ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)) 
                       | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__IsNaN_6U_10U_land_lpi_1_dfm_st_3)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__916__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__916__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__916__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__916__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_17_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__916__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__914__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_or_2_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__914__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_11)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__914__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_12_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__914__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__914__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__914__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__914__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_13_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__914__Vfuncout;
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
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__910__sel 
        = (1U & (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__911__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_en_1) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__911__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__911__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__910__input_1 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__911__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__912__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_core_fsm_inst__DOT__state_var)
            ? 0U : 1U);
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__912__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__912__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__910__input_0 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX1HOT_s_1_1_2__912__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__910__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__910__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__910__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__910__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__iMantWidth_oMantWidth_prb 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__910__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__935__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_2;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__935__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_16;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__935__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_6;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__935__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__935__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__935__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__935__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_7 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__935__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__959__sel 
        = (1U & (~ (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__959__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_16;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__959__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_6;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__959__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__959__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__959__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__959__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_10_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__959__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__957__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_42_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__957__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_16;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__957__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_6;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__957__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__957__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__957__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__957__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_8_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__957__Vfuncout;
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
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__960__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__960__input_1 
        = (1U & (~ (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_8)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__960__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_10_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__960__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__960__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__960__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__960__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_11_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__960__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__958__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_65_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__958__input_1 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_slc_FpMul_6U_10U_else_2_if_acc_6_svs_st_4)) 
                    | (IData)(vlSelfRef.HLS_fp17_mul_core_inst__DOT____VdfgRegularize_hece905bd_0_8))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__958__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_8_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__958__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__958__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__958__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__958__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_9_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__958__Vfuncout;
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

void Vsim_HLS_fp17_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulw_1__0(Vsim_HLS_fp17_mul* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp17_mul___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulw_1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__917__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__917__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__917__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__917__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__917__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__917__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__917__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__917__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__922__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__922__Vfuncout = 0;
    CData/*6:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__922__vector;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__922__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__927__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__927__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__927__vector;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__927__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__937__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__937__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__937__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__937__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__937__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__937__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__937__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__937__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__938__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__938__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__938__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__938__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__938__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__938__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__938__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__938__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__952__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__952__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__952__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__952__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__952__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__952__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__952__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__952__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__953__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__953__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__953__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__953__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__953__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__953__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__953__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__953__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__954__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__954__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__954__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__954__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__954__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__954__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__954__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__954__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__961__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__961__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__961__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__961__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__961__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__961__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__961__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__961__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__962__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__962__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__962__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__962__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__962__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__962__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__962__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__962__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__963__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__963__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__963__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__963__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__963__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__963__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__963__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__963__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__964__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__964__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__964__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__964__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__964__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__964__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__964__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__964__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__965__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__965__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__965__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__965__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__965__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__965__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__965__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__965__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__968__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__968__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__968__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__968__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__968__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__968__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__968__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__968__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__969__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__969__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__969__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__969__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__969__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__969__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__969__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__969__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__970__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__970__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__970__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__970__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__970__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__970__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__970__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__970__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__972__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__972__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__972__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__972__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__972__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__972__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__972__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__972__sel = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__974__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__974__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__974__input_0;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__974__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__974__input_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__974__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__974__sel;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__974__sel = 0;
    // Body
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__974__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__974__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__974__input_0 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__u_HLS_fp17_mulw_0.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__d;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__974__sel)
            ? __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__974__input_1
            : __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__974__input_0);
    __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__974__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_inst__DOT__HLS_fp17_mul_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_17_2_2__974__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_56 
        = (IData)(((0x0000fc00U != (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                   | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_else_2_acc_1_nl 
        = (0x000000ffU & (VL_EXTEND_II(8,7, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__918__vector 
                            = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x0aU));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__918__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__918__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__918__Vfuncout))) 
                          + VL_EXTEND_II(8,7, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__919__vector 
                            = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                              >> 0x0aU));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__919__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__919__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__919__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_if_2_FpMul_6U_10U_if_2_or_tmp 
        = ((0U == (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
           | (0U == (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_oelse_1_acc_1_nl 
        = (0x000000ffU & ((IData)(0x61U) + VL_EXTEND_II(8,7, 
                                                        ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__924__vector 
                            = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                              >> 0x0aU));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__924__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__924__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_7__924__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_60_rgt 
        = ((IData)(((0x0000fc00U != (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                    | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt)))) 
           & (IData)((((0x0000fc00U == (0x0000fc00U 
                                        & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                       & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                      & (0U != (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt)))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__937__sel 
        = (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__937__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_21;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__937__input_0 
        = ((0x3fU != (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt 
                                     >> 0x0000000aU))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_21));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__937__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__937__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__937__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__937__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_22_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__937__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_48 
        = (1U & ((~ (IData)(((0x0000fc00U == (0x0000fc00U 
                                              & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt)) 
                             & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_21)))) 
                 | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_b_rsci_d_mxwt))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__917__sel 
        = (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__917__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_56;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__917__input_0 
        = ((0x3fU != (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                     >> 0x0000000aU))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_56));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__917__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__917__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__917__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__917__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_35_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__917__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_else_2_if_acc_nl 
        = (0x000000ffU & ((IData)(0x51U) + VL_EXTEND_II(8,7, 
                                                        ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__921__vector 
                            = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_else_2_acc_1_nl));
                        vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__Vstatic__tmp 
                            = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__921__vector), 1U));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__921__Vfuncout 
                            = (0x0000003fU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__Vstatic__tmp));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__920__vector 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_6_1__921__Vfuncout;
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__920__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__920__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2u_6_7__920__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_oelse_1_acc_nl 
        = (0x000001ffU & (VL_EXTEND_II(9,8, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__925__vector 
                            = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_oelse_1_acc_1_nl));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__925__Vfuncout 
                            = ((0x00000080U & ((IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__925__vector) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__925__vector));
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_s2s_7_8__925__Vfuncout))) 
                          + VL_EXTEND_II(9,8, ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__926__vector 
                            = (0x0000003fU & (vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__chn_a_rsci_d_mxwt 
                                              >> 0x0aU));
                        vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__926__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__926__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_mul_core_inst__DOT__conv_u2s_6_8__926__Vfuncout)))));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__938__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__938__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_22_nl;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__938__input_0 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_32)));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__938__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__938__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__938__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__938__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_tmp_23 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__938__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__and_61_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_35_nl) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__922__vector 
        = (0x0000007fU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_else_2_if_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp 
        = (0x0000007fU & VL_SHIFTR_III(7,7,32, (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__922__vector), 6U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__922__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_7_1_6__922__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__927__vector 
        = (0x000000ffU & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nl_FpMul_6U_10U_oelse_1_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp 
        = (0x000000ffU & VL_SHIFTR_III(8,8,32, (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__927__vector), 7U));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__927__Vfuncout 
        = (1U & (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__Vstatic__tmp));
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_oelse_1_acc_itm_7_1 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__readslicef_8_1_7__927__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__964__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__964__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__964__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_48;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__964__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__964__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__964__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__964__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_25_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__964__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__969__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__969__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__nor_tmp_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__969__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_52;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__969__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__969__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__969__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__969__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_30_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__969__Vfuncout;
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
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__965__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_68_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__965__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_48;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__965__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_25_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__965__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__965__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__965__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__965__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_26_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__965__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__970__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_68_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__970__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_52;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__970__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_30_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__970__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__970__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__970__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__970__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_31_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__970__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__952__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__952__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__952__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_4;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__952__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__952__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__952__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__952__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__952__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_40 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_else_2_if_acc_itm_6_1)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_4)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__968__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__968__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_26_nl;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__968__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_28_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__968__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__968__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__968__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__968__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_29_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__968__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__972__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__972__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_31_nl)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__972__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_32_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__972__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__972__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__972__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__972__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_33_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__972__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__953__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__953__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_4;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__953__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__953__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__953__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__953__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__953__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_1_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__953__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__961__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__961__input_1 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__main_stage_v_1)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__961__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_40;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__961__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__961__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__961__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__961__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_18_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__961__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__954__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__FpMul_6U_10U_lor_1_lpi_1_dfm_st_3;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__954__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_4)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__954__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_1_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__954__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__954__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__954__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__954__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_2_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__954__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__962__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_inst__DOT__HLS_fp17_mul_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__962__input_1 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_40;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__962__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_18_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__962__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__962__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__962__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__962__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_19_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__962__Vfuncout;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__963__sel 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_65_cse;
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__963__input_1 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_5_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__or_tmp_40)));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__963__input_0 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_19_nl;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__963__sel)
            ? (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__963__input_1)
            : (IData)(__Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__963__input_0));
    __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__963__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_mul_core_inst__DOT__mux_20_nl 
        = __Vfunc_HLS_fp17_mul_core_inst__DOT__MUX_s_1_2_2__963__Vfuncout;
}
