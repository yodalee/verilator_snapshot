// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_HLS_fp17_to_fp32___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_0__0(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__5__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__5__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__5__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__5__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__5__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__5__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__5__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__5__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__6__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__6__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__6__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__6__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__6__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__6__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__6__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__6__sel = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__7__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__7__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__7__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__7__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__7__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__7__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt)))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt;
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0))) {
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0;
        }
        if (vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_and_4_cse) {
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_30_28 
                = (7U & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpExpoWidthInc_6U_8U_23U_0U_1U_FpExpoWidthInc_6U_8U_23U_0U_1U_and_nl) 
                          | (- (IData)((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0)))) 
                         | (- (IData)((1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsNaN_6U_23U_aelse_not_2_nl)))))));
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_31 
                = (1U & (vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt 
                         >> 0x10U));
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_46_cse) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_48_cse)))) {
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__6__sel 
                = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0) 
                            & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_48_cse))));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__6__input_1 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_22_13_lpi_1_dfm;
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__6__input_0 
                = (0x000003ffU & (- (IData)((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0))));
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__6__sel)
                    ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__6__input_1)
                    : (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__6__input_0));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__6__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_22_13 
                = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__6__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
              & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U))) & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_3)))) {
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_10 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
             & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_46_cse) 
                 | (((((IData)((0x0000fc00U == (0x0000fc00U 
                                                & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                       & (0U != (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                      & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
                     & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1)))) {
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__5__sel 
                = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0) 
                            & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1))));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__5__input_1 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_9_0_lpi_1_dfm;
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__5__input_0 
                = (0x000003ffU & (- (IData)((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0))));
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__5__sel)
                    ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__5__input_1)
                    : (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__5__input_0));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__5__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0 
                = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__5__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
             & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_3) 
                   | ((~ (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                          & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))) 
                      & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                          ? 2U : 1U)))))) {
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__7__sel 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsNaN_6U_23U_aelse_not_2_nl)));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__7__input_0 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpExpoWidthInc_6U_8U_23U_0U_1U_mux_5_nl;
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__7__sel)
                    ? 0x1fU : (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__7__input_0));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__7__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_27_23 
                = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__7__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_iswt0_cse 
                = vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0;
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_iswt0 
                = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_4_mdf)) 
                            & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                                 ? 2U : 1U) >> 1U))));
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var = 1U;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_dcpl_25)))) {
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_dcpl_25)));
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_iswt0_cse = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_30_28 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_22_13 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_31 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_10 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_iswt0 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_27_23 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__core_wten 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_iswt0_cse));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_iswt0));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__d 
        = ((((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_31) 
             << 0x0000001fU) | (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_30_28) 
                                 << 0x0000001cU) | 
                                ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_27_23) 
                                 << 0x00000017U))) 
           | (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_22_13) 
               << 0x0000000dU) | ((0x00001c00U & ((- (IData)((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_10))) 
                                                  << 0x0000000aU)) 
                                  | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
}

void Vsim_HLS_fp17_to_fp32___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_0__1(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_0.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_0.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
}

