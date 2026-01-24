// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_HLS_fp32_sub___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X6__u_fp_sub__1(Vsim_HLS_fp32_sub* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_sub___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X6__u_fp_sub__1\n"); );
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
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__824__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__824__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__824__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__824__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__824__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__824__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__824__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__824__sel = 0;
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
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__839__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__839__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__839__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__839__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__839__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__839__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__839__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__839__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__841__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__841__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__841__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__841__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__841__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__841__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__841__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__841__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X6.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct) 
              & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X6.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt)));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__and_dcpl_7 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
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
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__and_dcpl_15 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_3)) 
           & (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_3_mx0c1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_2)) 
              & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_3)));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__and_dcpl_13 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_3));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_tmp_3 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_2)));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_2_mx0c1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_2) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_1)) 
              & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_cse)));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__and_dcpl_28 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__and_dcpl_29 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_cse));
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
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_22_0_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_6)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__and_dcpl_13));
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
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_FpSignedBitsToFloat_8U_23U_1_or_1_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__and_dcpl_28) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__and_dcpl_29));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_and_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_tmp_16) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__and_dcpl_29));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_and_1_rgt 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_tmp_16)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__and_dcpl_29));
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
}

void Vsim_HLS_fp32_sub___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X6__u_fp_sub__0(Vsim_HLS_fp32_sub* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_sub___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X6__u_fp_sub__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__853__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__853__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__853__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__853__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__853__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__853__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__853__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__853__sel = 0;
    // Body
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
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_IsNaN_8U_23U_nor_tmp 
        = (1U & (~ (IData)(((0x7f800000U != (0x7f800000U 
                                             & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                            | (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__chn_a_rsci_d_mxwt))))));
}

void Vsim_HLS_fp32_sub___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X6__u_fp_sub__1(Vsim_HLS_fp32_sub* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_sub___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X6__u_fp_sub__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__854__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__854__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__854__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__854__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__854__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__854__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__854__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__854__sel = 0;
    // Body
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
}

void Vsim_HLS_fp32_sub___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X6__u_fp_sub__2(Vsim_HLS_fp32_sub* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_sub___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X6__u_fp_sub__2\n"); );
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
}

void Vsim_HLS_fp32_sub___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X6__u_fp_sub__3(Vsim_HLS_fp32_sub* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_sub___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X6__u_fp_sub__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_9_1_8__805__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_9_1_8__805__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_9_1_8__805__vector;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_9_1_8__805__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_24_1_23__826__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_24_1_23__826__Vfuncout = 0;
    IData/*23:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_24_1_23__826__vector;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_24_1_23__826__vector = 0;
    // Body
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
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_a_greater_FpAdd_8U_23U_is_a_greater_or_cse 
        = (((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_aelse_acc_itm_23_1)) 
            & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_equal_tmp)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_a_greater_acc_1_itm_8_1));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__and_dcpl_33 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_a_greater_acc_1_itm_8_1)) 
              & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_equal_tmp)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_aelse_acc_itm_23_1))));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_FpAdd_8U_23U_or_1_cse 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_a_greater_FpAdd_8U_23U_is_a_greater_or_cse) 
            & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_cse)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__and_dcpl_33));
}

void Vsim_HLS_fp32_sub___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X6__u_fp_sub__4(Vsim_HLS_fp32_sub* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_sub___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X6__u_fp_sub__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
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
    vlSelfRef.HLS_fp32_sub_core_inst__DOT____VdfgRegularize_hd722136d_0_3 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_IsNaN_8U_23U_nor_tmp) 
                 | (~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nor_tmp_1))));
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
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_1_and_cse 
        = ((IData)(vlSelfRef.HLS_fp32_sub_core_inst__DOT____VdfgRegularize_hd722136d_0_5) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__mux_28_nl));
}

void Vsim_HLS_fp32_sub___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X7__u_fp_sub__0(Vsim_HLS_fp32_sub* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_sub___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X7__u_fp_sub__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
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
    IData/*22:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_23_2_2__884__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_23_2_2__884__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_23_2_2__884__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_23_2_2__884__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_23_2_2__884__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_23_2_2__884__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_23_2_2__884__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_23_2_2__884__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_4_2__885__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_4_2__885__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_4_2__885__input_3;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_4_2__885__input_3 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_4_2__885__input_2;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_4_2__885__input_2 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_4_2__885__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_4_2__885__input_0 = 0;
    CData/*3:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_4_2__885__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_4_2__885__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__886__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__886__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__886__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__886__input_0 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__886__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__886__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__886__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__886__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_23_2_2__887__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_23_2_2__887__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_23_2_2__887__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_23_2_2__887__input_0 = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_23_2_2__887__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_23_2_2__887__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_23_2_2__887__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_23_2_2__887__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_s_1_3_2__888__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_s_1_3_2__888__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_s_1_3_2__888__input_2;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_s_1_3_2__888__input_2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_s_1_3_2__888__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_s_1_3_2__888__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_s_1_3_2__888__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_s_1_3_2__888__input_0 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_s_1_3_2__888__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_s_1_3_2__888__sel = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__889__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__889__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__889__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__889__input_0 = 0;
    CData/*7:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__889__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__889__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__889__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__889__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__890__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__890__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__890__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__890__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__890__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__890__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__890__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__890__sel = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_23_2_2__892__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_23_2_2__892__Vfuncout = 0;
    IData/*22:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_23_2_2__892__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_23_2_2__892__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_23_2_2__892__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_23_2_2__892__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__895__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__895__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__895__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__895__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__895__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__895__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__895__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__895__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__897__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__897__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__897__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__897__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__897__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__897__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__897__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__897__sel = 0;
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
    // Body
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt)))));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_bdwt)))));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__core_wten 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_core_fsm_inst__DOT__core_wen))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_IsZero_8U_23U_1_or_itm_2 
                = (0U != (0x7fffffffU & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__chn_b_rsci_d_mxwt));
            vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_IsZero_8U_23U_or_itm_2 
                = (0U != (0x7fffffffU & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__chn_a_rsci_d_mxwt));
        }
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__chn_b_rsci_d_mxwt;
        if (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_1_and_cse) {
            vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_1_nor_itm_2 
                = (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__chn_b_rsci_d_mxwt));
            vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_1_IsNaN_8U_23U_1_nand_itm_2 
                = (0xffU != (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__chn_b_rsci_d_mxwt 
                                            >> 0x00000017U)));
        }
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__chn_a_rsci_d_mxwt;
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_core_fsm_inst__DOT__core_wen) 
              & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__and_dcpl_7))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__mux_8_nl))) {
            vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_if_or_itm_2 
                = (0ULL != (0x0001ffffffffffffULL & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_mx0));
        }
        if (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_addition_and_cse) {
            vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_sva_2 
                = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_lshift_itm;
            vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_sva_2 
                = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_lshift_itm;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__and_dcpl_13) 
                | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__and_dcpl_15)))) {
            vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__and_dcpl_15)));
        }
        if (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_iswt0 
                = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__and_dcpl_13;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_IsZero_8U_23U_1_or_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_IsZero_8U_23U_or_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__chn_b_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_1_nor_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_1_IsNaN_8U_23U_1_nand_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpNormalize_8U_49U_if_or_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_int_mant_p1_sva_2 = 0ULL;
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_b_int_mant_p1_sva_2 = 0ULL;
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_iswt0 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_iswt0));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_core_fsm_inst__DOT__core_wen) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_tmp_29))) {
            vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__reg_chn_a_rsci_ld_core_psct_cse 
                = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_tmp_29;
        }
        if (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_addition_and_cse) {
            vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__reg_FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_xor_svs_2_cse 
                = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_xor_svs_3;
            vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_5 
                = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_4;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__reg_chn_a_rsci_ld_core_psct_cse = 0U;
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__reg_FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_xor_svs_2_cse = 0U;
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_5 = 0U;
    }
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
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__reg_chn_a_rsci_iswt0_cse 
                = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_en_1)) 
                            & (((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_core_fsm_inst__DOT__state_var)
                                 ? 2U : 1U) >> 1U))));
        }
    } else {
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__reg_chn_a_rsci_iswt0_cse = 0U;
    }
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__reg_chn_a_rsci_iswt0_cse));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_and_8_cse) {
            vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6 
                = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_5;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_6 = 0U;
    }
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
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_and_8_cse) {
            vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_mx0;
        }
    } else {
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 = 0ULL;
    }
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
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_and_1_cse) {
            __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_4_2__885__sel 
                = ((((2U & (((~ ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_and_tmp) 
                                 | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm_2_mx0))) 
                             & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_or_cse))) 
                            << 1U)) | ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_and_tmp) 
                                       & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm_2_mx0)) 
                                          & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_or_cse))))) 
                    << 2U) | ((((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_or_cse)) 
                                & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm_2_mx0)) 
                               << 1U) | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_or_cse)));
            __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_4_2__885__input_0 
                = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_30_23_itm_4;
            __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_4_2__885__input_2 
                = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_o_expo_lpi_1_dfm_2)));
            __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_4_2__885__input_3 
                = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_o_expo_lpi_1_dfm_2;
            vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_4_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_4_2__885__input_0) 
                   & (- (IData)((1U & (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_4_2__885__sel)))));
            vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_4_2__Vstatic__result) 
                   | (0xfeU & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_4_2__885__sel) 
                                                >> 1U))))));
            vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_4_2__885__input_2) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_4_2__885__sel) 
                                          >> 2U))))));
            vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_4_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_4_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_4_2__885__input_3) 
                      & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_4_2__885__sel) 
                                          >> 3U))))));
            __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_4_2__885__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_4_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_30_23 
                = __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_v_8_4_2__885__Vfuncout;
            vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_31 
                = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_mux_13_itm_4;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_core_fsm_inst__DOT__core_wen) 
             & ((((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_cse) 
                  & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_3)) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_6)) 
                | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_22_0_mx0c1)))) {
            __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_23_2_2__884__sel 
                = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4)) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_22_0_mx0c1));
            __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_23_2_2__884__input_1 
                = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_FpAdd_8U_23U_or_1_nl;
            __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_23_2_2__884__input_0 
                = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_22_0_itm_4;
            vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_23_2_2__884__sel)
                    ? __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_23_2_2__884__input_1
                    : __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_23_2_2__884__input_0);
            __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_23_2_2__884__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_22_0 
                = __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_23_2_2__884__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_xor_svs_3 
                = ((vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__chn_a_rsci_d_mxwt 
                    ^ vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__chn_b_rsci_d_mxwt) 
                   >> 0x1fU);
            vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_4 
                = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_a_greater_FpAdd_8U_23U_is_a_greater_or_cse;
        }
        if (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_core_fsm_inst__DOT__state_var = 1U;
        }
        if (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_addition_and_cse) {
            vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_5 
                = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_4;
        }
        if (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_and_3_cse) {
            vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_30_23_itm_4 
                = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_30_23_itm_3;
            vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_22_0_itm_4 
                = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_22_0_itm_3;
        }
        if (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_and_8_cse) {
            vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_mux_13_itm_4 
                = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_mux_13_itm_3;
            vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4 
                = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3;
            vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_6 
                = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_5;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_core_fsm_inst__DOT__core_wen) 
             & (((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_cse) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_2)) 
                | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_3_mx0c1)))) {
            vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_3 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_3_mx0c1)));
        }
    } else {
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_30_23 = 0U;
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_31 = 0U;
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_22_0 = 0U;
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_FpAdd_8U_23U_is_addition_xor_svs_3 = 0U;
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_a_greater_lor_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_core_fsm_inst__DOT__state_var = 0U;
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_5 = 0U;
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_30_23_itm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_mux_13_itm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_6 = 0U;
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_3 = 0U;
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_22_0_itm_4 = 0U;
    }
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
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_FpAdd_8U_23U_or_1_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__mux_13_cse))) {
            __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__889__sel 
                = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__and_dcpl_33;
            __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__889__input_1 
                = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__chn_b_rsci_d_mxwt 
                                  >> 0x17U));
            __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__889__input_0 
                = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__chn_a_rsci_d_mxwt 
                                  >> 0x17U));
            vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__889__sel)
                    ? (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__889__input_1)
                    : (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__889__input_0));
            __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__889__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_4 
                = __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__889__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_FpSignedBitsToFloat_8U_23U_1_or_1_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__mux_23_nl))) {
            __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__886__sel 
                = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__and_dcpl_29;
            __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__886__input_1 
                = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__b_sva_36 
                                  >> 0x17U));
            __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__886__input_0 
                = (0x000000ffU & (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_sva_36 
                                  >> 0x17U));
            vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__886__sel)
                    ? (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__886__input_1)
                    : (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__886__input_0));
            __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__886__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_30_23_itm_3 
                = __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_8_2_2__886__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_core_fsm_inst__DOT__core_wen) 
              & (((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__and_dcpl_28) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_and_rgt)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_and_1_rgt))) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__mux_4_cse))) {
            __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_s_1_3_2__888__sel 
                = (((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__and_dcpl_28) 
                    << 2U) | (((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_and_rgt) 
                               << 1U) | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_and_1_rgt)));
            __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_s_1_3_2__888__input_0 
                = (1U & (~ (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__b_sva_36 
                            >> 0x1fU)));
            __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_s_1_3_2__888__input_1 
                = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_mux_1_itm_2;
            __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_s_1_3_2__888__input_2 
                = (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_sva_36 
                   >> 0x1fU);
            vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_s_1_3_2__888__input_0) 
                   & (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_s_1_3_2__888__sel));
            vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_s_1_3_2__888__input_1) 
                      & ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_s_1_3_2__888__sel) 
                         >> 1U)));
            vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result 
                = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result) 
                   | ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_s_1_3_2__888__input_2) 
                      & ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_s_1_3_2__888__sel) 
                         >> 2U)));
            __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_s_1_3_2__888__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX1HOT_s_1_3_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_mux_13_itm_3 
                = __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX1HOT_s_1_3_2__888__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_addition_and_cse) {
            vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_tmp_16)));
            vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_5 
                = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_core_fsm_inst__DOT__core_wen) 
             & (((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_cse) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_1)) 
                | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_2_mx0c1)))) {
            vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_2 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_2_mx0c1)));
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_FpSignedBitsToFloat_8U_23U_1_or_1_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__mux_25_nl))) {
            __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_23_2_2__887__sel 
                = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__and_dcpl_29;
            __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_23_2_2__887__input_1 
                = (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__b_sva_36);
            __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_23_2_2__887__input_0 
                = (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_sva_36);
            vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_v_23_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_23_2_2__887__sel)
                    ? __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_23_2_2__887__input_1
                    : __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_23_2_2__887__input_0);
            __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_23_2_2__887__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_v_23_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_22_0_itm_3 
                = __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_v_23_2_2__887__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_core_fsm_inst__DOT__core_wen) 
              & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_FpAdd_8U_23U_or_1_cse)) 
             & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__mux_27_nl))) {
            __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__890__sel 
                = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__and_dcpl_33;
            __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__890__input_1 
                = (1U & (~ (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__chn_b_rsci_d_mxwt 
                            >> 0x1fU)));
            __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__890__input_0 
                = (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__chn_a_rsci_d_mxwt 
                   >> 0x1fU);
            vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__890__sel)
                    ? (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__890__input_1)
                    : (IData)(__Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__890__input_0));
            __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__890__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_mux_1_itm_2 
                = __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__890__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_aelse_and_cse) {
            vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4 
                = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_IsNaN_8U_23U_nor_tmp;
            vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__b_sva_36 
                = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__chn_b_rsci_d_mxwt;
            vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_sva_36 
                = vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__chn_a_rsci_d_mxwt;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__chn_b_rsci_unreg_inst__DOT__in_0) 
                | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_1_mx0c1)))) {
            vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_1 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_1_mx0c1)));
        }
    } else {
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_qr_lpi_1_dfm_4 = 0U;
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_30_23_itm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_mux_13_itm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_5 = 0U;
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_2 = 0U;
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_slc_FpSignedBitsToFloat_8U_23U_1_ubits_22_0_itm_3 = 0U;
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_mux_1_itm_2 = 0U;
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4 = 0U;
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_1 = 0U;
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__b_sva_36 = 0U;
        vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_a_sva_36 = 0U;
    }
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_inf_lpi_1_dfm 
        = (1U & (~ ((~ (IData)((vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_int_mant_p1_lpi_1_dfm_2 
                                >> 0x00000031U))) | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_if_3_if_acc_1_itm_7_1))));
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
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__reg_chn_a_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__reg_chn_a_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_ctrl_inst__DOT__chn_b_rsci_ogwt));
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
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_or_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_4) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_6));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_23 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__c_h_1_14) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__leading_sign_49_0_rg__DOT__IntLeadZero_49U_leading_sign_49_0_rtn_wrs_c_90_5_sdt_5));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_tmp_16 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_1_IsNaN_8U_23U_1_nand_itm_2) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_1_nor_itm_2));
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
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nor_tmp_11 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_1_land_lpi_1_dfm_3) 
            | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_5)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_2));
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
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nor_32_nl 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_1)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_tmp_16))));
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

void Vsim_HLS_fp32_sub___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X7__u_fp_sub__1(Vsim_HLS_fp32_sub* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_sub___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X7__u_fp_sub__1\n"); );
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
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__881__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__881__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__881__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__881__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__881__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__881__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__881__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__881__sel = 0;
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
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__896__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__896__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__896__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__896__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__896__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__896__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__896__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__896__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__898__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__898__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__898__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__898__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__898__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__898__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__898__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__MUX_s_1_2_2__898__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X7.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct) 
              & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X7.__PVT__u_HLS_fp32_to_fp17__DOT__HLS_fp32_to_fp17_core_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp32_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt)));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__and_dcpl_7 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_inst__DOT__HLS_fp32_sub_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
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
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__and_dcpl_15 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_3)) 
           & (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_3_mx0c1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_2)) 
              & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_3)));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__and_dcpl_13 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_3));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_tmp_3 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_2)));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_2_mx0c1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_2) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__main_stage_v_1)) 
              & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_cse)));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__and_dcpl_28 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__and_dcpl_29 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_st_4)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_cse));
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
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__chn_o_rsci_d_22_0_mx0c1 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_land_lpi_1_dfm_6)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__and_dcpl_13));
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
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_FpSignedBitsToFloat_8U_23U_1_or_1_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__and_dcpl_28) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__and_dcpl_29));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_and_rgt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_tmp_16) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__and_dcpl_29));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_and_1_rgt 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_tmp_16)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__and_dcpl_29));
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
}

void Vsim_HLS_fp32_sub___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X7__u_fp_sub__0(Vsim_HLS_fp32_sub* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_sub___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X7__u_fp_sub__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__910__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__910__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__910__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__910__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__910__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__910__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__910__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_inst__DOT__HLS_fp32_sub_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_32_2_2__910__sel = 0;
    // Body
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
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_IsNaN_8U_23U_nor_tmp 
        = (1U & (~ (IData)(((0x7f800000U != (0x7f800000U 
                                             & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                            | (0U == (0x007fffffU & vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__chn_a_rsci_d_mxwt))))));
}

void Vsim_HLS_fp32_sub___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X7__u_fp_sub__1(Vsim_HLS_fp32_sub* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_sub___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X7__u_fp_sub__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__911__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__911__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__911__input_0;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__911__input_0 = 0;
    IData/*31:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__911__input_1;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__911__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__911__sel;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_inst__DOT__HLS_fp32_sub_core_chn_b_rsci_chn_b_wait_dp_inst__DOT__MUX_v_32_2_2__911__sel = 0;
    // Body
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
}

void Vsim_HLS_fp32_sub___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X7__u_fp_sub__2(Vsim_HLS_fp32_sub* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_sub___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X7__u_fp_sub__2\n"); );
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
}

void Vsim_HLS_fp32_sub___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X7__u_fp_sub__3(Vsim_HLS_fp32_sub* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_sub___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X7__u_fp_sub__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_9_1_8__862__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_9_1_8__862__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_9_1_8__862__vector;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_9_1_8__862__vector = 0;
    CData/*0:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_24_1_23__883__Vfuncout;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_24_1_23__883__Vfuncout = 0;
    IData/*23:0*/ __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_24_1_23__883__vector;
    __Vfunc_HLS_fp32_sub_core_inst__DOT__readslicef_24_1_23__883__vector = 0;
    // Body
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
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_a_greater_FpAdd_8U_23U_is_a_greater_or_cse 
        = (((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_aelse_acc_itm_23_1)) 
            & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_equal_tmp)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_a_greater_acc_1_itm_8_1));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__and_dcpl_33 
        = ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_cse) 
           & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_a_greater_acc_1_itm_8_1)) 
              & ((~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_equal_tmp)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_a_greater_oif_aelse_acc_itm_23_1))));
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpSignedBitsToFloat_8U_23U_1_FpAdd_8U_23U_or_1_cse 
        = (((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__FpAdd_8U_23U_is_a_greater_FpAdd_8U_23U_is_a_greater_or_cse) 
            & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__or_cse)) 
           | (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__and_dcpl_33));
}

void Vsim_HLS_fp32_sub___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X7__u_fp_sub__4(Vsim_HLS_fp32_sub* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp32_sub___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__u_interp_X7__u_fp_sub__4\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
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
    vlSelfRef.HLS_fp32_sub_core_inst__DOT____VdfgRegularize_hd722136d_0_3 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_IsNaN_8U_23U_nor_tmp) 
                 | (~ (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__nor_tmp_1))));
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
    vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__IsNaN_8U_23U_1_and_cse 
        = ((IData)(vlSelfRef.HLS_fp32_sub_core_inst__DOT____VdfgRegularize_hd722136d_0_5) 
           & (IData)(vlSelfRef.__PVT__HLS_fp32_sub_core_inst__DOT__mux_28_nl));
}