void Vsim_HLS_fp17_to_fp32___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_0__0(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__3__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__3__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__3__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__3__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__3__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__3__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__4__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__4__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__4__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__4__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__4__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__4__sel = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__8__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__8__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__8__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__8__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__8__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__8__sel = 0;
    CData/*2:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__10__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__10__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__10__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__10__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__10__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__10__sel = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__11__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__11__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__11__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__11__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__11__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__11__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__11__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__11__sel = 0;
    // Body
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__11__sel 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__11__input_1 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__11__input_0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)
            ? (0x0001ffffU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__p1_pipe_data[0U])
            : 0U);
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__11__sel)
            ? __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__11__input_1
            : __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__11__input_0);
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__11__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__11__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__nl_FpExpoWidthInc_6U_8U_23U_0U_1U_else_acc_nl 
        = (0x0000000fU & ((IData)(1U) + VL_EXTEND_II(4,3, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__9__vector 
                            = (2U | (1U & (vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt 
                                           >> 0x0fU)));
                        vlSelfRef.__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__9__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__9__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__9__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_9 
        = (IData)(((0x0000fc00U != (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                   | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsNaN_6U_23U_aelse_not_2_nl 
        = (IData)(((0x0000fc00U != (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                   | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt))));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__10__sel 
        = (0U != (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__10__input_1 
        = (7U & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__nl_FpExpoWidthInc_6U_8U_23U_0U_1U_else_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__10__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__10__input_1)
            : 0U);
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__10__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpExpoWidthInc_6U_8U_23U_0U_1U_FpExpoWidthInc_6U_8U_23U_0U_1U_and_nl 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__10__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__3__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsNaN_6U_23U_aelse_not_2_nl)));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__3__input_1 
        = (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt);
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__3__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__3__input_1)
            : 0U);
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__3__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_9_0_lpi_1_dfm 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__3__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__4__sel 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsNaN_6U_23U_aelse_not_2_nl;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__4__input_1 
        = (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt);
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__4__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__4__input_1)
            : 0U);
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__4__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_22_13_lpi_1_dfm 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__4__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0 
        = (1U & (~ ((0U != (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_22_13_lpi_1_dfm)) 
                    | (IData)(((0U != (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_9_0_lpi_1_dfm)) 
                               | (0x0000fc00U != (0x0000fc00U 
                                                  & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt)))))));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__8__sel 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__8__input_0 
        = (0x0000001fU & (vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt 
                          >> 0x0aU));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__8__sel)
            ? 0x1eU : (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__8__input_0));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__8__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpExpoWidthInc_6U_8U_23U_0U_1U_mux_5_nl 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__8__Vfuncout;
}

void Vsim_HLS_fp17_to_fp32___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_0__1(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_fp17_to_fp32_core_inst__DOT____VdfgRegularize_he2f8b490_0_0;
    HLS_fp17_to_fp32_core_inst__DOT____VdfgRegularize_he2f8b490_0_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__0__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__0__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__0__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__0__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__0__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__0__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__0__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__0__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__1__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__1__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__1__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__1__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__2__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__2__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__2__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__2__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_6) 
           & (0x0ffeU == (0x0ffeU & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp17T32_i_prdy))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_dcpl_25 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_3 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
                        & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_4_mdf 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_cse));
    HLS_fp17_to_fp32_core_inst__DOT____VdfgRegularize_he2f8b490_0_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_4_mdf) 
                 | ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__0__sel 
        = (1U & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__1__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_4_mdf) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__1__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__1__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__0__input_1 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__1__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__2__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
            ? 0U : 1U);
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__2__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__2__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__0__input_0 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__2__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__0__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__0__input_1)
            : (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__0__input_0));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__0__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_nvdla_float_h_ln477_assert_iExpoWidth_le_oExpoWidth_sig_mx0 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__0__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_46_cse 
        = (IData)(((((0x0000fc00U == (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                     & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_cse)) 
                    & (IData)(HLS_fp17_to_fp32_core_inst__DOT____VdfgRegularize_he2f8b490_0_0)) 
                   & (0U != (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt))));
    vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_cse) 
           & (IData)(HLS_fp17_to_fp32_core_inst__DOT____VdfgRegularize_he2f8b490_0_0));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_48_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_9) 
           & (IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
                 & ((~ (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_48_cse) 
           | ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_9) 
              & ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_and_4_cse 
        = ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_3) 
               | ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U))) & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen));
}

void Vsim_HLS_fp17_to_fp32___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_1__0(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__17__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__17__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__17__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__17__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__17__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__17__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__17__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__17__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__18__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__18__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__18__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__18__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__18__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__18__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__18__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__18__sel = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__19__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__19__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__19__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__19__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__19__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__19__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt)))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt;
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0))) {
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0;
        }
        if (vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_and_4_cse) {
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_30_28 
                = (7U & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpExpoWidthInc_6U_8U_23U_0U_1U_FpExpoWidthInc_6U_8U_23U_0U_1U_and_nl) 
                          | (- (IData)((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0)))) 
                         | (- (IData)((1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsNaN_6U_23U_aelse_not_2_nl)))))));
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_31 
                = (1U & (vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt 
                         >> 0x10U));
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_46_cse) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_48_cse)))) {
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__18__sel 
                = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0) 
                            & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_48_cse))));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__18__input_1 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_22_13_lpi_1_dfm;
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__18__input_0 
                = (0x000003ffU & (- (IData)((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0))));
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__18__sel)
                    ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__18__input_1)
                    : (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__18__input_0));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__18__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_22_13 
                = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__18__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
              & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U))) & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_3)))) {
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_10 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
             & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_46_cse) 
                 | (((((IData)((0x0000fc00U == (0x0000fc00U 
                                                & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                       & (0U != (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                      & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
                     & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1)))) {
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__17__sel 
                = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0) 
                            & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1))));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__17__input_1 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_9_0_lpi_1_dfm;
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__17__input_0 
                = (0x000003ffU & (- (IData)((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0))));
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__17__sel)
                    ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__17__input_1)
                    : (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__17__input_0));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__17__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0 
                = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__17__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
             & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_3) 
                   | ((~ (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                          & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))) 
                      & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                          ? 2U : 1U)))))) {
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__19__sel 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsNaN_6U_23U_aelse_not_2_nl)));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__19__input_0 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpExpoWidthInc_6U_8U_23U_0U_1U_mux_5_nl;
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__19__sel)
                    ? 0x1fU : (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__19__input_0));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__19__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_27_23 
                = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__19__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_iswt0_cse 
                = vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0;
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_iswt0 
                = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_4_mdf)) 
                            & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                                 ? 2U : 1U) >> 1U))));
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var = 1U;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_dcpl_25)))) {
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_dcpl_25)));
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_iswt0_cse = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_30_28 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_22_13 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_31 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_iswt0 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_10 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_27_23 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__core_wten 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_iswt0_cse));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_iswt0));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__d 
        = ((((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_31) 
             << 0x0000001fU) | (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_30_28) 
                                 << 0x0000001cU) | 
                                ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_27_23) 
                                 << 0x00000017U))) 
           | (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_22_13) 
               << 0x0000000dU) | ((0x00001c00U & ((- (IData)((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_10))) 
                                                  << 0x0000000aU)) 
                                  | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
}

void Vsim_HLS_fp17_to_fp32___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_1__1(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_1__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_1.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_1.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
}

void Vsim_HLS_fp17_to_fp32___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_1__0(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__15__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__15__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__15__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__15__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__15__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__15__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__16__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__16__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__16__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__16__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__16__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__16__sel = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__20__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__20__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__20__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__20__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__20__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__20__sel = 0;
    CData/*2:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__22__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__22__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__22__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__22__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__22__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__22__sel = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__23__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__23__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__23__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__23__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__23__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__23__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__23__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__23__sel = 0;
    // Body
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__23__sel 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__23__input_1 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__23__input_0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)
            ? (0x0001ffffU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__p1_pipe_data[1U] 
                               << 0x0000000eU) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__p1_pipe_data[0U] 
                                                  >> 0x00000012U)))
            : 0U);
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__23__sel)
            ? __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__23__input_1
            : __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__23__input_0);
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__23__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__23__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__nl_FpExpoWidthInc_6U_8U_23U_0U_1U_else_acc_nl 
        = (0x0000000fU & ((IData)(1U) + VL_EXTEND_II(4,3, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__21__vector 
                            = (2U | (1U & (vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt 
                                           >> 0x0fU)));
                        vlSelfRef.__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__21__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__21__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__21__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_9 
        = (IData)(((0x0000fc00U != (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                   | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsNaN_6U_23U_aelse_not_2_nl 
        = (IData)(((0x0000fc00U != (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                   | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt))));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__22__sel 
        = (0U != (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__22__input_1 
        = (7U & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__nl_FpExpoWidthInc_6U_8U_23U_0U_1U_else_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__22__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__22__input_1)
            : 0U);
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__22__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpExpoWidthInc_6U_8U_23U_0U_1U_FpExpoWidthInc_6U_8U_23U_0U_1U_and_nl 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__22__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__15__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsNaN_6U_23U_aelse_not_2_nl)));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__15__input_1 
        = (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt);
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__15__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__15__input_1)
            : 0U);
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__15__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_9_0_lpi_1_dfm 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__15__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__16__sel 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsNaN_6U_23U_aelse_not_2_nl;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__16__input_1 
        = (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt);
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__16__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__16__input_1)
            : 0U);
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__16__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_22_13_lpi_1_dfm 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__16__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0 
        = (1U & (~ ((0U != (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_22_13_lpi_1_dfm)) 
                    | (IData)(((0U != (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_9_0_lpi_1_dfm)) 
                               | (0x0000fc00U != (0x0000fc00U 
                                                  & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt)))))));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__20__sel 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__20__input_0 
        = (0x0000001fU & (vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt 
                          >> 0x0aU));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__20__sel)
            ? 0x1eU : (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__20__input_0));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__20__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpExpoWidthInc_6U_8U_23U_0U_1U_mux_5_nl 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__20__Vfuncout;
}

void Vsim_HLS_fp17_to_fp32___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_1__1(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_1__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_fp17_to_fp32_core_inst__DOT____VdfgRegularize_he2f8b490_0_0;
    HLS_fp17_to_fp32_core_inst__DOT____VdfgRegularize_he2f8b490_0_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__12__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__12__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__12__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__12__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__12__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__12__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__12__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__12__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__13__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__13__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__13__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__13__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__14__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__14__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__14__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__14__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_8) 
           & (IData)(((0x0ffcU == (0x0ffcU & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp17T32_i_prdy))) 
                      & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_0.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_dcpl_25 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_3 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
                        & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_4_mdf 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_cse));
    HLS_fp17_to_fp32_core_inst__DOT____VdfgRegularize_he2f8b490_0_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_4_mdf) 
                 | ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__12__sel 
        = (1U & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__13__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_4_mdf) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__13__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__13__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__12__input_1 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__13__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__14__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
            ? 0U : 1U);
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__14__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__14__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__12__input_0 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__14__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__12__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__12__input_1)
            : (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__12__input_0));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__12__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_nvdla_float_h_ln477_assert_iExpoWidth_le_oExpoWidth_sig_mx0 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__12__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_46_cse 
        = (IData)(((((0x0000fc00U == (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                     & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_cse)) 
                    & (IData)(HLS_fp17_to_fp32_core_inst__DOT____VdfgRegularize_he2f8b490_0_0)) 
                   & (0U != (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt))));
    vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_cse) 
           & (IData)(HLS_fp17_to_fp32_core_inst__DOT____VdfgRegularize_he2f8b490_0_0));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_48_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_9) 
           & (IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
                 & ((~ (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_48_cse) 
           | ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_9) 
              & ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_and_4_cse 
        = ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_3) 
               | ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U))) & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen));
}

void Vsim_HLS_fp17_to_fp32___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_2__0(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_2__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__29__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__29__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__29__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__29__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__29__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__29__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__29__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__29__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__30__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__30__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__30__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__30__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__30__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__30__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__30__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__30__sel = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__31__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__31__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__31__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__31__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__31__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__31__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt)))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt;
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0))) {
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0;
        }
        if (vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_and_4_cse) {
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_30_28 
                = (7U & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpExpoWidthInc_6U_8U_23U_0U_1U_FpExpoWidthInc_6U_8U_23U_0U_1U_and_nl) 
                          | (- (IData)((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0)))) 
                         | (- (IData)((1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsNaN_6U_23U_aelse_not_2_nl)))))));
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_31 
                = (1U & (vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt 
                         >> 0x10U));
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_46_cse) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_48_cse)))) {
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__30__sel 
                = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0) 
                            & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_48_cse))));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__30__input_1 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_22_13_lpi_1_dfm;
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__30__input_0 
                = (0x000003ffU & (- (IData)((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0))));
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__30__sel)
                    ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__30__input_1)
                    : (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__30__input_0));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__30__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_22_13 
                = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__30__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
              & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U))) & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_3)))) {
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_10 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
             & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_46_cse) 
                 | (((((IData)((0x0000fc00U == (0x0000fc00U 
                                                & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                       & (0U != (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                      & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
                     & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1)))) {
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__29__sel 
                = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0) 
                            & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1))));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__29__input_1 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_9_0_lpi_1_dfm;
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__29__input_0 
                = (0x000003ffU & (- (IData)((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0))));
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__29__sel)
                    ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__29__input_1)
                    : (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__29__input_0));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__29__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0 
                = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__29__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
             & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_3) 
                   | ((~ (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                          & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))) 
                      & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                          ? 2U : 1U)))))) {
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__31__sel 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsNaN_6U_23U_aelse_not_2_nl)));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__31__input_0 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpExpoWidthInc_6U_8U_23U_0U_1U_mux_5_nl;
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__31__sel)
                    ? 0x1fU : (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__31__input_0));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__31__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_27_23 
                = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__31__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_iswt0_cse 
                = vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0;
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_iswt0 
                = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_4_mdf)) 
                            & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                                 ? 2U : 1U) >> 1U))));
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var = 1U;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_dcpl_25)))) {
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_dcpl_25)));
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_iswt0_cse = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_30_28 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_22_13 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_31 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_iswt0 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_10 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_27_23 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__core_wten 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_iswt0_cse));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_iswt0));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__d 
        = ((((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_31) 
             << 0x0000001fU) | (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_30_28) 
                                 << 0x0000001cU) | 
                                ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_27_23) 
                                 << 0x00000017U))) 
           | (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_22_13) 
               << 0x0000000dU) | ((0x00001c00U & ((- (IData)((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_10))) 
                                                  << 0x0000000aU)) 
                                  | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
}

void Vsim_HLS_fp17_to_fp32___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_2__1(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_2__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_2.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_2.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
}

void Vsim_HLS_fp17_to_fp32___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_2__0(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_2__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__27__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__27__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__27__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__27__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__27__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__27__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__28__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__28__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__28__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__28__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__28__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__28__sel = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__32__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__32__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__32__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__32__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__32__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__32__sel = 0;
    CData/*2:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__34__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__34__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__34__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__34__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__34__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__34__sel = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__35__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__35__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__35__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__35__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__35__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__35__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__35__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__35__sel = 0;
    // Body
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__35__sel 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__35__input_1 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__35__input_0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)
            ? (0x0001ffffU & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__p1_pipe_data[1U] 
                              >> 4U)) : 0U);
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__35__sel)
            ? __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__35__input_1
            : __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__35__input_0);
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__35__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__35__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__nl_FpExpoWidthInc_6U_8U_23U_0U_1U_else_acc_nl 
        = (0x0000000fU & ((IData)(1U) + VL_EXTEND_II(4,3, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__33__vector 
                            = (2U | (1U & (vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt 
                                           >> 0x0fU)));
                        vlSelfRef.__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__33__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__33__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__33__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_9 
        = (IData)(((0x0000fc00U != (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                   | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsNaN_6U_23U_aelse_not_2_nl 
        = (IData)(((0x0000fc00U != (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                   | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt))));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__34__sel 
        = (0U != (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__34__input_1 
        = (7U & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__nl_FpExpoWidthInc_6U_8U_23U_0U_1U_else_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__34__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__34__input_1)
            : 0U);
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__34__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpExpoWidthInc_6U_8U_23U_0U_1U_FpExpoWidthInc_6U_8U_23U_0U_1U_and_nl 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__34__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__27__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsNaN_6U_23U_aelse_not_2_nl)));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__27__input_1 
        = (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt);
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__27__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__27__input_1)
            : 0U);
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__27__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_9_0_lpi_1_dfm 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__27__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__28__sel 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsNaN_6U_23U_aelse_not_2_nl;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__28__input_1 
        = (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt);
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__28__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__28__input_1)
            : 0U);
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__28__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_22_13_lpi_1_dfm 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__28__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0 
        = (1U & (~ ((0U != (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_22_13_lpi_1_dfm)) 
                    | (IData)(((0U != (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_9_0_lpi_1_dfm)) 
                               | (0x0000fc00U != (0x0000fc00U 
                                                  & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt)))))));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__32__sel 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__32__input_0 
        = (0x0000001fU & (vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt 
                          >> 0x0aU));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__32__sel)
            ? 0x1eU : (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__32__input_0));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__32__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpExpoWidthInc_6U_8U_23U_0U_1U_mux_5_nl 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__32__Vfuncout;
}

void Vsim_HLS_fp17_to_fp32___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_2__1(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_2__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_fp17_to_fp32_core_inst__DOT____VdfgRegularize_he2f8b490_0_0;
    HLS_fp17_to_fp32_core_inst__DOT____VdfgRegularize_he2f8b490_0_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__24__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__24__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__24__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__24__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__24__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__24__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__24__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__24__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__25__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__25__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__25__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__25__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__26__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__26__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__26__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__26__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_9) 
           & (IData)(((0x0ff8U == (0x0ff8U & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp17T32_i_prdy))) 
                      & (3U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_13)))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_dcpl_25 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_3 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
                        & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_4_mdf 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_cse));
    HLS_fp17_to_fp32_core_inst__DOT____VdfgRegularize_he2f8b490_0_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_4_mdf) 
                 | ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__24__sel 
        = (1U & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__25__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_4_mdf) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__25__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__25__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__24__input_1 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__25__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__26__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
            ? 0U : 1U);
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__26__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__26__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__24__input_0 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__26__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__24__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__24__input_1)
            : (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__24__input_0));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__24__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_nvdla_float_h_ln477_assert_iExpoWidth_le_oExpoWidth_sig_mx0 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__24__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_46_cse 
        = (IData)(((((0x0000fc00U == (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                     & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_cse)) 
                    & (IData)(HLS_fp17_to_fp32_core_inst__DOT____VdfgRegularize_he2f8b490_0_0)) 
                   & (0U != (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt))));
    vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_cse) 
           & (IData)(HLS_fp17_to_fp32_core_inst__DOT____VdfgRegularize_he2f8b490_0_0));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_48_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_9) 
           & (IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
                 & ((~ (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_48_cse) 
           | ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_9) 
              & ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_and_4_cse 
        = ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_3) 
               | ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U))) & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen));
}

void Vsim_HLS_fp17_to_fp32___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_3__0(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_3__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__41__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__41__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__41__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__41__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__41__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__41__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__41__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__41__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__42__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__42__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__42__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__42__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__42__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__42__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__42__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__42__sel = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__43__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__43__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__43__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__43__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__43__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__43__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt)))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt;
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0))) {
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0;
        }
        if (vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_and_4_cse) {
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_30_28 
                = (7U & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpExpoWidthInc_6U_8U_23U_0U_1U_FpExpoWidthInc_6U_8U_23U_0U_1U_and_nl) 
                          | (- (IData)((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0)))) 
                         | (- (IData)((1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsNaN_6U_23U_aelse_not_2_nl)))))));
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_31 
                = (1U & (vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt 
                         >> 0x10U));
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_46_cse) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_48_cse)))) {
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__42__sel 
                = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0) 
                            & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_48_cse))));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__42__input_1 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_22_13_lpi_1_dfm;
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__42__input_0 
                = (0x000003ffU & (- (IData)((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0))));
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__42__sel)
                    ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__42__input_1)
                    : (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__42__input_0));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__42__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_22_13 
                = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__42__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
              & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U))) & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_3)))) {
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_10 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
             & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_46_cse) 
                 | (((((IData)((0x0000fc00U == (0x0000fc00U 
                                                & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                       & (0U != (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                      & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
                     & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1)))) {
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__41__sel 
                = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0) 
                            & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1))));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__41__input_1 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_9_0_lpi_1_dfm;
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__41__input_0 
                = (0x000003ffU & (- (IData)((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0))));
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__41__sel)
                    ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__41__input_1)
                    : (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__41__input_0));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__41__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0 
                = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__41__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
             & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_3) 
                   | ((~ (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                          & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))) 
                      & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                          ? 2U : 1U)))))) {
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__43__sel 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsNaN_6U_23U_aelse_not_2_nl)));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__43__input_0 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpExpoWidthInc_6U_8U_23U_0U_1U_mux_5_nl;
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__43__sel)
                    ? 0x1fU : (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__43__input_0));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__43__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_27_23 
                = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__43__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_iswt0_cse 
                = vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0;
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_iswt0 
                = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_4_mdf)) 
                            & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                                 ? 2U : 1U) >> 1U))));
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var = 1U;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_dcpl_25)))) {
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_dcpl_25)));
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_iswt0_cse = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_30_28 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_22_13 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_31 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_iswt0 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_10 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_27_23 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__core_wten 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_iswt0_cse));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_iswt0));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__d 
        = ((((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_31) 
             << 0x0000001fU) | (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_30_28) 
                                 << 0x0000001cU) | 
                                ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_27_23) 
                                 << 0x00000017U))) 
           | (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_22_13) 
               << 0x0000000dU) | ((0x00001c00U & ((- (IData)((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_10))) 
                                                  << 0x0000000aU)) 
                                  | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
}

void Vsim_HLS_fp17_to_fp32___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_3__1(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_3__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_3.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_3.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
}

void Vsim_HLS_fp17_to_fp32___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_3__0(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_3__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_fp17_to_fp32_core_inst__DOT____VdfgRegularize_he2f8b490_0_0;
    HLS_fp17_to_fp32_core_inst__DOT____VdfgRegularize_he2f8b490_0_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__36__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__36__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__36__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__36__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__36__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__36__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__36__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__36__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__37__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__37__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__37__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__37__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__38__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__38__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__38__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__38__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__39__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__39__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__39__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__39__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__39__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__39__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__40__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__40__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__40__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__40__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__40__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__40__sel = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__44__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__44__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__44__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__44__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__44__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__44__sel = 0;
    CData/*2:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__46__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__46__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__46__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__46__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__46__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__46__sel = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__47__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__47__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__47__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__47__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__47__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__47__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__47__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__47__sel = 0;
    // Body
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__47__sel 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__47__input_1 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__47__input_0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)
            ? (0x0001ffffU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__p1_pipe_data[2U] 
                               << 0x0000000aU) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__p1_pipe_data[1U] 
                                                  >> 0x00000016U)))
            : 0U);
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__47__sel)
            ? __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__47__input_1
            : __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__47__input_0);
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__47__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__47__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp16_din_pvld) 
           & (IData)(((0x0ff0U == (0x0ff0U & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp17T32_i_prdy))) 
                      & (7U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_14)))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__nl_FpExpoWidthInc_6U_8U_23U_0U_1U_else_acc_nl 
        = (0x0000000fU & ((IData)(1U) + VL_EXTEND_II(4,3, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__45__vector 
                            = (2U | (1U & (vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt 
                                           >> 0x0fU)));
                        vlSelfRef.__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__45__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__45__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__45__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_9 
        = (IData)(((0x0000fc00U != (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                   | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsNaN_6U_23U_aelse_not_2_nl 
        = (IData)(((0x0000fc00U != (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                   | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__46__sel 
        = (0U != (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__46__input_1 
        = (7U & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__nl_FpExpoWidthInc_6U_8U_23U_0U_1U_else_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__46__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__46__input_1)
            : 0U);
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__46__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpExpoWidthInc_6U_8U_23U_0U_1U_FpExpoWidthInc_6U_8U_23U_0U_1U_and_nl 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__46__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__39__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsNaN_6U_23U_aelse_not_2_nl)));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__39__input_1 
        = (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt);
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__39__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__39__input_1)
            : 0U);
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__39__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_9_0_lpi_1_dfm 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__39__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__40__sel 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsNaN_6U_23U_aelse_not_2_nl;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__40__input_1 
        = (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt);
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__40__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__40__input_1)
            : 0U);
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__40__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_22_13_lpi_1_dfm 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__40__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0 
        = (1U & (~ ((0U != (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_22_13_lpi_1_dfm)) 
                    | (IData)(((0U != (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_9_0_lpi_1_dfm)) 
                               | (0x0000fc00U != (0x0000fc00U 
                                                  & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt)))))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_dcpl_25 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_3 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
                        & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_4_mdf 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_cse));
    HLS_fp17_to_fp32_core_inst__DOT____VdfgRegularize_he2f8b490_0_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__44__sel 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__44__input_0 
        = (0x0000001fU & (vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt 
                          >> 0x0aU));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__44__sel)
            ? 0x1eU : (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__44__input_0));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__44__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpExpoWidthInc_6U_8U_23U_0U_1U_mux_5_nl 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__44__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_4_mdf) 
                 | ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__36__sel 
        = (1U & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__37__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_4_mdf) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__37__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__37__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__36__input_1 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__37__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__38__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
            ? 0U : 1U);
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__38__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__38__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__36__input_0 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__38__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__36__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__36__input_1)
            : (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__36__input_0));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__36__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_nvdla_float_h_ln477_assert_iExpoWidth_le_oExpoWidth_sig_mx0 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__36__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_46_cse 
        = (IData)(((((0x0000fc00U == (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                     & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_cse)) 
                    & (IData)(HLS_fp17_to_fp32_core_inst__DOT____VdfgRegularize_he2f8b490_0_0)) 
                   & (0U != (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt))));
    vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_cse) 
           & (IData)(HLS_fp17_to_fp32_core_inst__DOT____VdfgRegularize_he2f8b490_0_0));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_48_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_9) 
           & (IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
                 & ((~ (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_48_cse) 
           | ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_9) 
              & ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_and_4_cse 
        = ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_3) 
               | ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U))) & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen));
}

void Vsim_HLS_fp17_to_fp32___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_4__0(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_4__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__53__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__53__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__53__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__53__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__53__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__53__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__53__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__53__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__54__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__54__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__54__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__54__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__54__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__54__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__54__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__54__sel = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__55__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__55__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__55__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__55__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__55__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__55__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt)))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt;
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0))) {
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0;
        }
        if (vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_and_4_cse) {
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_30_28 
                = (7U & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpExpoWidthInc_6U_8U_23U_0U_1U_FpExpoWidthInc_6U_8U_23U_0U_1U_and_nl) 
                          | (- (IData)((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0)))) 
                         | (- (IData)((1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsNaN_6U_23U_aelse_not_2_nl)))))));
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_31 
                = (1U & (vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt 
                         >> 0x10U));
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_46_cse) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_48_cse)))) {
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__54__sel 
                = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0) 
                            & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_48_cse))));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__54__input_1 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_22_13_lpi_1_dfm;
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__54__input_0 
                = (0x000003ffU & (- (IData)((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0))));
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__54__sel)
                    ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__54__input_1)
                    : (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__54__input_0));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__54__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_22_13 
                = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__54__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
              & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U))) & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_3)))) {
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_10 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
             & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_46_cse) 
                 | (((((IData)((0x0000fc00U == (0x0000fc00U 
                                                & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                       & (0U != (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                      & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
                     & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1)))) {
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__53__sel 
                = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0) 
                            & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1))));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__53__input_1 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_9_0_lpi_1_dfm;
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__53__input_0 
                = (0x000003ffU & (- (IData)((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0))));
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__53__sel)
                    ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__53__input_1)
                    : (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__53__input_0));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__53__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0 
                = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__53__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
             & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_3) 
                   | ((~ (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                          & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))) 
                      & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                          ? 2U : 1U)))))) {
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__55__sel 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsNaN_6U_23U_aelse_not_2_nl)));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__55__input_0 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpExpoWidthInc_6U_8U_23U_0U_1U_mux_5_nl;
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__55__sel)
                    ? 0x1fU : (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__55__input_0));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__55__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_27_23 
                = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__55__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_iswt0_cse 
                = vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0;
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_iswt0 
                = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_4_mdf)) 
                            & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                                 ? 2U : 1U) >> 1U))));
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var = 1U;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_dcpl_25)))) {
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_dcpl_25)));
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_iswt0_cse = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_30_28 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_22_13 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_31 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_iswt0 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_10 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_27_23 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__core_wten 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_iswt0_cse));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_iswt0));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__d 
        = ((((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_31) 
             << 0x0000001fU) | (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_30_28) 
                                 << 0x0000001cU) | 
                                ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_27_23) 
                                 << 0x00000017U))) 
           | (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_22_13) 
               << 0x0000000dU) | ((0x00001c00U & ((- (IData)((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_10))) 
                                                  << 0x0000000aU)) 
                                  | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
}

void Vsim_HLS_fp17_to_fp32___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_4__1(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_4__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_4.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_4.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
}

void Vsim_HLS_fp17_to_fp32___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_4__0(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_4__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_fp17_to_fp32_core_inst__DOT____VdfgRegularize_he2f8b490_0_0;
    HLS_fp17_to_fp32_core_inst__DOT____VdfgRegularize_he2f8b490_0_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__48__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__48__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__48__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__48__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__48__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__48__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__48__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__48__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__49__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__49__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__49__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__49__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__50__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__50__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__50__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__50__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__51__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__51__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__51__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__51__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__51__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__51__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__52__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__52__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__52__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__52__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__52__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__52__sel = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__56__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__56__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__56__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__56__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__56__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__56__sel = 0;
    CData/*2:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__58__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__58__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__58__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__58__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__58__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__58__sel = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__59__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__59__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__59__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__59__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__59__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__59__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__59__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__59__sel = 0;
    // Body
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__59__sel 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__59__input_1 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__59__input_0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)
            ? (0x0001ffffU & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__p1_pipe_data[2U] 
                              >> 8U)) : 0U);
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__59__sel)
            ? __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__59__input_1
            : __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__59__input_0);
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__59__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__59__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp16_din_pvld) 
           & (IData)(((0x0fe0U == (0x0fe0U & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp17T32_i_prdy))) 
                      & (0x0fU == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_15)))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__nl_FpExpoWidthInc_6U_8U_23U_0U_1U_else_acc_nl 
        = (0x0000000fU & ((IData)(1U) + VL_EXTEND_II(4,3, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__57__vector 
                            = (2U | (1U & (vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt 
                                           >> 0x0fU)));
                        vlSelfRef.__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__57__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__57__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__57__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_9 
        = (IData)(((0x0000fc00U != (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                   | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsNaN_6U_23U_aelse_not_2_nl 
        = (IData)(((0x0000fc00U != (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                   | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__58__sel 
        = (0U != (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__58__input_1 
        = (7U & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__nl_FpExpoWidthInc_6U_8U_23U_0U_1U_else_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__58__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__58__input_1)
            : 0U);
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__58__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpExpoWidthInc_6U_8U_23U_0U_1U_FpExpoWidthInc_6U_8U_23U_0U_1U_and_nl 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__58__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__51__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsNaN_6U_23U_aelse_not_2_nl)));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__51__input_1 
        = (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt);
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__51__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__51__input_1)
            : 0U);
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__51__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_9_0_lpi_1_dfm 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__51__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__52__sel 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsNaN_6U_23U_aelse_not_2_nl;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__52__input_1 
        = (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt);
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__52__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__52__input_1)
            : 0U);
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__52__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_22_13_lpi_1_dfm 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__52__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0 
        = (1U & (~ ((0U != (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_22_13_lpi_1_dfm)) 
                    | (IData)(((0U != (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_9_0_lpi_1_dfm)) 
                               | (0x0000fc00U != (0x0000fc00U 
                                                  & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt)))))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_dcpl_25 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_3 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
                        & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_4_mdf 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_cse));
    HLS_fp17_to_fp32_core_inst__DOT____VdfgRegularize_he2f8b490_0_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__56__sel 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__56__input_0 
        = (0x0000001fU & (vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt 
                          >> 0x0aU));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__56__sel)
            ? 0x1eU : (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__56__input_0));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__56__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpExpoWidthInc_6U_8U_23U_0U_1U_mux_5_nl 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__56__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_4_mdf) 
                 | ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__48__sel 
        = (1U & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__49__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_4_mdf) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__49__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__49__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__48__input_1 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__49__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__50__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
            ? 0U : 1U);
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__50__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__50__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__48__input_0 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__50__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__48__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__48__input_1)
            : (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__48__input_0));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__48__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_nvdla_float_h_ln477_assert_iExpoWidth_le_oExpoWidth_sig_mx0 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__48__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_46_cse 
        = (IData)(((((0x0000fc00U == (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                     & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_cse)) 
                    & (IData)(HLS_fp17_to_fp32_core_inst__DOT____VdfgRegularize_he2f8b490_0_0)) 
                   & (0U != (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt))));
    vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_cse) 
           & (IData)(HLS_fp17_to_fp32_core_inst__DOT____VdfgRegularize_he2f8b490_0_0));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_48_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_9) 
           & (IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
                 & ((~ (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_48_cse) 
           | ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_9) 
              & ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_and_4_cse 
        = ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_3) 
               | ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U))) & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen));
}

void Vsim_HLS_fp17_to_fp32___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_5__0(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_5__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__65__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__65__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__65__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__65__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__65__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__65__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__65__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__65__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__66__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__66__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__66__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__66__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__66__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__66__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__66__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__66__sel = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__67__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__67__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__67__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__67__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__67__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__67__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt)))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt;
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0))) {
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0;
        }
        if (vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_and_4_cse) {
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_30_28 
                = (7U & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpExpoWidthInc_6U_8U_23U_0U_1U_FpExpoWidthInc_6U_8U_23U_0U_1U_and_nl) 
                          | (- (IData)((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0)))) 
                         | (- (IData)((1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsNaN_6U_23U_aelse_not_2_nl)))))));
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_31 
                = (1U & (vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt 
                         >> 0x10U));
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_46_cse) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_48_cse)))) {
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__66__sel 
                = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0) 
                            & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_48_cse))));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__66__input_1 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_22_13_lpi_1_dfm;
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__66__input_0 
                = (0x000003ffU & (- (IData)((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0))));
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__66__sel)
                    ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__66__input_1)
                    : (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__66__input_0));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__66__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_22_13 
                = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__66__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
              & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U))) & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_3)))) {
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_10 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
             & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_46_cse) 
                 | (((((IData)((0x0000fc00U == (0x0000fc00U 
                                                & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                       & (0U != (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                      & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
                     & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1)))) {
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__65__sel 
                = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0) 
                            & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1))));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__65__input_1 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_9_0_lpi_1_dfm;
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__65__input_0 
                = (0x000003ffU & (- (IData)((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0))));
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__65__sel)
                    ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__65__input_1)
                    : (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__65__input_0));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__65__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0 
                = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__65__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
             & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_3) 
                   | ((~ (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                          & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))) 
                      & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                          ? 2U : 1U)))))) {
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__67__sel 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsNaN_6U_23U_aelse_not_2_nl)));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__67__input_0 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpExpoWidthInc_6U_8U_23U_0U_1U_mux_5_nl;
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__67__sel)
                    ? 0x1fU : (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__67__input_0));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__67__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_27_23 
                = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__67__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_iswt0_cse 
                = vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0;
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_iswt0 
                = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_4_mdf)) 
                            & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                                 ? 2U : 1U) >> 1U))));
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var = 1U;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_dcpl_25)))) {
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_dcpl_25)));
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_iswt0_cse = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_30_28 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_22_13 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_31 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_iswt0 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_10 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_27_23 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__core_wten 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_iswt0_cse));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_iswt0));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__d 
        = ((((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_31) 
             << 0x0000001fU) | (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_30_28) 
                                 << 0x0000001cU) | 
                                ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_27_23) 
                                 << 0x00000017U))) 
           | (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_22_13) 
               << 0x0000000dU) | ((0x00001c00U & ((- (IData)((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_10))) 
                                                  << 0x0000000aU)) 
                                  | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
}

void Vsim_HLS_fp17_to_fp32___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_5__1(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_5__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_5.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_5.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
}

void Vsim_HLS_fp17_to_fp32___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_5__0(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_5__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_fp17_to_fp32_core_inst__DOT____VdfgRegularize_he2f8b490_0_0;
    HLS_fp17_to_fp32_core_inst__DOT____VdfgRegularize_he2f8b490_0_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__60__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__60__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__60__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__60__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__60__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__60__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__60__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__60__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__61__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__61__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__61__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__61__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__62__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__62__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__62__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__62__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__63__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__63__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__63__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__63__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__63__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__63__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__64__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__64__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__64__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__64__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__64__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__64__sel = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__68__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__68__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__68__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__68__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__68__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__68__sel = 0;
    CData/*2:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__70__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__70__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__70__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__70__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__70__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__70__sel = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__71__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__71__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__71__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__71__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__71__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__71__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__71__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__71__sel = 0;
    // Body
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__71__sel 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__71__input_1 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__71__input_0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)
            ? (0x0001ffffU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__p1_pipe_data[3U] 
                               << 6U) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__p1_pipe_data[2U] 
                                         >> 0x0000001aU)))
            : 0U);
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__71__sel)
            ? __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__71__input_1
            : __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__71__input_0);
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__71__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__71__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp16_din_pvld) 
           & (IData)(((0x0fc0U == (0x0fc0U & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp17T32_i_prdy))) 
                      & (0x1fU == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_16)))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__nl_FpExpoWidthInc_6U_8U_23U_0U_1U_else_acc_nl 
        = (0x0000000fU & ((IData)(1U) + VL_EXTEND_II(4,3, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__69__vector 
                            = (2U | (1U & (vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt 
                                           >> 0x0fU)));
                        vlSelfRef.__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__69__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__69__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__69__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_9 
        = (IData)(((0x0000fc00U != (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                   | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsNaN_6U_23U_aelse_not_2_nl 
        = (IData)(((0x0000fc00U != (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                   | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__70__sel 
        = (0U != (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__70__input_1 
        = (7U & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__nl_FpExpoWidthInc_6U_8U_23U_0U_1U_else_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__70__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__70__input_1)
            : 0U);
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__70__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpExpoWidthInc_6U_8U_23U_0U_1U_FpExpoWidthInc_6U_8U_23U_0U_1U_and_nl 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__70__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__63__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsNaN_6U_23U_aelse_not_2_nl)));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__63__input_1 
        = (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt);
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__63__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__63__input_1)
            : 0U);
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__63__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_9_0_lpi_1_dfm 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__63__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__64__sel 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsNaN_6U_23U_aelse_not_2_nl;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__64__input_1 
        = (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt);
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__64__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__64__input_1)
            : 0U);
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__64__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_22_13_lpi_1_dfm 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__64__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0 
        = (1U & (~ ((0U != (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_22_13_lpi_1_dfm)) 
                    | (IData)(((0U != (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_9_0_lpi_1_dfm)) 
                               | (0x0000fc00U != (0x0000fc00U 
                                                  & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt)))))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_dcpl_25 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_3 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
                        & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_4_mdf 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_cse));
    HLS_fp17_to_fp32_core_inst__DOT____VdfgRegularize_he2f8b490_0_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__68__sel 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__68__input_0 
        = (0x0000001fU & (vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt 
                          >> 0x0aU));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__68__sel)
            ? 0x1eU : (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__68__input_0));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__68__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpExpoWidthInc_6U_8U_23U_0U_1U_mux_5_nl 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__68__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_4_mdf) 
                 | ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__60__sel 
        = (1U & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__61__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_4_mdf) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__61__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__61__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__60__input_1 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__61__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__62__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
            ? 0U : 1U);
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__62__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__62__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__60__input_0 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__62__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__60__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__60__input_1)
            : (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__60__input_0));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__60__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_nvdla_float_h_ln477_assert_iExpoWidth_le_oExpoWidth_sig_mx0 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__60__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_46_cse 
        = (IData)(((((0x0000fc00U == (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                     & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_cse)) 
                    & (IData)(HLS_fp17_to_fp32_core_inst__DOT____VdfgRegularize_he2f8b490_0_0)) 
                   & (0U != (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt))));
    vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_cse) 
           & (IData)(HLS_fp17_to_fp32_core_inst__DOT____VdfgRegularize_he2f8b490_0_0));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_48_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_9) 
           & (IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
                 & ((~ (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_48_cse) 
           | ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_9) 
              & ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_and_4_cse 
        = ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_3) 
               | ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U))) & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen));
}

void Vsim_HLS_fp17_to_fp32___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_6__0(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_6__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__77__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__77__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__77__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__77__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__77__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__77__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__77__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__77__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__78__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__78__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__78__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__78__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__78__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__78__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__78__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__78__sel = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__79__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__79__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__79__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__79__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__79__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__79__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt)))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt;
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0))) {
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0;
        }
        if (vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_and_4_cse) {
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_30_28 
                = (7U & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpExpoWidthInc_6U_8U_23U_0U_1U_FpExpoWidthInc_6U_8U_23U_0U_1U_and_nl) 
                          | (- (IData)((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0)))) 
                         | (- (IData)((1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsNaN_6U_23U_aelse_not_2_nl)))))));
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_31 
                = (1U & (vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt 
                         >> 0x10U));
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_46_cse) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_48_cse)))) {
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__78__sel 
                = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0) 
                            & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_48_cse))));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__78__input_1 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_22_13_lpi_1_dfm;
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__78__input_0 
                = (0x000003ffU & (- (IData)((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0))));
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__78__sel)
                    ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__78__input_1)
                    : (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__78__input_0));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__78__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_22_13 
                = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__78__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
              & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U))) & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_3)))) {
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_10 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
             & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_46_cse) 
                 | (((((IData)((0x0000fc00U == (0x0000fc00U 
                                                & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                       & (0U != (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                      & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
                     & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1)))) {
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__77__sel 
                = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0) 
                            & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1))));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__77__input_1 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_9_0_lpi_1_dfm;
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__77__input_0 
                = (0x000003ffU & (- (IData)((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0))));
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__77__sel)
                    ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__77__input_1)
                    : (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__77__input_0));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__77__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0 
                = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__77__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
             & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_3) 
                   | ((~ (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                          & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))) 
                      & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                          ? 2U : 1U)))))) {
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__79__sel 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsNaN_6U_23U_aelse_not_2_nl)));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__79__input_0 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpExpoWidthInc_6U_8U_23U_0U_1U_mux_5_nl;
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__79__sel)
                    ? 0x1fU : (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__79__input_0));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__79__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_27_23 
                = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__79__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_iswt0_cse 
                = vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0;
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_iswt0 
                = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_4_mdf)) 
                            & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                                 ? 2U : 1U) >> 1U))));
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var = 1U;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_dcpl_25)))) {
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_dcpl_25)));
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_iswt0_cse = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_30_28 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_22_13 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_31 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_iswt0 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_10 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_27_23 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__core_wten 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_iswt0_cse));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_iswt0));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__d 
        = ((((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_31) 
             << 0x0000001fU) | (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_30_28) 
                                 << 0x0000001cU) | 
                                ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_27_23) 
                                 << 0x00000017U))) 
           | (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_22_13) 
               << 0x0000000dU) | ((0x00001c00U & ((- (IData)((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_10))) 
                                                  << 0x0000000aU)) 
                                  | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
}

void Vsim_HLS_fp17_to_fp32___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_6__1(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_6__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_6.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_6.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
}

void Vsim_HLS_fp17_to_fp32___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_6__0(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_6__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_fp17_to_fp32_core_inst__DOT____VdfgRegularize_he2f8b490_0_0;
    HLS_fp17_to_fp32_core_inst__DOT____VdfgRegularize_he2f8b490_0_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__72__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__72__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__72__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__72__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__72__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__72__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__72__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__72__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__73__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__73__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__73__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__73__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__74__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__74__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__74__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__74__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__75__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__75__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__75__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__75__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__75__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__75__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__76__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__76__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__76__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__76__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__76__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__76__sel = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__80__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__80__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__80__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__80__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__80__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__80__sel = 0;
    CData/*2:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__82__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__82__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__82__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__82__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__82__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__82__sel = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__83__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__83__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__83__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__83__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__83__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__83__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__83__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__83__sel = 0;
    // Body
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__83__sel 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__83__input_1 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__83__input_0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)
            ? (0x0001ffffU & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__p1_pipe_data[3U] 
                              >> 0x0000000cU)) : 0U);
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__83__sel)
            ? __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__83__input_1
            : __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__83__input_0);
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__83__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__83__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp16_din_pvld) 
           & (IData)(((0x0f80U == (0x0f80U & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp17T32_i_prdy))) 
                      & (0x3fU == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_17)))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__nl_FpExpoWidthInc_6U_8U_23U_0U_1U_else_acc_nl 
        = (0x0000000fU & ((IData)(1U) + VL_EXTEND_II(4,3, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__81__vector 
                            = (2U | (1U & (vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt 
                                           >> 0x0fU)));
                        vlSelfRef.__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__81__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__81__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__81__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_9 
        = (IData)(((0x0000fc00U != (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                   | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsNaN_6U_23U_aelse_not_2_nl 
        = (IData)(((0x0000fc00U != (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                   | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__82__sel 
        = (0U != (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__82__input_1 
        = (7U & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__nl_FpExpoWidthInc_6U_8U_23U_0U_1U_else_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__82__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__82__input_1)
            : 0U);
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__82__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpExpoWidthInc_6U_8U_23U_0U_1U_FpExpoWidthInc_6U_8U_23U_0U_1U_and_nl 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__82__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__75__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsNaN_6U_23U_aelse_not_2_nl)));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__75__input_1 
        = (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt);
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__75__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__75__input_1)
            : 0U);
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__75__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_9_0_lpi_1_dfm 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__75__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__76__sel 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsNaN_6U_23U_aelse_not_2_nl;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__76__input_1 
        = (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt);
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__76__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__76__input_1)
            : 0U);
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__76__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_22_13_lpi_1_dfm 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__76__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0 
        = (1U & (~ ((0U != (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_22_13_lpi_1_dfm)) 
                    | (IData)(((0U != (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_9_0_lpi_1_dfm)) 
                               | (0x0000fc00U != (0x0000fc00U 
                                                  & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt)))))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_dcpl_25 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_3 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
                        & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_4_mdf 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_cse));
    HLS_fp17_to_fp32_core_inst__DOT____VdfgRegularize_he2f8b490_0_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__80__sel 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__80__input_0 
        = (0x0000001fU & (vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt 
                          >> 0x0aU));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__80__sel)
            ? 0x1eU : (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__80__input_0));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__80__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpExpoWidthInc_6U_8U_23U_0U_1U_mux_5_nl 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__80__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_4_mdf) 
                 | ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__72__sel 
        = (1U & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__73__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_4_mdf) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__73__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__73__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__72__input_1 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__73__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__74__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
            ? 0U : 1U);
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__74__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__74__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__72__input_0 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__74__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__72__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__72__input_1)
            : (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__72__input_0));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__72__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_nvdla_float_h_ln477_assert_iExpoWidth_le_oExpoWidth_sig_mx0 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__72__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_46_cse 
        = (IData)(((((0x0000fc00U == (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                     & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_cse)) 
                    & (IData)(HLS_fp17_to_fp32_core_inst__DOT____VdfgRegularize_he2f8b490_0_0)) 
                   & (0U != (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt))));
    vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_cse) 
           & (IData)(HLS_fp17_to_fp32_core_inst__DOT____VdfgRegularize_he2f8b490_0_0));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_48_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_9) 
           & (IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
                 & ((~ (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_48_cse) 
           | ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_9) 
              & ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_and_4_cse 
        = ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_3) 
               | ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U))) & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen));
}

void Vsim_HLS_fp17_to_fp32___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_7__0(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_7__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__89__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__89__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__89__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__89__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__89__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__89__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__89__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__89__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__90__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__90__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__90__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__90__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__90__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__90__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__90__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__90__sel = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__91__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__91__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__91__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__91__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__91__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__91__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt)))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt;
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0))) {
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0;
        }
        if (vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_and_4_cse) {
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_30_28 
                = (7U & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpExpoWidthInc_6U_8U_23U_0U_1U_FpExpoWidthInc_6U_8U_23U_0U_1U_and_nl) 
                          | (- (IData)((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0)))) 
                         | (- (IData)((1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsNaN_6U_23U_aelse_not_2_nl)))))));
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_31 
                = (1U & (vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt 
                         >> 0x10U));
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_46_cse) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_48_cse)))) {
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__90__sel 
                = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0) 
                            & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_48_cse))));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__90__input_1 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_22_13_lpi_1_dfm;
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__90__input_0 
                = (0x000003ffU & (- (IData)((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0))));
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__90__sel)
                    ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__90__input_1)
                    : (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__90__input_0));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__90__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_22_13 
                = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__90__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
              & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U))) & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_3)))) {
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_10 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
             & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_46_cse) 
                 | (((((IData)((0x0000fc00U == (0x0000fc00U 
                                                & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                       & (0U != (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                      & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
                     & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1)))) {
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__89__sel 
                = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0) 
                            & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1))));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__89__input_1 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_9_0_lpi_1_dfm;
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__89__input_0 
                = (0x000003ffU & (- (IData)((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0))));
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__89__sel)
                    ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__89__input_1)
                    : (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__89__input_0));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__89__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0 
                = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__89__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
             & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_3) 
                   | ((~ (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                          & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))) 
                      & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                          ? 2U : 1U)))))) {
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__91__sel 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsNaN_6U_23U_aelse_not_2_nl)));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__91__input_0 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpExpoWidthInc_6U_8U_23U_0U_1U_mux_5_nl;
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__91__sel)
                    ? 0x1fU : (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__91__input_0));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__91__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_27_23 
                = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__91__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_iswt0_cse 
                = vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0;
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_iswt0 
                = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_4_mdf)) 
                            & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                                 ? 2U : 1U) >> 1U))));
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var = 1U;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_dcpl_25)))) {
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_dcpl_25)));
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_iswt0_cse = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_30_28 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_22_13 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_31 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_iswt0 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_10 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_27_23 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__core_wten 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_iswt0_cse));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_iswt0));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__d 
        = ((((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_31) 
             << 0x0000001fU) | (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_30_28) 
                                 << 0x0000001cU) | 
                                ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_27_23) 
                                 << 0x00000017U))) 
           | (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_22_13) 
               << 0x0000000dU) | ((0x00001c00U & ((- (IData)((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_10))) 
                                                  << 0x0000000aU)) 
                                  | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
}

void Vsim_HLS_fp17_to_fp32___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_7__1(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_7__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_7.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_7.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
}

void Vsim_HLS_fp17_to_fp32___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_7__0(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_7__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_fp17_to_fp32_core_inst__DOT____VdfgRegularize_he2f8b490_0_0;
    HLS_fp17_to_fp32_core_inst__DOT____VdfgRegularize_he2f8b490_0_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__84__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__84__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__84__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__84__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__84__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__84__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__84__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__84__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__85__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__85__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__85__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__85__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__86__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__86__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__86__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__86__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__87__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__87__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__87__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__87__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__87__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__87__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__88__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__88__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__88__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__88__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__88__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__88__sel = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__92__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__92__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__92__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__92__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__92__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__92__sel = 0;
    CData/*2:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__94__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__94__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__94__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__94__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__94__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__94__sel = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__95__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__95__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__95__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__95__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__95__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__95__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__95__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__95__sel = 0;
    // Body
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__95__sel 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__95__input_1 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__95__input_0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)
            ? (0x0001ffffU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__p1_pipe_data[4U] 
                               << 2U) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__p1_pipe_data[3U] 
                                         >> 0x0000001eU)))
            : 0U);
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__95__sel)
            ? __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__95__input_1
            : __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__95__input_0);
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__95__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__95__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp16_din_pvld) 
           & (IData)(((0x0f00U == (0x0f00U & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp17T32_i_prdy))) 
                      & (0x7fU == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_18)))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__nl_FpExpoWidthInc_6U_8U_23U_0U_1U_else_acc_nl 
        = (0x0000000fU & ((IData)(1U) + VL_EXTEND_II(4,3, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__93__vector 
                            = (2U | (1U & (vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt 
                                           >> 0x0fU)));
                        vlSelfRef.__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__93__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__93__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__93__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_9 
        = (IData)(((0x0000fc00U != (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                   | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsNaN_6U_23U_aelse_not_2_nl 
        = (IData)(((0x0000fc00U != (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                   | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__94__sel 
        = (0U != (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__94__input_1 
        = (7U & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__nl_FpExpoWidthInc_6U_8U_23U_0U_1U_else_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__94__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__94__input_1)
            : 0U);
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__94__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpExpoWidthInc_6U_8U_23U_0U_1U_FpExpoWidthInc_6U_8U_23U_0U_1U_and_nl 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__94__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__87__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsNaN_6U_23U_aelse_not_2_nl)));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__87__input_1 
        = (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt);
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__87__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__87__input_1)
            : 0U);
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__87__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_9_0_lpi_1_dfm 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__87__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__88__sel 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsNaN_6U_23U_aelse_not_2_nl;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__88__input_1 
        = (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt);
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__88__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__88__input_1)
            : 0U);
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__88__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_22_13_lpi_1_dfm 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__88__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0 
        = (1U & (~ ((0U != (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_22_13_lpi_1_dfm)) 
                    | (IData)(((0U != (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_9_0_lpi_1_dfm)) 
                               | (0x0000fc00U != (0x0000fc00U 
                                                  & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt)))))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_dcpl_25 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_3 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
                        & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_4_mdf 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_cse));
    HLS_fp17_to_fp32_core_inst__DOT____VdfgRegularize_he2f8b490_0_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__92__sel 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__92__input_0 
        = (0x0000001fU & (vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt 
                          >> 0x0aU));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__92__sel)
            ? 0x1eU : (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__92__input_0));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__92__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpExpoWidthInc_6U_8U_23U_0U_1U_mux_5_nl 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__92__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_4_mdf) 
                 | ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__84__sel 
        = (1U & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__85__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_4_mdf) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__85__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__85__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__84__input_1 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__85__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__86__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
            ? 0U : 1U);
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__86__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__86__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__84__input_0 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__86__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__84__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__84__input_1)
            : (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__84__input_0));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__84__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_nvdla_float_h_ln477_assert_iExpoWidth_le_oExpoWidth_sig_mx0 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__84__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_46_cse 
        = (IData)(((((0x0000fc00U == (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                     & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_cse)) 
                    & (IData)(HLS_fp17_to_fp32_core_inst__DOT____VdfgRegularize_he2f8b490_0_0)) 
                   & (0U != (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt))));
    vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_cse) 
           & (IData)(HLS_fp17_to_fp32_core_inst__DOT____VdfgRegularize_he2f8b490_0_0));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_48_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_9) 
           & (IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
                 & ((~ (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_48_cse) 
           | ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_9) 
              & ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_and_4_cse 
        = ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_3) 
               | ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U))) & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen));
}

void Vsim_HLS_fp17_to_fp32___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_8__0(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_8__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__101__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__101__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__101__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__101__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__101__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__101__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__101__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__101__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__102__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__102__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__102__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__102__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__102__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__102__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__102__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__102__sel = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__103__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__103__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__103__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__103__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__103__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__103__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt)))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt;
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0))) {
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0;
        }
        if (vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_and_4_cse) {
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_30_28 
                = (7U & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpExpoWidthInc_6U_8U_23U_0U_1U_FpExpoWidthInc_6U_8U_23U_0U_1U_and_nl) 
                          | (- (IData)((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0)))) 
                         | (- (IData)((1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsNaN_6U_23U_aelse_not_2_nl)))))));
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_31 
                = (1U & (vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt 
                         >> 0x10U));
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_46_cse) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_48_cse)))) {
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__102__sel 
                = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0) 
                            & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_48_cse))));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__102__input_1 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_22_13_lpi_1_dfm;
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__102__input_0 
                = (0x000003ffU & (- (IData)((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0))));
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__102__sel)
                    ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__102__input_1)
                    : (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__102__input_0));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__102__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_22_13 
                = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__102__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
              & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U))) & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_3)))) {
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_10 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
             & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_46_cse) 
                 | (((((IData)((0x0000fc00U == (0x0000fc00U 
                                                & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                       & (0U != (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                      & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
                     & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1)))) {
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__101__sel 
                = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0) 
                            & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1))));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__101__input_1 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_9_0_lpi_1_dfm;
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__101__input_0 
                = (0x000003ffU & (- (IData)((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0))));
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__101__sel)
                    ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__101__input_1)
                    : (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__101__input_0));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__101__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0 
                = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__101__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
             & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_3) 
                   | ((~ (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                          & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))) 
                      & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                          ? 2U : 1U)))))) {
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__103__sel 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsNaN_6U_23U_aelse_not_2_nl)));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__103__input_0 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpExpoWidthInc_6U_8U_23U_0U_1U_mux_5_nl;
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__103__sel)
                    ? 0x1fU : (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__103__input_0));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__103__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_27_23 
                = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__103__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_iswt0_cse 
                = vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0;
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_iswt0 
                = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_4_mdf)) 
                            & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                                 ? 2U : 1U) >> 1U))));
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var = 1U;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_dcpl_25)))) {
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_dcpl_25)));
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_iswt0_cse = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_30_28 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_22_13 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_31 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_iswt0 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_10 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_27_23 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__core_wten 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_iswt0_cse));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_iswt0));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__d 
        = ((((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_31) 
             << 0x0000001fU) | (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_30_28) 
                                 << 0x0000001cU) | 
                                ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_27_23) 
                                 << 0x00000017U))) 
           | (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_22_13) 
               << 0x0000000dU) | ((0x00001c00U & ((- (IData)((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_10))) 
                                                  << 0x0000000aU)) 
                                  | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
}

void Vsim_HLS_fp17_to_fp32___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_8__1(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_8__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_8.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_8.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
}

void Vsim_HLS_fp17_to_fp32___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_8__0(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_8__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_fp17_to_fp32_core_inst__DOT____VdfgRegularize_he2f8b490_0_0;
    HLS_fp17_to_fp32_core_inst__DOT____VdfgRegularize_he2f8b490_0_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__96__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__96__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__96__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__96__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__96__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__96__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__96__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__96__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__97__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__97__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__97__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__97__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__98__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__98__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__98__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__98__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__99__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__99__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__99__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__99__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__99__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__99__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__100__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__100__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__100__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__100__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__100__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__100__sel = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__104__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__104__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__104__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__104__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__104__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__104__sel = 0;
    CData/*2:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__106__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__106__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__106__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__106__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__106__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__106__sel = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__107__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__107__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__107__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__107__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__107__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__107__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__107__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__107__sel = 0;
    // Body
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__107__sel 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__107__input_1 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__107__input_0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)
            ? (0x0001ffffU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__p1_pipe_data[5U] 
                               << 0x00000010U) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__p1_pipe_data[4U] 
                                                  >> 0x00000010U)))
            : 0U);
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__107__sel)
            ? __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__107__input_1
            : __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__107__input_0);
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__107__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__107__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp16_din_pvld) 
           & (IData)(((0x0e00U == (0x0e00U & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp17T32_i_prdy))) 
                      & (0xffU == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_19)))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__nl_FpExpoWidthInc_6U_8U_23U_0U_1U_else_acc_nl 
        = (0x0000000fU & ((IData)(1U) + VL_EXTEND_II(4,3, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__105__vector 
                            = (2U | (1U & (vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt 
                                           >> 0x0fU)));
                        vlSelfRef.__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__105__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__105__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__105__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_9 
        = (IData)(((0x0000fc00U != (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                   | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsNaN_6U_23U_aelse_not_2_nl 
        = (IData)(((0x0000fc00U != (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                   | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__106__sel 
        = (0U != (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__106__input_1 
        = (7U & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__nl_FpExpoWidthInc_6U_8U_23U_0U_1U_else_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__106__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__106__input_1)
            : 0U);
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__106__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpExpoWidthInc_6U_8U_23U_0U_1U_FpExpoWidthInc_6U_8U_23U_0U_1U_and_nl 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__106__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__99__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsNaN_6U_23U_aelse_not_2_nl)));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__99__input_1 
        = (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt);
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__99__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__99__input_1)
            : 0U);
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__99__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_9_0_lpi_1_dfm 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__99__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__100__sel 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsNaN_6U_23U_aelse_not_2_nl;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__100__input_1 
        = (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt);
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__100__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__100__input_1)
            : 0U);
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__100__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_22_13_lpi_1_dfm 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__100__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0 
        = (1U & (~ ((0U != (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_22_13_lpi_1_dfm)) 
                    | (IData)(((0U != (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_9_0_lpi_1_dfm)) 
                               | (0x0000fc00U != (0x0000fc00U 
                                                  & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt)))))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_dcpl_25 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_3 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
                        & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_4_mdf 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_cse));
    HLS_fp17_to_fp32_core_inst__DOT____VdfgRegularize_he2f8b490_0_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__104__sel 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__104__input_0 
        = (0x0000001fU & (vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt 
                          >> 0x0aU));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__104__sel)
            ? 0x1eU : (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__104__input_0));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__104__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpExpoWidthInc_6U_8U_23U_0U_1U_mux_5_nl 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__104__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_4_mdf) 
                 | ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__96__sel 
        = (1U & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__97__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_4_mdf) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__97__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__97__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__96__input_1 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__97__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__98__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
            ? 0U : 1U);
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__98__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__98__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__96__input_0 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__98__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__96__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__96__input_1)
            : (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__96__input_0));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__96__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_nvdla_float_h_ln477_assert_iExpoWidth_le_oExpoWidth_sig_mx0 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__96__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_46_cse 
        = (IData)(((((0x0000fc00U == (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                     & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_cse)) 
                    & (IData)(HLS_fp17_to_fp32_core_inst__DOT____VdfgRegularize_he2f8b490_0_0)) 
                   & (0U != (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt))));
    vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_cse) 
           & (IData)(HLS_fp17_to_fp32_core_inst__DOT____VdfgRegularize_he2f8b490_0_0));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_48_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_9) 
           & (IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
                 & ((~ (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_48_cse) 
           | ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_9) 
              & ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_and_4_cse 
        = ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_3) 
               | ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U))) & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen));
}

void Vsim_HLS_fp17_to_fp32___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_9__0(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_9__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__113__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__113__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__113__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__113__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__113__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__113__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__113__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__113__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__114__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__114__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__114__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__114__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__114__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__114__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__114__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__114__sel = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__115__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__115__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__115__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__115__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__115__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__115__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt)))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt;
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0))) {
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0;
        }
        if (vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_and_4_cse) {
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_30_28 
                = (7U & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpExpoWidthInc_6U_8U_23U_0U_1U_FpExpoWidthInc_6U_8U_23U_0U_1U_and_nl) 
                          | (- (IData)((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0)))) 
                         | (- (IData)((1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsNaN_6U_23U_aelse_not_2_nl)))))));
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_31 
                = (1U & (vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt 
                         >> 0x10U));
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_46_cse) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_48_cse)))) {
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__114__sel 
                = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0) 
                            & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_48_cse))));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__114__input_1 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_22_13_lpi_1_dfm;
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__114__input_0 
                = (0x000003ffU & (- (IData)((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0))));
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__114__sel)
                    ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__114__input_1)
                    : (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__114__input_0));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__114__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_22_13 
                = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__114__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
              & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U))) & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_3)))) {
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_10 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
             & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_46_cse) 
                 | (((((IData)((0x0000fc00U == (0x0000fc00U 
                                                & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                       & (0U != (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                      & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
                     & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1)))) {
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__113__sel 
                = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0) 
                            & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1))));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__113__input_1 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_9_0_lpi_1_dfm;
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__113__input_0 
                = (0x000003ffU & (- (IData)((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0))));
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__113__sel)
                    ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__113__input_1)
                    : (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__113__input_0));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__113__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0 
                = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__113__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
             & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_3) 
                   | ((~ (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                          & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))) 
                      & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                          ? 2U : 1U)))))) {
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__115__sel 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsNaN_6U_23U_aelse_not_2_nl)));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__115__input_0 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpExpoWidthInc_6U_8U_23U_0U_1U_mux_5_nl;
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__115__sel)
                    ? 0x1fU : (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__115__input_0));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__115__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_27_23 
                = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__115__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_iswt0_cse 
                = vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0;
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_iswt0 
                = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_4_mdf)) 
                            & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                                 ? 2U : 1U) >> 1U))));
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var = 1U;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_dcpl_25)))) {
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_dcpl_25)));
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_iswt0_cse = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_30_28 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_22_13 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_31 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_iswt0 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_10 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_27_23 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__core_wten 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_iswt0_cse));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_iswt0));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__d 
        = ((((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_31) 
             << 0x0000001fU) | (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_30_28) 
                                 << 0x0000001cU) | 
                                ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_27_23) 
                                 << 0x00000017U))) 
           | (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_22_13) 
               << 0x0000000dU) | ((0x00001c00U & ((- (IData)((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_10))) 
                                                  << 0x0000000aU)) 
                                  | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
}

void Vsim_HLS_fp17_to_fp32___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_9__1(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_9__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_9.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_9.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
}

void Vsim_HLS_fp17_to_fp32___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_9__0(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_9__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__111__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__111__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__111__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__111__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__111__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__111__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__112__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__112__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__112__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__112__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__112__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__112__sel = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__116__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__116__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__116__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__116__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__116__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__116__sel = 0;
    CData/*2:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__118__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__118__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__118__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__118__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__118__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__118__sel = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__119__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__119__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__119__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__119__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__119__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__119__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__119__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__119__sel = 0;
    // Body
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__119__sel 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__119__input_1 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__119__input_0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)
            ? (0x0001ffffU & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__p1_pipe_data[5U] 
                              >> 2U)) : 0U);
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__119__sel)
            ? __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__119__input_1
            : __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__119__input_0);
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__119__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__119__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__nl_FpExpoWidthInc_6U_8U_23U_0U_1U_else_acc_nl 
        = (0x0000000fU & ((IData)(1U) + VL_EXTEND_II(4,3, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__117__vector 
                            = (2U | (1U & (vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt 
                                           >> 0x0fU)));
                        vlSelfRef.__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__117__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__117__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__117__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_9 
        = (IData)(((0x0000fc00U != (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                   | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsNaN_6U_23U_aelse_not_2_nl 
        = (IData)(((0x0000fc00U != (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                   | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt))));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__118__sel 
        = (0U != (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__118__input_1 
        = (7U & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__nl_FpExpoWidthInc_6U_8U_23U_0U_1U_else_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__118__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__118__input_1)
            : 0U);
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__118__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpExpoWidthInc_6U_8U_23U_0U_1U_FpExpoWidthInc_6U_8U_23U_0U_1U_and_nl 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__118__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__111__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsNaN_6U_23U_aelse_not_2_nl)));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__111__input_1 
        = (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt);
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__111__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__111__input_1)
            : 0U);
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__111__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_9_0_lpi_1_dfm 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__111__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__112__sel 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsNaN_6U_23U_aelse_not_2_nl;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__112__input_1 
        = (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt);
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__112__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__112__input_1)
            : 0U);
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__112__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_22_13_lpi_1_dfm 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__112__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0 
        = (1U & (~ ((0U != (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_22_13_lpi_1_dfm)) 
                    | (IData)(((0U != (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_9_0_lpi_1_dfm)) 
                               | (0x0000fc00U != (0x0000fc00U 
                                                  & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt)))))));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__116__sel 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__116__input_0 
        = (0x0000001fU & (vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt 
                          >> 0x0aU));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__116__sel)
            ? 0x1eU : (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__116__input_0));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__116__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpExpoWidthInc_6U_8U_23U_0U_1U_mux_5_nl 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__116__Vfuncout;
}

void Vsim_HLS_fp17_to_fp32___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_9__1(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_9__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_fp17_to_fp32_core_inst__DOT____VdfgRegularize_he2f8b490_0_0;
    HLS_fp17_to_fp32_core_inst__DOT____VdfgRegularize_he2f8b490_0_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__108__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__108__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__108__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__108__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__108__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__108__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__108__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__108__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__109__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__109__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__109__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__109__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__110__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__110__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__110__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__110__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_9) 
           & (IData)(((0x0c00U == (0x0c00U & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__fp17T32_i_prdy))) 
                      & (0x01ffU == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_20)))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_dcpl_25 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_3 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
                        & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_4_mdf 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_cse));
    HLS_fp17_to_fp32_core_inst__DOT____VdfgRegularize_he2f8b490_0_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_4_mdf) 
                 | ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__108__sel 
        = (1U & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__109__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_4_mdf) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__109__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__109__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__108__input_1 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__109__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__110__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
            ? 0U : 1U);
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__110__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__110__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__108__input_0 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__110__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__108__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__108__input_1)
            : (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__108__input_0));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__108__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_nvdla_float_h_ln477_assert_iExpoWidth_le_oExpoWidth_sig_mx0 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__108__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_46_cse 
        = (IData)(((((0x0000fc00U == (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                     & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_cse)) 
                    & (IData)(HLS_fp17_to_fp32_core_inst__DOT____VdfgRegularize_he2f8b490_0_0)) 
                   & (0U != (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt))));
    vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_cse) 
           & (IData)(HLS_fp17_to_fp32_core_inst__DOT____VdfgRegularize_he2f8b490_0_0));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_48_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_9) 
           & (IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
                 & ((~ (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_48_cse) 
           | ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_9) 
              & ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_and_4_cse 
        = ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_3) 
               | ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U))) & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen));
}

void Vsim_HLS_fp17_to_fp32___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_10__0(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_10__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__125__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__125__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__125__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__125__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__125__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__125__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__125__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__125__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__126__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__126__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__126__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__126__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__126__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__126__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__126__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__126__sel = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__127__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__127__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__127__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__127__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__127__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__127__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt)))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt;
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0))) {
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0;
        }
        if (vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_and_4_cse) {
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_30_28 
                = (7U & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpExpoWidthInc_6U_8U_23U_0U_1U_FpExpoWidthInc_6U_8U_23U_0U_1U_and_nl) 
                          | (- (IData)((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0)))) 
                         | (- (IData)((1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsNaN_6U_23U_aelse_not_2_nl)))))));
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_31 
                = (1U & (vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt 
                         >> 0x10U));
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_46_cse) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_48_cse)))) {
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__126__sel 
                = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0) 
                            & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_48_cse))));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__126__input_1 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_22_13_lpi_1_dfm;
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__126__input_0 
                = (0x000003ffU & (- (IData)((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0))));
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__126__sel)
                    ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__126__input_1)
                    : (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__126__input_0));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__126__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_22_13 
                = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__126__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
              & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U))) & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_3)))) {
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_10 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
             & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_46_cse) 
                 | (((((IData)((0x0000fc00U == (0x0000fc00U 
                                                & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                       & (0U != (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                      & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
                     & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1)))) {
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__125__sel 
                = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0) 
                            & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1))));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__125__input_1 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_9_0_lpi_1_dfm;
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__125__input_0 
                = (0x000003ffU & (- (IData)((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0))));
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__125__sel)
                    ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__125__input_1)
                    : (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__125__input_0));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__125__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0 
                = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__125__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
             & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_3) 
                   | ((~ (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                          & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))) 
                      & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                          ? 2U : 1U)))))) {
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__127__sel 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsNaN_6U_23U_aelse_not_2_nl)));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__127__input_0 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpExpoWidthInc_6U_8U_23U_0U_1U_mux_5_nl;
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__127__sel)
                    ? 0x1fU : (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__127__input_0));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__127__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_27_23 
                = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__127__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_iswt0_cse 
                = vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0;
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_iswt0 
                = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_4_mdf)) 
                            & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                                 ? 2U : 1U) >> 1U))));
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var = 1U;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_dcpl_25)))) {
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_dcpl_25)));
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_iswt0_cse = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_30_28 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_22_13 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_31 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_iswt0 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_10 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_27_23 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__core_wten 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_iswt0_cse));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_iswt0));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__d 
        = ((((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_31) 
             << 0x0000001fU) | (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_30_28) 
                                 << 0x0000001cU) | 
                                ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_27_23) 
                                 << 0x00000017U))) 
           | (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_22_13) 
               << 0x0000000dU) | ((0x00001c00U & ((- (IData)((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_10))) 
                                                  << 0x0000000aU)) 
                                  | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
}

void Vsim_HLS_fp17_to_fp32___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_10__1(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_10__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_10.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_10.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
}

void Vsim_HLS_fp17_to_fp32___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_10__0(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_10__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__123__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__123__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__123__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__123__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__123__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__123__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__124__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__124__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__124__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__124__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__124__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__124__sel = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__128__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__128__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__128__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__128__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__128__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__128__sel = 0;
    CData/*2:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__130__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__130__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__130__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__130__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__130__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__130__sel = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__131__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__131__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__131__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__131__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__131__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__131__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__131__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__131__sel = 0;
    // Body
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__131__sel 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__131__input_1 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__131__input_0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)
            ? (0x0001ffffU & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__p1_pipe_data[6U] 
                               << 0x0000000cU) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__p1_pipe_data[5U] 
                                                  >> 0x00000014U)))
            : 0U);
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__131__sel)
            ? __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__131__input_1
            : __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__131__input_0);
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__131__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__131__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__nl_FpExpoWidthInc_6U_8U_23U_0U_1U_else_acc_nl 
        = (0x0000000fU & ((IData)(1U) + VL_EXTEND_II(4,3, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__129__vector 
                            = (2U | (1U & (vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt 
                                           >> 0x0fU)));
                        vlSelfRef.__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__129__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__129__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__129__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_9 
        = (IData)(((0x0000fc00U != (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                   | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsNaN_6U_23U_aelse_not_2_nl 
        = (IData)(((0x0000fc00U != (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                   | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt))));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__130__sel 
        = (0U != (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__130__input_1 
        = (7U & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__nl_FpExpoWidthInc_6U_8U_23U_0U_1U_else_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__130__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__130__input_1)
            : 0U);
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__130__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpExpoWidthInc_6U_8U_23U_0U_1U_FpExpoWidthInc_6U_8U_23U_0U_1U_and_nl 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__130__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__123__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsNaN_6U_23U_aelse_not_2_nl)));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__123__input_1 
        = (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt);
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__123__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__123__input_1)
            : 0U);
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__123__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_9_0_lpi_1_dfm 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__123__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__124__sel 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsNaN_6U_23U_aelse_not_2_nl;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__124__input_1 
        = (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt);
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__124__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__124__input_1)
            : 0U);
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__124__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_22_13_lpi_1_dfm 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__124__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0 
        = (1U & (~ ((0U != (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_22_13_lpi_1_dfm)) 
                    | (IData)(((0U != (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_9_0_lpi_1_dfm)) 
                               | (0x0000fc00U != (0x0000fc00U 
                                                  & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt)))))));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__128__sel 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__128__input_0 
        = (0x0000001fU & (vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt 
                          >> 0x0aU));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__128__sel)
            ? 0x1eU : (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__128__input_0));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__128__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpExpoWidthInc_6U_8U_23U_0U_1U_mux_5_nl 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__128__Vfuncout;
}

void Vsim_HLS_fp17_to_fp32___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_10__1(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_10__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_fp17_to_fp32_core_inst__DOT____VdfgRegularize_he2f8b490_0_0;
    HLS_fp17_to_fp32_core_inst__DOT____VdfgRegularize_he2f8b490_0_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__120__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__120__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__120__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__120__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__120__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__120__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__120__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__120__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__121__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__121__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__121__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__121__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__122__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__122__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__122__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__122__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_8) 
           & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_11.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
              & (0x000003ffU == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_21))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_dcpl_25 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_3 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
                        & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_4_mdf 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_cse));
    HLS_fp17_to_fp32_core_inst__DOT____VdfgRegularize_he2f8b490_0_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_4_mdf) 
                 | ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__120__sel 
        = (1U & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__121__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_4_mdf) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__121__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__121__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__120__input_1 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__121__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__122__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
            ? 0U : 1U);
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__122__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__122__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__120__input_0 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__122__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__120__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__120__input_1)
            : (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__120__input_0));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__120__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_nvdla_float_h_ln477_assert_iExpoWidth_le_oExpoWidth_sig_mx0 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__120__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_46_cse 
        = (IData)(((((0x0000fc00U == (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                     & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_cse)) 
                    & (IData)(HLS_fp17_to_fp32_core_inst__DOT____VdfgRegularize_he2f8b490_0_0)) 
                   & (0U != (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt))));
    vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_cse) 
           & (IData)(HLS_fp17_to_fp32_core_inst__DOT____VdfgRegularize_he2f8b490_0_0));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_48_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_9) 
           & (IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
                 & ((~ (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_48_cse) 
           | ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_9) 
              & ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_and_4_cse 
        = ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_3) 
               | ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U))) & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen));
}

void Vsim_HLS_fp17_to_fp32___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_11__0(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_11__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__137__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__137__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__137__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__137__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__137__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__137__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__137__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__137__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__138__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__138__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__138__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__138__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__138__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__138__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__138__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__138__sel = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__139__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__139__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__139__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__139__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__139__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__139__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt)))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt;
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0))) {
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0;
        }
        if (vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_and_4_cse) {
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_30_28 
                = (7U & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpExpoWidthInc_6U_8U_23U_0U_1U_FpExpoWidthInc_6U_8U_23U_0U_1U_and_nl) 
                          | (- (IData)((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0)))) 
                         | (- (IData)((1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsNaN_6U_23U_aelse_not_2_nl)))))));
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_31 
                = (1U & (vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt 
                         >> 0x10U));
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_46_cse) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_48_cse)))) {
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__138__sel 
                = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0) 
                            & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_48_cse))));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__138__input_1 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_22_13_lpi_1_dfm;
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__138__input_0 
                = (0x000003ffU & (- (IData)((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0))));
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__138__sel)
                    ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__138__input_1)
                    : (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__138__input_0));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__138__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_22_13 
                = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__138__Vfuncout;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
              & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U))) & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_3)))) {
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_10 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
             & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_46_cse) 
                 | (((((IData)((0x0000fc00U == (0x0000fc00U 
                                                & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                       & (0U != (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                      & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
                     & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1)))) {
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__137__sel 
                = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0) 
                            & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1))));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__137__input_1 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_9_0_lpi_1_dfm;
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__137__input_0 
                = (0x000003ffU & (- (IData)((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0))));
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__137__sel)
                    ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__137__input_1)
                    : (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__137__input_0));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__137__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0 
                = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__137__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
             & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_3) 
                   | ((~ (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                          & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))) 
                      & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                          ? 2U : 1U)))))) {
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__139__sel 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsNaN_6U_23U_aelse_not_2_nl)));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__139__input_0 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpExpoWidthInc_6U_8U_23U_0U_1U_mux_5_nl;
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__139__sel)
                    ? 0x1fU : (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__139__input_0));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__139__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_27_23 
                = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__139__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_iswt0_cse 
                = vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0;
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_iswt0 
                = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_4_mdf)) 
                            & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                                 ? 2U : 1U) >> 1U))));
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var = 1U;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_dcpl_25)))) {
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_dcpl_25)));
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_iswt0_cse = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_30_28 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_22_13 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_31 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_iswt0 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_10 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_27_23 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__core_wten 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_iswt0_cse));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_iswt0));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__d 
        = ((((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_31) 
             << 0x0000001fU) | (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_30_28) 
                                 << 0x0000001cU) | 
                                ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_27_23) 
                                 << 0x00000017U))) 
           | (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_22_13) 
               << 0x0000000dU) | ((0x00001c00U & ((- (IData)((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_10))) 
                                                  << 0x0000000aU)) 
                                  | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
}

void Vsim_HLS_fp17_to_fp32___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_11__1(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_11__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_11.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
           & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_HLS_fp32_mul_11.__PVT__HLS_fp32_mul_core_inst__DOT__HLS_fp32_mul_core_chn_b_rsci_inst__DOT__chn_b_rsci__DOT__ld));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
}

void Vsim_HLS_fp17_to_fp32___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_11__0(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_11__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__135__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__135__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__135__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__135__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__135__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__135__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__136__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__136__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__136__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__136__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__136__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__136__sel = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__140__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__140__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__140__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__140__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__140__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__140__sel = 0;
    CData/*2:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__142__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__142__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__142__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__142__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__142__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__142__sel = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__143__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__143__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__143__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__143__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__143__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__143__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__143__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__143__sel = 0;
    // Body
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__143__sel 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__143__input_1 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__143__input_0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en)
            ? (0x0001ffffU & (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__p1_pipe_data[6U] 
                              >> 6U)) : 0U);
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__143__sel)
            ? __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__143__input_1
            : __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__143__input_0);
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__143__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__143__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__nl_FpExpoWidthInc_6U_8U_23U_0U_1U_else_acc_nl 
        = (0x0000000fU & ((IData)(1U) + VL_EXTEND_II(4,3, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__141__vector 
                            = (2U | (1U & (vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt 
                                           >> 0x0fU)));
                        vlSelfRef.__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__141__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__141__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__141__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_9 
        = (IData)(((0x0000fc00U != (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                   | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsNaN_6U_23U_aelse_not_2_nl 
        = (IData)(((0x0000fc00U != (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                   | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt))));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__142__sel 
        = (0U != (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__142__input_1 
        = (7U & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__nl_FpExpoWidthInc_6U_8U_23U_0U_1U_else_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__142__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__142__input_1)
            : 0U);
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__142__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpExpoWidthInc_6U_8U_23U_0U_1U_FpExpoWidthInc_6U_8U_23U_0U_1U_and_nl 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__142__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__135__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsNaN_6U_23U_aelse_not_2_nl)));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__135__input_1 
        = (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt);
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__135__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__135__input_1)
            : 0U);
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__135__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_9_0_lpi_1_dfm 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__135__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__136__sel 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsNaN_6U_23U_aelse_not_2_nl;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__136__input_1 
        = (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt);
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__136__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__136__input_1)
            : 0U);
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__136__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_22_13_lpi_1_dfm 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__136__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0 
        = (1U & (~ ((0U != (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_22_13_lpi_1_dfm)) 
                    | (IData)(((0U != (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_9_0_lpi_1_dfm)) 
                               | (0x0000fc00U != (0x0000fc00U 
                                                  & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt)))))));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__140__sel 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__140__input_0 
        = (0x0000001fU & (vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt 
                          >> 0x0aU));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__140__sel)
            ? 0x1eU : (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__140__input_0));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__140__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpExpoWidthInc_6U_8U_23U_0U_1U_mux_5_nl 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__140__Vfuncout;
}

void Vsim_HLS_fp17_to_fp32___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_11__1(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT__u_fp17_to_fp32_11__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ HLS_fp17_to_fp32_core_inst__DOT____VdfgRegularize_he2f8b490_0_0;
    HLS_fp17_to_fp32_core_inst__DOT____VdfgRegularize_he2f8b490_0_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__132__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__132__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__132__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__132__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__132__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__132__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__132__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__132__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__133__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__133__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__133__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__133__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__134__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__134__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__134__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__134__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_6) 
           & (0x000007ffU == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_sum__DOT____VdfgRegularize_h1de0d3ab_0_22)));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_dcpl_25 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_3 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
                        & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_4_mdf 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_cse));
    HLS_fp17_to_fp32_core_inst__DOT____VdfgRegularize_he2f8b490_0_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_4_mdf) 
                 | ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__132__sel 
        = (1U & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__133__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_4_mdf) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__133__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__133__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__132__input_1 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__133__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__134__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
            ? 0U : 1U);
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__134__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__134__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__132__input_0 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__134__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__132__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__132__input_1)
            : (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__132__input_0));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__132__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_nvdla_float_h_ln477_assert_iExpoWidth_le_oExpoWidth_sig_mx0 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__132__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_46_cse 
        = (IData)(((((0x0000fc00U == (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                     & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_cse)) 
                    & (IData)(HLS_fp17_to_fp32_core_inst__DOT____VdfgRegularize_he2f8b490_0_0)) 
                   & (0U != (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt))));
    vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_cse) 
           & (IData)(HLS_fp17_to_fp32_core_inst__DOT____VdfgRegularize_he2f8b490_0_0));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_48_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_9) 
           & (IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
                 & ((~ (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_48_cse) 
           | ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_9) 
              & ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_and_4_cse 
        = ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_3) 
               | ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U))) & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen));
}

void Vsim_HLS_fp17_to_fp32___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_0__0(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__149__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__149__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__149__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__149__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__149__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__149__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__149__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__149__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__150__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__150__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__150__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__150__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__150__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__150__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__150__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__150__sel = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__151__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__151__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__151__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__151__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__151__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__151__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt)))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt;
        if (vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_and_4_cse) {
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_30_28 
                = (7U & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpExpoWidthInc_6U_8U_23U_0U_1U_FpExpoWidthInc_6U_8U_23U_0U_1U_and_nl) 
                          | (- (IData)((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0)))) 
                         | (- (IData)((1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsNaN_6U_23U_aelse_not_2_nl)))))));
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_31 
                = (1U & (vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt 
                         >> 0x10U));
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_46_cse) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_48_cse)))) {
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__150__sel 
                = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0) 
                            & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_48_cse))));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__150__input_1 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_22_13_lpi_1_dfm;
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__150__input_0 
                = (0x000003ffU & (- (IData)((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0))));
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__150__sel)
                    ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__150__input_1)
                    : (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__150__input_0));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__150__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_22_13 
                = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__150__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0))) {
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
              & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U))) & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_3)))) {
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_10 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
             & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_46_cse) 
                 | (((((IData)((0x0000fc00U == (0x0000fc00U 
                                                & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                       & (0U != (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                      & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
                     & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1)))) {
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__149__sel 
                = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0) 
                            & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1))));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__149__input_1 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_9_0_lpi_1_dfm;
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__149__input_0 
                = (0x000003ffU & (- (IData)((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0))));
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__149__sel)
                    ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__149__input_1)
                    : (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__149__input_0));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__149__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0 
                = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__149__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
             & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_3) 
                   | ((~ (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                          & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))) 
                      & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                          ? 2U : 1U)))))) {
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__151__sel 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsNaN_6U_23U_aelse_not_2_nl)));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__151__input_0 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpExpoWidthInc_6U_8U_23U_0U_1U_mux_5_nl;
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__151__sel)
                    ? 0x1fU : (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__151__input_0));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__151__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_27_23 
                = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__151__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_iswt0_cse 
                = vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0;
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_iswt0 
                = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_4_mdf)) 
                            & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                                 ? 2U : 1U) >> 1U))));
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var = 1U;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_dcpl_25)))) {
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_dcpl_25)));
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_30_28 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_22_13 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_31 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_iswt0_cse = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_10 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_iswt0 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_27_23 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__core_wten 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_iswt0_cse));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_iswt0));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
}

void Vsim_HLS_fp17_to_fp32___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_0__0(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__147__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__147__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__147__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__147__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__147__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__147__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__148__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__148__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__148__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__148__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__148__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__148__sel = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__152__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__152__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__152__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__152__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__152__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__152__sel = 0;
    CData/*2:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__154__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__154__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__154__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__154__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__154__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__154__sel = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__155__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__155__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__155__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__155__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__155__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__155__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__155__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__155__sel = 0;
    // Body
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__155__sel 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__155__input_1 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__155__input_0 
        = (0x0001ffffU & ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__fp16_sqsum_bypass_en))) 
                          & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__sum2itp_pd[0U]));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__155__sel)
            ? __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__155__input_1
            : __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__155__input_0);
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__155__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__155__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__nl_FpExpoWidthInc_6U_8U_23U_0U_1U_else_acc_nl 
        = (0x0000000fU & ((IData)(1U) + VL_EXTEND_II(4,3, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__153__vector 
                            = (2U | (1U & (vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt 
                                           >> 0x0fU)));
                        vlSelfRef.__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__153__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__153__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__153__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_9 
        = (IData)(((0x0000fc00U != (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                   | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsNaN_6U_23U_aelse_not_2_nl 
        = (IData)(((0x0000fc00U != (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                   | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt))));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__154__sel 
        = (0U != (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__154__input_1 
        = (7U & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__nl_FpExpoWidthInc_6U_8U_23U_0U_1U_else_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__154__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__154__input_1)
            : 0U);
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__154__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpExpoWidthInc_6U_8U_23U_0U_1U_FpExpoWidthInc_6U_8U_23U_0U_1U_and_nl 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__154__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__147__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsNaN_6U_23U_aelse_not_2_nl)));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__147__input_1 
        = (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt);
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__147__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__147__input_1)
            : 0U);
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__147__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_9_0_lpi_1_dfm 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__147__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__148__sel 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsNaN_6U_23U_aelse_not_2_nl;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__148__input_1 
        = (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt);
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__148__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__148__input_1)
            : 0U);
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__148__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_22_13_lpi_1_dfm 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__148__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0 
        = (1U & (~ ((0U != (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_22_13_lpi_1_dfm)) 
                    | (IData)(((0U != (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_9_0_lpi_1_dfm)) 
                               | (0x0000fc00U != (0x0000fc00U 
                                                  & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt)))))));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__152__sel 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__152__input_0 
        = (0x0000001fU & (vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt 
                          >> 0x0aU));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__152__sel)
            ? 0x1eU : (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__152__input_0));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__152__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpExpoWidthInc_6U_8U_23U_0U_1U_mux_5_nl 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__152__Vfuncout;
}

void Vsim_HLS_fp17_to_fp32___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_0__1(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT____VdfgRegularize_h311d4151_0_0) 
           & (0x0eU == (0x0eU & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__fp17to32_in_rdy))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    vlSelfRef.HLS_fp17_to_fp32_core_inst__DOT____VdfgRegularize_he2f8b490_0_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
}

void Vsim_HLS_fp17_to_fp32___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_0__2(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_0__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd 
        = (1U & ((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__fp16_sqsum_bypass_en)) 
                 | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__sum2itp_prdy_f) 
                    & (0x0eU == (0x0eU & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__fp17to32_out_vld))))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
}

void Vsim_HLS_fp17_to_fp32___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_0__3(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_0__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__144__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__144__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__144__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__144__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__144__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__144__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__144__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__144__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__145__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__145__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__145__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__145__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__146__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__146__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__146__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__146__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_3 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
                        & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_dcpl_25 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_46_cse 
        = (IData)(((((0x0000fc00U == (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                     & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_cse)) 
                    & (IData)(vlSelfRef.HLS_fp17_to_fp32_core_inst__DOT____VdfgRegularize_he2f8b490_0_0)) 
                   & (0U != (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt))));
    vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_cse) 
           & (IData)(vlSelfRef.HLS_fp17_to_fp32_core_inst__DOT____VdfgRegularize_he2f8b490_0_0));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_4_mdf 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_48_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_9) 
           & (IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
                 & ((~ (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_4_mdf) 
                 | ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__144__sel 
        = (1U & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__145__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_4_mdf) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__145__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__145__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__144__input_1 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__145__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__146__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
            ? 0U : 1U);
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__146__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__146__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__144__input_0 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__146__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__144__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__144__input_1)
            : (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__144__input_0));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__144__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_nvdla_float_h_ln477_assert_iExpoWidth_le_oExpoWidth_sig_mx0 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__144__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_48_cse) 
           | ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_9) 
              & ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_and_4_cse 
        = ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_3) 
               | ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U))) & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen));
}

void Vsim_HLS_fp17_to_fp32___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_1__0(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__161__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__161__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__161__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__161__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__161__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__161__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__161__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__161__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__162__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__162__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__162__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__162__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__162__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__162__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__162__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__162__sel = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__163__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__163__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__163__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__163__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__163__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__163__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt)))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt;
        if (vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_and_4_cse) {
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_30_28 
                = (7U & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpExpoWidthInc_6U_8U_23U_0U_1U_FpExpoWidthInc_6U_8U_23U_0U_1U_and_nl) 
                          | (- (IData)((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0)))) 
                         | (- (IData)((1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsNaN_6U_23U_aelse_not_2_nl)))))));
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_31 
                = (1U & (vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt 
                         >> 0x10U));
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_46_cse) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_48_cse)))) {
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__162__sel 
                = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0) 
                            & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_48_cse))));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__162__input_1 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_22_13_lpi_1_dfm;
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__162__input_0 
                = (0x000003ffU & (- (IData)((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0))));
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__162__sel)
                    ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__162__input_1)
                    : (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__162__input_0));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__162__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_22_13 
                = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__162__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0))) {
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
              & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U))) & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_3)))) {
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_10 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
             & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_46_cse) 
                 | (((((IData)((0x0000fc00U == (0x0000fc00U 
                                                & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                       & (0U != (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                      & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
                     & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1)))) {
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__161__sel 
                = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0) 
                            & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1))));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__161__input_1 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_9_0_lpi_1_dfm;
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__161__input_0 
                = (0x000003ffU & (- (IData)((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0))));
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__161__sel)
                    ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__161__input_1)
                    : (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__161__input_0));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__161__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0 
                = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__161__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
             & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_3) 
                   | ((~ (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                          & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))) 
                      & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                          ? 2U : 1U)))))) {
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__163__sel 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsNaN_6U_23U_aelse_not_2_nl)));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__163__input_0 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpExpoWidthInc_6U_8U_23U_0U_1U_mux_5_nl;
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__163__sel)
                    ? 0x1fU : (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__163__input_0));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__163__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_27_23 
                = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__163__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_iswt0_cse 
                = vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0;
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_iswt0 
                = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_4_mdf)) 
                            & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                                 ? 2U : 1U) >> 1U))));
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var = 1U;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_dcpl_25)))) {
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_dcpl_25)));
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_30_28 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_22_13 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_31 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_iswt0_cse = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_10 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_iswt0 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_27_23 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__core_wten 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_iswt0_cse));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_iswt0));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
}

void Vsim_HLS_fp17_to_fp32___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_1__0(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__159__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__159__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__159__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__159__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__159__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__159__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__160__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__160__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__160__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__160__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__160__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__160__sel = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__164__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__164__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__164__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__164__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__164__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__164__sel = 0;
    CData/*2:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__166__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__166__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__166__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__166__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__166__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__166__sel = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__167__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__167__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__167__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__167__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__167__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__167__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__167__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__167__sel = 0;
    // Body
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__167__sel 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__167__input_1 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__167__input_0 
        = (0x0001ffffU & ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__fp16_sqsum_bypass_en))) 
                          & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__sum2itp_pd[1U] 
                              << 0x00000016U) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__sum2itp_pd[1U] 
                                                 >> 0x0000000aU))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__167__sel)
            ? __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__167__input_1
            : __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__167__input_0);
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__167__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__167__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__nl_FpExpoWidthInc_6U_8U_23U_0U_1U_else_acc_nl 
        = (0x0000000fU & ((IData)(1U) + VL_EXTEND_II(4,3, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__165__vector 
                            = (2U | (1U & (vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt 
                                           >> 0x0fU)));
                        vlSelfRef.__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__165__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__165__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__165__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_9 
        = (IData)(((0x0000fc00U != (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                   | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsNaN_6U_23U_aelse_not_2_nl 
        = (IData)(((0x0000fc00U != (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                   | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt))));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__166__sel 
        = (0U != (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__166__input_1 
        = (7U & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__nl_FpExpoWidthInc_6U_8U_23U_0U_1U_else_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__166__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__166__input_1)
            : 0U);
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__166__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpExpoWidthInc_6U_8U_23U_0U_1U_FpExpoWidthInc_6U_8U_23U_0U_1U_and_nl 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__166__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__159__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsNaN_6U_23U_aelse_not_2_nl)));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__159__input_1 
        = (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt);
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__159__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__159__input_1)
            : 0U);
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__159__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_9_0_lpi_1_dfm 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__159__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__160__sel 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsNaN_6U_23U_aelse_not_2_nl;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__160__input_1 
        = (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt);
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__160__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__160__input_1)
            : 0U);
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__160__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_22_13_lpi_1_dfm 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__160__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0 
        = (1U & (~ ((0U != (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_22_13_lpi_1_dfm)) 
                    | (IData)(((0U != (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_9_0_lpi_1_dfm)) 
                               | (0x0000fc00U != (0x0000fc00U 
                                                  & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt)))))));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__164__sel 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__164__input_0 
        = (0x0000001fU & (vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt 
                          >> 0x0aU));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__164__sel)
            ? 0x1eU : (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__164__input_0));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__164__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpExpoWidthInc_6U_8U_23U_0U_1U_mux_5_nl 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__164__Vfuncout;
}

void Vsim_HLS_fp17_to_fp32___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_1__1(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_1__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT____VdfgRegularize_h311d4151_0_0) 
           & (IData)(((0x0cU == (0x0cU & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__fp17to32_in_rdy))) 
                      & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_0.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    vlSelfRef.HLS_fp17_to_fp32_core_inst__DOT____VdfgRegularize_he2f8b490_0_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
}

void Vsim_HLS_fp17_to_fp32___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_1__2(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_1__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd 
        = (1U & ((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__fp16_sqsum_bypass_en)) 
                 | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__sum2itp_prdy_f) 
                    & (IData)(((0x0cU == (0x0cU & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__fp17to32_out_vld))) 
                               & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_0.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld))))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
}

void Vsim_HLS_fp17_to_fp32___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_1__3(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_1__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__156__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__156__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__156__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__156__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__156__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__156__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__156__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__156__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__157__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__157__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__157__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__157__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__158__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__158__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__158__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__158__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_3 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
                        & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_dcpl_25 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_46_cse 
        = (IData)(((((0x0000fc00U == (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                     & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_cse)) 
                    & (IData)(vlSelfRef.HLS_fp17_to_fp32_core_inst__DOT____VdfgRegularize_he2f8b490_0_0)) 
                   & (0U != (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt))));
    vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_cse) 
           & (IData)(vlSelfRef.HLS_fp17_to_fp32_core_inst__DOT____VdfgRegularize_he2f8b490_0_0));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_4_mdf 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_48_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_9) 
           & (IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
                 & ((~ (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_4_mdf) 
                 | ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__156__sel 
        = (1U & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__157__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_4_mdf) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__157__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__157__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__156__input_1 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__157__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__158__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
            ? 0U : 1U);
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__158__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__158__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__156__input_0 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__158__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__156__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__156__input_1)
            : (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__156__input_0));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__156__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_nvdla_float_h_ln477_assert_iExpoWidth_le_oExpoWidth_sig_mx0 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__156__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_48_cse) 
           | ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_9) 
              & ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_and_4_cse 
        = ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_3) 
               | ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U))) & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen));
}

void Vsim_HLS_fp17_to_fp32___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_2__0(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_2__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__173__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__173__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__173__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__173__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__173__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__173__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__173__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__173__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__174__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__174__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__174__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__174__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__174__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__174__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__174__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__174__sel = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__175__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__175__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__175__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__175__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__175__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__175__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt)))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt;
        if (vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_and_4_cse) {
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_30_28 
                = (7U & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpExpoWidthInc_6U_8U_23U_0U_1U_FpExpoWidthInc_6U_8U_23U_0U_1U_and_nl) 
                          | (- (IData)((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0)))) 
                         | (- (IData)((1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsNaN_6U_23U_aelse_not_2_nl)))))));
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_31 
                = (1U & (vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt 
                         >> 0x10U));
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_46_cse) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_48_cse)))) {
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__174__sel 
                = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0) 
                            & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_48_cse))));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__174__input_1 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_22_13_lpi_1_dfm;
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__174__input_0 
                = (0x000003ffU & (- (IData)((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0))));
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__174__sel)
                    ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__174__input_1)
                    : (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__174__input_0));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__174__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_22_13 
                = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__174__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0))) {
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
              & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U))) & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_3)))) {
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_10 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
             & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_46_cse) 
                 | (((((IData)((0x0000fc00U == (0x0000fc00U 
                                                & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                       & (0U != (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                      & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
                     & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1)))) {
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__173__sel 
                = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0) 
                            & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1))));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__173__input_1 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_9_0_lpi_1_dfm;
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__173__input_0 
                = (0x000003ffU & (- (IData)((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0))));
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__173__sel)
                    ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__173__input_1)
                    : (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__173__input_0));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__173__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0 
                = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__173__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
             & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_3) 
                   | ((~ (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                          & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))) 
                      & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                          ? 2U : 1U)))))) {
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__175__sel 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsNaN_6U_23U_aelse_not_2_nl)));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__175__input_0 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpExpoWidthInc_6U_8U_23U_0U_1U_mux_5_nl;
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__175__sel)
                    ? 0x1fU : (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__175__input_0));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__175__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_27_23 
                = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__175__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_iswt0_cse 
                = vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0;
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_iswt0 
                = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_4_mdf)) 
                            & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                                 ? 2U : 1U) >> 1U))));
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var = 1U;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_dcpl_25)))) {
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_dcpl_25)));
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_30_28 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_22_13 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_31 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_iswt0_cse = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_10 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_iswt0 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_27_23 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__core_wten 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_iswt0_cse));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_iswt0));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
}

void Vsim_HLS_fp17_to_fp32___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_2__0(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_2__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__171__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__171__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__171__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__171__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__171__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__171__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__172__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__172__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__172__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__172__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__172__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__172__sel = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__176__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__176__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__176__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__176__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__176__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__176__sel = 0;
    CData/*2:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__178__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__178__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__178__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__178__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__178__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__178__sel = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__179__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__179__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__179__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__179__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__179__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__179__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__179__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__179__sel = 0;
    // Body
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__179__sel 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__179__input_1 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__179__input_0 
        = (0x0001ffffU & ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__fp16_sqsum_bypass_en))) 
                          & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__sum2itp_pd[3U] 
                              << 0x0000000cU) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__sum2itp_pd[2U] 
                                                 >> 0x00000014U))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__179__sel)
            ? __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__179__input_1
            : __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__179__input_0);
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__179__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__179__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__nl_FpExpoWidthInc_6U_8U_23U_0U_1U_else_acc_nl 
        = (0x0000000fU & ((IData)(1U) + VL_EXTEND_II(4,3, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__177__vector 
                            = (2U | (1U & (vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt 
                                           >> 0x0fU)));
                        vlSelfRef.__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__177__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__177__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__177__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_9 
        = (IData)(((0x0000fc00U != (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                   | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsNaN_6U_23U_aelse_not_2_nl 
        = (IData)(((0x0000fc00U != (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                   | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt))));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__178__sel 
        = (0U != (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__178__input_1 
        = (7U & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__nl_FpExpoWidthInc_6U_8U_23U_0U_1U_else_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__178__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__178__input_1)
            : 0U);
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__178__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpExpoWidthInc_6U_8U_23U_0U_1U_FpExpoWidthInc_6U_8U_23U_0U_1U_and_nl 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__178__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__171__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsNaN_6U_23U_aelse_not_2_nl)));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__171__input_1 
        = (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt);
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__171__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__171__input_1)
            : 0U);
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__171__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_9_0_lpi_1_dfm 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__171__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__172__sel 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsNaN_6U_23U_aelse_not_2_nl;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__172__input_1 
        = (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt);
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__172__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__172__input_1)
            : 0U);
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__172__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_22_13_lpi_1_dfm 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__172__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0 
        = (1U & (~ ((0U != (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_22_13_lpi_1_dfm)) 
                    | (IData)(((0U != (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_9_0_lpi_1_dfm)) 
                               | (0x0000fc00U != (0x0000fc00U 
                                                  & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt)))))));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__176__sel 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__176__input_0 
        = (0x0000001fU & (vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt 
                          >> 0x0aU));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__176__sel)
            ? 0x1eU : (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__176__input_0));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__176__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpExpoWidthInc_6U_8U_23U_0U_1U_mux_5_nl 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__176__Vfuncout;
}

void Vsim_HLS_fp17_to_fp32___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_2__1(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_2__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT____VdfgRegularize_h311d4151_0_0) 
           & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_3.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
              & (3U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT____VdfgRegularize_h311d4151_0_6))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    vlSelfRef.HLS_fp17_to_fp32_core_inst__DOT____VdfgRegularize_he2f8b490_0_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
}

void Vsim_HLS_fp17_to_fp32___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_2__2(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_2__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd 
        = (1U & ((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__fp16_sqsum_bypass_en)) 
                 | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__sum2itp_prdy_f) 
                    & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_3.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld) 
                       & (3U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT____VdfgRegularize_h311d4151_0_8))))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
}

void Vsim_HLS_fp17_to_fp32___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_2__3(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_2__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__168__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__168__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__168__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__168__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__168__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__168__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__168__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__168__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__169__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__169__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__169__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__169__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__170__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__170__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__170__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__170__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_3 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
                        & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_dcpl_25 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_46_cse 
        = (IData)(((((0x0000fc00U == (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                     & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_cse)) 
                    & (IData)(vlSelfRef.HLS_fp17_to_fp32_core_inst__DOT____VdfgRegularize_he2f8b490_0_0)) 
                   & (0U != (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt))));
    vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_cse) 
           & (IData)(vlSelfRef.HLS_fp17_to_fp32_core_inst__DOT____VdfgRegularize_he2f8b490_0_0));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_4_mdf 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_48_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_9) 
           & (IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
                 & ((~ (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_4_mdf) 
                 | ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__168__sel 
        = (1U & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__169__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_4_mdf) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__169__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__169__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__168__input_1 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__169__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__170__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
            ? 0U : 1U);
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__170__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__170__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__168__input_0 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__170__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__168__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__168__input_1)
            : (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__168__input_0));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__168__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_nvdla_float_h_ln477_assert_iExpoWidth_le_oExpoWidth_sig_mx0 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__168__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_48_cse) 
           | ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_9) 
              & ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_and_4_cse 
        = ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_3) 
               | ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U))) & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen));
}

void Vsim_HLS_fp17_to_fp32___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_3__0(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_3__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__185__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__185__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__185__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__185__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__185__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__185__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__185__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__185__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__186__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__186__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__186__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__186__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__186__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__186__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__186__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__186__sel = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__187__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__187__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__187__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__187__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__187__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__187__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt)))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt;
        if (vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_and_4_cse) {
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_30_28 
                = (7U & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpExpoWidthInc_6U_8U_23U_0U_1U_FpExpoWidthInc_6U_8U_23U_0U_1U_and_nl) 
                          | (- (IData)((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0)))) 
                         | (- (IData)((1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsNaN_6U_23U_aelse_not_2_nl)))))));
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_31 
                = (1U & (vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt 
                         >> 0x10U));
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_46_cse) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_48_cse)))) {
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__186__sel 
                = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0) 
                            & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_48_cse))));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__186__input_1 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_22_13_lpi_1_dfm;
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__186__input_0 
                = (0x000003ffU & (- (IData)((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0))));
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__186__sel)
                    ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__186__input_1)
                    : (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__186__input_0));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__186__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_22_13 
                = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__186__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
             & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0))) {
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0;
        }
        if ((((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
              & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U))) & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_3)))) {
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_10 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
             & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_46_cse) 
                 | (((((IData)((0x0000fc00U == (0x0000fc00U 
                                                & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                       & (0U != (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                      & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
                     & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1)))) {
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__185__sel 
                = (1U & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0) 
                            & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1))));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__185__input_1 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_9_0_lpi_1_dfm;
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__185__input_0 
                = (0x000003ffU & (- (IData)((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0))));
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__185__sel)
                    ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__185__input_1)
                    : (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__185__input_0));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__185__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0 
                = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__185__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
             & (~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_3) 
                   | ((~ (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                          & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))) 
                      & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                          ? 2U : 1U)))))) {
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__187__sel 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsNaN_6U_23U_aelse_not_2_nl)));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__187__input_0 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpExpoWidthInc_6U_8U_23U_0U_1U_mux_5_nl;
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__187__sel)
                    ? 0x1fU : (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__187__input_0));
            __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__187__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_27_23 
                = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__187__Vfuncout;
        }
        if (vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_iswt0_cse 
                = vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0;
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_iswt0 
                = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_4_mdf)) 
                            & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                                 ? 2U : 1U) >> 1U))));
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var = 1U;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0) 
                | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_dcpl_25)))) {
            vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_dcpl_25)));
        }
    } else {
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_30_28 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_22_13 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_31 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_iswt0_cse = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_10 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_iswt0 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_27_23 = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var = 0U;
        vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse = 0U;
    }
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__core_wten 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_iswt0_cse));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_iswt0));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
}

void Vsim_HLS_fp17_to_fp32___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_3__0(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_3__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__183__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__183__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__183__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__183__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__183__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__183__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__184__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__184__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__184__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__184__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__184__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__184__sel = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__188__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__188__Vfuncout = 0;
    CData/*4:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__188__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__188__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__188__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__188__sel = 0;
    CData/*2:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__190__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__190__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__190__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__190__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__190__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__190__sel = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__191__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__191__Vfuncout = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__191__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__191__input_0 = 0;
    IData/*16:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__191__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__191__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__191__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__191__sel = 0;
    // Body
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__191__sel 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__191__input_1 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__191__input_0 
        = (0x0001ffffU & ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__fp16_sqsum_bypass_en))) 
                          & ((vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__sum2itp_pd[4U] 
                              << 2U) | (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__sum2itp_pd[3U] 
                                        >> 0x0000001eU))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__191__sel)
            ? __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__191__input_1
            : __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__191__input_0);
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__191__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_17_2_2__191__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__nl_FpExpoWidthInc_6U_8U_23U_0U_1U_else_acc_nl 
        = (0x0000000fU & ((IData)(1U) + VL_EXTEND_II(4,3, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__189__vector 
                            = (2U | (1U & (vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt 
                                           >> 0x0fU)));
                        vlSelfRef.__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__189__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__189__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__conv_u2u_2_3__189__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_9 
        = (IData)(((0x0000fc00U != (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                   | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsNaN_6U_23U_aelse_not_2_nl 
        = (IData)(((0x0000fc00U != (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                   | (0U == (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt))));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__190__sel 
        = (0U != (0x0000ffffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__190__input_1 
        = (7U & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__nl_FpExpoWidthInc_6U_8U_23U_0U_1U_else_acc_nl));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__190__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__190__input_1)
            : 0U);
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__190__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpExpoWidthInc_6U_8U_23U_0U_1U_FpExpoWidthInc_6U_8U_23U_0U_1U_and_nl 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_3_2_2__190__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__183__sel 
        = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsNaN_6U_23U_aelse_not_2_nl)));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__183__input_1 
        = (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt);
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__183__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__183__input_1)
            : 0U);
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__183__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_9_0_lpi_1_dfm 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__183__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__184__sel 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsNaN_6U_23U_aelse_not_2_nl;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__184__input_1 
        = (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt);
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__184__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__184__input_1)
            : 0U);
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__184__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_22_13_lpi_1_dfm 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_10_2_2__184__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0 
        = (1U & (~ ((0U != (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_22_13_lpi_1_dfm)) 
                    | (IData)(((0U != (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpMantWidthInc_6U_10U_23U_0U_1U_o_mant_9_0_lpi_1_dfm)) 
                               | (0x0000fc00U != (0x0000fc00U 
                                                  & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt)))))));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__188__sel 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__IsInf_6U_23U_land_lpi_1_dfm_mx1w0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__188__input_0 
        = (0x0000001fU & (vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt 
                          >> 0x0aU));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__188__sel)
            ? 0x1eU : (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__188__input_0));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__188__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__FpExpoWidthInc_6U_8U_23U_0U_1U_mux_5_nl 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_v_5_2_2__188__Vfuncout;
}

void Vsim_HLS_fp17_to_fp32___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_3__1(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_3__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT____VdfgRegularize_h311d4151_0_0) 
           & (7U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT____VdfgRegularize_h311d4151_0_7)));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    vlSelfRef.HLS_fp17_to_fp32_core_inst__DOT____VdfgRegularize_he2f8b490_0_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
}

void Vsim_HLS_fp17_to_fp32___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_3__2(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_3__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd 
        = (1U & ((~ (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__fp16_sqsum_bypass_en)) 
                 | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__sum2itp_prdy_f) 
                    & (7U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT____VdfgRegularize_h311d4151_0_9)))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
}

void Vsim_HLS_fp17_to_fp32___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_3__3(Vsim_HLS_fp17_to_fp32* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_HLS_fp17_to_fp32___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_LUT_ctrl__DOT__u_fp17to32_3__3\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__180__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__180__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__180__input_0;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__180__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__180__input_1;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__180__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__180__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__180__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__181__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__181__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__181__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__181__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__182__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__182__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__182__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__182__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_3 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
                        & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_dcpl_25 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_46_cse 
        = (IData)(((((0x0000fc00U == (0x0000fc00U & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt)) 
                     & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_cse)) 
                    & (IData)(vlSelfRef.HLS_fp17_to_fp32_core_inst__DOT____VdfgRegularize_he2f8b490_0_0)) 
                   & (0U != (0x000003ffU & vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_d_mxwt))));
    vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_cse) 
           & (IData)(vlSelfRef.HLS_fp17_to_fp32_core_inst__DOT____VdfgRegularize_he2f8b490_0_0));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_4_mdf 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_48_cse 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_9) 
           & (IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
                 & ((~ (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_4_mdf) 
                 | ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__180__sel 
        = (1U & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__181__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_4_mdf) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__181__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__181__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__180__input_1 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__181__Vfuncout;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__182__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
            ? 0U : 1U);
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__182__sel;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__182__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__180__input_0 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX1HOT_s_1_1_2__182__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__180__sel)
            ? (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__180__input_1)
            : (IData)(__Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__180__input_0));
    __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__180__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_nvdla_float_h_ln477_assert_iExpoWidth_le_oExpoWidth_sig_mx0 
        = __Vfunc_HLS_fp17_to_fp32_core_inst__DOT__MUX_s_1_2_2__180__Vfuncout;
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1 
        = ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__and_48_cse) 
           | ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_9) 
              & ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
                 & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_inst__DOT__HLS_fp17_to_fp32_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))));
    vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__chn_o_and_4_cse 
        = ((~ ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__or_dcpl_3) 
               | ((IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U))) & (IData)(vlSelfRef.__PVT__HLS_fp17_to_fp32_core_inst__DOT__HLS_fp17_to_fp32_core_core_fsm_inst__DOT__core_wen));
}
