// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_HLS_fp16_to_fp17___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_0__u_X_fp16_to_fp17__0(Vsim_HLS_fp16_to_fp17* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp16_to_fp17___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_0__u_X_fp16_to_fp17__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__4__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__4__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__4__input_0;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__4__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__4__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__4__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__5__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__5__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__5__input_0;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__5__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__5__input_1;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__5__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__5__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__5__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt)))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_and_1_cse) {
            __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__4__sel 
                = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsNaN_5U_10U_land_lpi_1_dfm;
            __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__4__input_0 
                = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_mux1h_nl;
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__4__sel)
                    ? 0x0fU : (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__4__input_0));
            __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__4__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_13_10 
                = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__4__Vfuncout;
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_15 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                         >> 0x0eU));
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_16 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                         >> 0x0fU));
        }
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt;
        if (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen) 
             & ((((((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_4_mdf) 
                    & (0x0c00U == (0x0c00U & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)))) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_8)) 
                  & (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                       ? 2U : 1U) >> 1U)) | (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_13) 
                                              & (0x0c00U 
                                                 == 
                                                 (0x0c00U 
                                                  & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)))) 
                                             & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_8))) 
                | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1)))) {
            __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__5__sel 
                = (1U & (~ ((IData)(vlSelfRef.HLS_fp16_to_fp17_core_inst__DOT____VdfgRegularize_h5a0a11e1_0_0) 
                            & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1))));
            __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__5__input_1 
                = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt));
            __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__5__input_0 
                = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_or_1_nl;
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__5__sel)
                    ? (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__5__input_1)
                    : (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__5__input_0));
            __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__5__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0 
                = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__5__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen) 
             & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0))) {
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct 
                = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen) 
             & (~ ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_38_cse) 
                   | ((~ (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                          & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))) 
                      & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                          ? 2U : 1U)))))) {
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_14 
                = (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_mux_2_nl) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm)) 
                   | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsNaN_5U_10U_land_lpi_1_dfm));
        }
        if (vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_iswt0 
                = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_4_mdf)) 
                            & (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                                 ? 2U : 1U) >> 1U))));
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_iswt0_cse 
                = vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0;
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var = 1U;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0) 
                | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_19)))) {
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_19)));
        }
    } else {
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_13_10 = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_15 = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_16 = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0 = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_iswt0 = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_iswt0_cse = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_14 = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse = 0U;
    }
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__core_wten 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_iswt0));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_iswt0_cse));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
}

void Vsim_HLS_fp16_to_fp17___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_0__u_X_fp16_to_fp17__0(Vsim_HLS_fp16_to_fp17* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp16_to_fp17___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_0__u_X_fp16_to_fp17__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__6__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__6__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__6__input_0;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__6__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__6__input_1;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__6__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__6__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__6__sel = 0;
    CData/*3:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__7__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__7__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__7__input_2;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__7__input_2 = 0;
    CData/*3:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__7__input_1;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__7__input_1 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__7__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__7__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__8__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__8__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__8__input_0;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__8__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__8__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__8__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__9__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__9__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__9__arg1;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__9__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__9__arg2;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__9__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__9__sbit;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__9__sbit = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__10__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__10__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__10__arg1;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__10__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__10__arg2;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__10__arg2 = 0;
    SData/*15:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__11__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__11__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__11__input_0;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__11__input_0 = 0;
    SData/*15:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__11__input_1;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__11__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__11__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__11__sel = 0;
    // Body
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__11__sel 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__11__input_1 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__11__input_0 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_0.fp16to17_in_X0;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__11__sel)
            ? (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__11__input_1)
            : (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__11__input_0));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__11__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__11__Vfuncout;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsNaN_5U_10U_land_lpi_1_dfm 
        = (IData)(((0x7c00U == (0x7c00U & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                   & (0U != (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_8 
        = (IData)(((0x7000U == (0x7000U & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                   & (0U != (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm 
        = (1U & (~ (IData)((0x7c00U != (0x7fffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsDenorm_5U_10U_land_lpi_1_dfm 
        = (IData)(((0U == (0x7c00U & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                   & (0U != (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_2 
        = (IData)((0U == (0x03c0U & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_wrs_c_18_3_sdt_3 
        = (IData)((0U == (0x003cU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))));
    vlSelfRef.HLS_fp16_to_fp17_core_inst__DOT____VdfgRegularize_h5a0a11e1_0_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm) 
           | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsDenorm_5U_10U_land_lpi_1_dfm));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_2) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_wrs_c_18_3_sdt_3));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_and_35_ssc 
        = ((0U == (3U & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__rtn 
        = ((((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3) 
             << 3U) | (((~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_wrs_c_18_3_sdt_3)) 
                        & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_2)) 
                       << 2U)) | ((((IData)((((0U == 
                                               (0x0300U 
                                                & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                                              & (~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3))) 
                                             & ((0U 
                                                 != 
                                                 (0x00c0U 
                                                  & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                                                | (0U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                                                       >> 4U)))))) 
                                    | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_and_35_ssc)) 
                                   << 1U) | (1U & (~ 
                                                   (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                                                     >> 9U) 
                                                    | ((1U 
                                                        == 
                                                        (3U 
                                                         & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                                                            >> 7U))) 
                                                       | (((((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                                                             >> 5U) 
                                                            | (1U 
                                                               == 
                                                               (3U 
                                                                & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                                                                   >> 3U)))) 
                                                           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_2)) 
                                                          | ((((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                                                               >> 1U) 
                                                              & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3)) 
                                                             | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_and_35_ssc)))))))));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__6__sel 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsDenorm_5U_10U_land_lpi_1_dfm;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__6__input_1 
        = (1U & (((IData)(0x11U) + (0x00000010U | (0x0000000fU 
                                                   & (~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__rtn))))) 
                 >> 4U));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__6__input_0 
        = (1U & (~ ((~ (IData)((0U != (0x7fffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))))) 
                    | ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                       >> 0x0000000eU))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__6__sel)
            ? (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__6__input_1)
            : (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__6__input_0));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__6__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_mux_2_nl 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__6__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__7__sel 
        = ((4U & ((~ (IData)(vlSelfRef.HLS_fp16_to_fp17_core_inst__DOT____VdfgRegularize_h5a0a11e1_0_0)) 
                  << 2U)) | (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsDenorm_5U_10U_land_lpi_1_dfm) 
                              << 1U) | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm)));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__7__input_1 
        = (0x0000000fU & ((IData)(1U) + (~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__rtn))));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__7__input_2 
        = (0x0000000fU & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                          >> 0x0aU));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = (0x0eU & (- (IData)((1U & (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__7__sel)))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__7__input_1) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__7__sel) 
                                  >> 1U))))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__7__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__7__sel) 
                                  >> 2U))))));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__7__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_mux1h_nl 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__7__Vfuncout;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__nl_FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg_s 
        = (0x0000003fU & ((IData)(1U) + VL_EXTEND_II(6,5, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__conv_u2u_4_5__0__vector 
                            = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__rtn;
                        vlSelfRef.__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__conv_u2u_4_5__0__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__conv_u2u_4_5__0__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__conv_u2u_4_5__0__Vfuncout)))));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__9__sbit 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                 >> 8U));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__9__arg2 
        = (0x0000001fU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__nl_FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg_s));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__9__arg1 
        = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__10__arg2 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__9__arg2;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__10__arg1 
        = (((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__9__sbit) 
            << 9U) | (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__9__arg1));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__10__arg1;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x000003ffU & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
                          << (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__10__arg2)));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__10__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__9__Vfuncout 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__10__Vfuncout;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_itm 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__9__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__8__sel 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__8__input_0 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_itm;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__8__sel)
            ? 0x03ffU : (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__8__input_0));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__8__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_or_1_nl 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__8__Vfuncout;
}

void Vsim_HLS_fp16_to_fp17___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_0__u_X_fp16_to_fp17__1(Vsim_HLS_fp16_to_fp17* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp16_to_fp17___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_0__u_X_fp16_to_fp17__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_0.FMcvt_out_rdy) 
              & (3U == (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_0.__PVT__vlds_out) 
                         >> 3U) & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_0.__VdfgRegularize_hb7786f49_0_3)))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__or_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
}

void Vsim_HLS_fp16_to_fp17___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_0__u_X_fp16_to_fp17__2(Vsim_HLS_fp16_to_fp17* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp16_to_fp17___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_0__u_X_fp16_to_fp17__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__1__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__1__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__1__input_0;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__1__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__1__input_1;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__1__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__1__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__1__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__2__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__2__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__2__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__2__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__3__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__3__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__3__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__3__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_0.FMcvt_in_vld) 
              & (3U == (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_0.__PVT__rdys_in) 
                         >> 3U) & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_0.__VdfgRegularize_hb7786f49_0_0)))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_19 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_38_cse 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
                        & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_13 
        = ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_4_mdf 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1 
        = ((~ (IData)(((0x7c00U == (0x7c00U & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                       & (0U != (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)))))) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__or_cse) 
               & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
                  & (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                       ? 2U : 1U) >> 1U))) | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_13)));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_4_mdf) 
                 | ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_4_mdf) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
                 & ((~ (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt))));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__1__sel 
        = (1U & (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__2__sel 
        = vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__2__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__2__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__1__input_1 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__2__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__3__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
            ? 0U : 1U);
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__3__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__3__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__1__input_0 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__3__Vfuncout;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__1__sel)
            ? (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__1__input_1)
            : (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__1__input_0));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__1__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__iExpoWidth_oExpoWidth_prb 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__1__Vfuncout;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_and_1_cse 
        = ((~ ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_38_cse) 
               | ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U))) & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen));
}

void Vsim_HLS_fp16_to_fp17___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_1__u_X_fp16_to_fp17__0(Vsim_HLS_fp16_to_fp17* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp16_to_fp17___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_1__u_X_fp16_to_fp17__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__16__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__16__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__16__input_0;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__16__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__16__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__16__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__17__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__17__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__17__input_0;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__17__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__17__input_1;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__17__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__17__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__17__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt)))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_and_1_cse) {
            __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__16__sel 
                = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsNaN_5U_10U_land_lpi_1_dfm;
            __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__16__input_0 
                = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_mux1h_nl;
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__16__sel)
                    ? 0x0fU : (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__16__input_0));
            __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__16__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_13_10 
                = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__16__Vfuncout;
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_15 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                         >> 0x0eU));
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_16 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                         >> 0x0fU));
        }
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt;
        if (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen) 
             & ((((((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_4_mdf) 
                    & (0x0c00U == (0x0c00U & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)))) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_8)) 
                  & (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                       ? 2U : 1U) >> 1U)) | (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_13) 
                                              & (0x0c00U 
                                                 == 
                                                 (0x0c00U 
                                                  & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)))) 
                                             & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_8))) 
                | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1)))) {
            __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__17__sel 
                = (1U & (~ ((IData)(vlSelfRef.HLS_fp16_to_fp17_core_inst__DOT____VdfgRegularize_h5a0a11e1_0_0) 
                            & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1))));
            __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__17__input_1 
                = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt));
            __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__17__input_0 
                = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_or_1_nl;
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__17__sel)
                    ? (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__17__input_1)
                    : (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__17__input_0));
            __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__17__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0 
                = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__17__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen) 
             & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0))) {
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct 
                = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen) 
             & (~ ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_38_cse) 
                   | ((~ (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                          & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))) 
                      & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                          ? 2U : 1U)))))) {
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_14 
                = (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_mux_2_nl) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm)) 
                   | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsNaN_5U_10U_land_lpi_1_dfm));
        }
        if (vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_iswt0 
                = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_4_mdf)) 
                            & (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                                 ? 2U : 1U) >> 1U))));
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_iswt0_cse 
                = vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0;
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var = 1U;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0) 
                | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_19)))) {
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_19)));
        }
    } else {
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_13_10 = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_15 = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_16 = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0 = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_iswt0 = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_iswt0_cse = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_14 = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse = 0U;
    }
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__core_wten 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_iswt0));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_iswt0_cse));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
}

void Vsim_HLS_fp16_to_fp17___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_1__u_X_fp16_to_fp17__0(Vsim_HLS_fp16_to_fp17* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp16_to_fp17___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_1__u_X_fp16_to_fp17__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__18__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__18__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__18__input_0;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__18__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__18__input_1;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__18__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__18__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__18__sel = 0;
    CData/*3:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__19__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__19__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__19__input_2;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__19__input_2 = 0;
    CData/*3:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__19__input_1;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__19__input_1 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__19__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__19__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__20__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__20__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__20__input_0;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__20__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__20__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__20__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__21__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__21__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__21__arg1;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__21__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__21__arg2;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__21__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__21__sbit;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__21__sbit = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__22__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__22__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__22__arg1;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__22__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__22__arg2;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__22__arg2 = 0;
    SData/*15:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__23__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__23__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__23__input_0;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__23__input_0 = 0;
    SData/*15:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__23__input_1;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__23__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__23__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__23__sel = 0;
    // Body
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__23__sel 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__23__input_1 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__23__input_0 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_1.fp16to17_in_X0;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__23__sel)
            ? (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__23__input_1)
            : (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__23__input_0));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__23__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__23__Vfuncout;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsNaN_5U_10U_land_lpi_1_dfm 
        = (IData)(((0x7c00U == (0x7c00U & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                   & (0U != (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_8 
        = (IData)(((0x7000U == (0x7000U & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                   & (0U != (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm 
        = (1U & (~ (IData)((0x7c00U != (0x7fffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsDenorm_5U_10U_land_lpi_1_dfm 
        = (IData)(((0U == (0x7c00U & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                   & (0U != (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_2 
        = (IData)((0U == (0x03c0U & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_wrs_c_18_3_sdt_3 
        = (IData)((0U == (0x003cU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))));
    vlSelfRef.HLS_fp16_to_fp17_core_inst__DOT____VdfgRegularize_h5a0a11e1_0_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm) 
           | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsDenorm_5U_10U_land_lpi_1_dfm));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_2) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_wrs_c_18_3_sdt_3));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_and_35_ssc 
        = ((0U == (3U & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__rtn 
        = ((((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3) 
             << 3U) | (((~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_wrs_c_18_3_sdt_3)) 
                        & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_2)) 
                       << 2U)) | ((((IData)((((0U == 
                                               (0x0300U 
                                                & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                                              & (~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3))) 
                                             & ((0U 
                                                 != 
                                                 (0x00c0U 
                                                  & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                                                | (0U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                                                       >> 4U)))))) 
                                    | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_and_35_ssc)) 
                                   << 1U) | (1U & (~ 
                                                   (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                                                     >> 9U) 
                                                    | ((1U 
                                                        == 
                                                        (3U 
                                                         & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                                                            >> 7U))) 
                                                       | (((((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                                                             >> 5U) 
                                                            | (1U 
                                                               == 
                                                               (3U 
                                                                & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                                                                   >> 3U)))) 
                                                           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_2)) 
                                                          | ((((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                                                               >> 1U) 
                                                              & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3)) 
                                                             | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_and_35_ssc)))))))));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__18__sel 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsDenorm_5U_10U_land_lpi_1_dfm;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__18__input_1 
        = (1U & (((IData)(0x11U) + (0x00000010U | (0x0000000fU 
                                                   & (~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__rtn))))) 
                 >> 4U));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__18__input_0 
        = (1U & (~ ((~ (IData)((0U != (0x7fffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))))) 
                    | ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                       >> 0x0000000eU))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__18__sel)
            ? (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__18__input_1)
            : (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__18__input_0));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__18__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_mux_2_nl 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__18__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__19__sel 
        = ((4U & ((~ (IData)(vlSelfRef.HLS_fp16_to_fp17_core_inst__DOT____VdfgRegularize_h5a0a11e1_0_0)) 
                  << 2U)) | (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsDenorm_5U_10U_land_lpi_1_dfm) 
                              << 1U) | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm)));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__19__input_1 
        = (0x0000000fU & ((IData)(1U) + (~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__rtn))));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__19__input_2 
        = (0x0000000fU & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                          >> 0x0aU));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = (0x0eU & (- (IData)((1U & (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__19__sel)))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__19__input_1) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__19__sel) 
                                  >> 1U))))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__19__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__19__sel) 
                                  >> 2U))))));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__19__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_mux1h_nl 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__19__Vfuncout;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__nl_FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg_s 
        = (0x0000003fU & ((IData)(1U) + VL_EXTEND_II(6,5, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__conv_u2u_4_5__12__vector 
                            = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__rtn;
                        vlSelfRef.__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__conv_u2u_4_5__12__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__conv_u2u_4_5__12__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__conv_u2u_4_5__12__Vfuncout)))));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__21__sbit 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                 >> 8U));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__21__arg2 
        = (0x0000001fU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__nl_FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg_s));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__21__arg1 
        = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__22__arg2 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__21__arg2;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__22__arg1 
        = (((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__21__sbit) 
            << 9U) | (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__21__arg1));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__22__arg1;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x000003ffU & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
                          << (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__22__arg2)));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__22__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__21__Vfuncout 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__22__Vfuncout;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_itm 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__21__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__20__sel 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__20__input_0 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_itm;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__20__sel)
            ? 0x03ffU : (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__20__input_0));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__20__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_or_1_nl 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__20__Vfuncout;
}

void Vsim_HLS_fp16_to_fp17___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_1__u_X_fp16_to_fp17__1(Vsim_HLS_fp16_to_fp17* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp16_to_fp17___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_1__u_X_fp16_to_fp17__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_1.FMcvt_out_rdy) 
              & (3U == (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_1.__PVT__vlds_out) 
                         >> 3U) & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_1.__VdfgRegularize_hb7786f49_0_3)))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__or_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
}

void Vsim_HLS_fp16_to_fp17___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_1__u_X_fp16_to_fp17__2(Vsim_HLS_fp16_to_fp17* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp16_to_fp17___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_1__u_X_fp16_to_fp17__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__13__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__13__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__13__input_0;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__13__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__13__input_1;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__13__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__13__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__13__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__14__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__14__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__14__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__14__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__15__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__15__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__15__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__15__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_1.FMcvt_in_vld) 
              & (3U == (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_1.__PVT__rdys_in) 
                         >> 3U) & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_1.__VdfgRegularize_hb7786f49_0_0)))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_19 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_38_cse 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
                        & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_13 
        = ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_4_mdf 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1 
        = ((~ (IData)(((0x7c00U == (0x7c00U & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                       & (0U != (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)))))) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__or_cse) 
               & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
                  & (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                       ? 2U : 1U) >> 1U))) | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_13)));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_4_mdf) 
                 | ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_4_mdf) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
                 & ((~ (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt))));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__13__sel 
        = (1U & (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__14__sel 
        = vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__14__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__14__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__13__input_1 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__14__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__15__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
            ? 0U : 1U);
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__15__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__15__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__13__input_0 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__15__Vfuncout;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__13__sel)
            ? (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__13__input_1)
            : (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__13__input_0));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__13__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__iExpoWidth_oExpoWidth_prb 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__13__Vfuncout;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_and_1_cse 
        = ((~ ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_38_cse) 
               | ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U))) & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen));
}

void Vsim_HLS_fp16_to_fp17___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_2__u_X_fp16_to_fp17__0(Vsim_HLS_fp16_to_fp17* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp16_to_fp17___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_2__u_X_fp16_to_fp17__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__28__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__28__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__28__input_0;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__28__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__28__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__28__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__29__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__29__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__29__input_0;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__29__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__29__input_1;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__29__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__29__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__29__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt)))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_and_1_cse) {
            __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__28__sel 
                = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsNaN_5U_10U_land_lpi_1_dfm;
            __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__28__input_0 
                = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_mux1h_nl;
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__28__sel)
                    ? 0x0fU : (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__28__input_0));
            __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__28__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_13_10 
                = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__28__Vfuncout;
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_15 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                         >> 0x0eU));
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_16 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                         >> 0x0fU));
        }
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt;
        if (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen) 
             & ((((((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_4_mdf) 
                    & (0x0c00U == (0x0c00U & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)))) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_8)) 
                  & (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                       ? 2U : 1U) >> 1U)) | (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_13) 
                                              & (0x0c00U 
                                                 == 
                                                 (0x0c00U 
                                                  & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)))) 
                                             & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_8))) 
                | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1)))) {
            __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__29__sel 
                = (1U & (~ ((IData)(vlSelfRef.HLS_fp16_to_fp17_core_inst__DOT____VdfgRegularize_h5a0a11e1_0_0) 
                            & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1))));
            __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__29__input_1 
                = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt));
            __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__29__input_0 
                = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_or_1_nl;
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__29__sel)
                    ? (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__29__input_1)
                    : (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__29__input_0));
            __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__29__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0 
                = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__29__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen) 
             & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0))) {
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct 
                = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen) 
             & (~ ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_38_cse) 
                   | ((~ (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                          & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))) 
                      & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                          ? 2U : 1U)))))) {
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_14 
                = (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_mux_2_nl) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm)) 
                   | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsNaN_5U_10U_land_lpi_1_dfm));
        }
        if (vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_iswt0 
                = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_4_mdf)) 
                            & (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                                 ? 2U : 1U) >> 1U))));
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_iswt0_cse 
                = vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0;
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var = 1U;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0) 
                | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_19)))) {
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_19)));
        }
    } else {
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_13_10 = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_15 = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_16 = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0 = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_iswt0 = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_iswt0_cse = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_14 = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse = 0U;
    }
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__core_wten 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_iswt0));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_iswt0_cse));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
}

void Vsim_HLS_fp16_to_fp17___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_2__u_X_fp16_to_fp17__0(Vsim_HLS_fp16_to_fp17* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp16_to_fp17___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_2__u_X_fp16_to_fp17__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__30__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__30__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__30__input_0;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__30__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__30__input_1;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__30__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__30__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__30__sel = 0;
    CData/*3:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__31__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__31__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__31__input_2;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__31__input_2 = 0;
    CData/*3:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__31__input_1;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__31__input_1 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__31__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__31__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__32__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__32__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__32__input_0;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__32__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__32__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__32__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__33__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__33__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__33__arg1;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__33__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__33__arg2;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__33__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__33__sbit;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__33__sbit = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__34__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__34__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__34__arg1;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__34__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__34__arg2;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__34__arg2 = 0;
    SData/*15:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__35__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__35__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__35__input_0;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__35__input_0 = 0;
    SData/*15:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__35__input_1;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__35__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__35__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__35__sel = 0;
    // Body
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__35__sel 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__35__input_1 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__35__input_0 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_2.fp16to17_in_X0;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__35__sel)
            ? (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__35__input_1)
            : (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__35__input_0));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__35__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__35__Vfuncout;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsNaN_5U_10U_land_lpi_1_dfm 
        = (IData)(((0x7c00U == (0x7c00U & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                   & (0U != (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_8 
        = (IData)(((0x7000U == (0x7000U & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                   & (0U != (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm 
        = (1U & (~ (IData)((0x7c00U != (0x7fffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsDenorm_5U_10U_land_lpi_1_dfm 
        = (IData)(((0U == (0x7c00U & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                   & (0U != (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_2 
        = (IData)((0U == (0x03c0U & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_wrs_c_18_3_sdt_3 
        = (IData)((0U == (0x003cU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))));
    vlSelfRef.HLS_fp16_to_fp17_core_inst__DOT____VdfgRegularize_h5a0a11e1_0_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm) 
           | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsDenorm_5U_10U_land_lpi_1_dfm));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_2) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_wrs_c_18_3_sdt_3));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_and_35_ssc 
        = ((0U == (3U & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__rtn 
        = ((((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3) 
             << 3U) | (((~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_wrs_c_18_3_sdt_3)) 
                        & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_2)) 
                       << 2U)) | ((((IData)((((0U == 
                                               (0x0300U 
                                                & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                                              & (~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3))) 
                                             & ((0U 
                                                 != 
                                                 (0x00c0U 
                                                  & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                                                | (0U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                                                       >> 4U)))))) 
                                    | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_and_35_ssc)) 
                                   << 1U) | (1U & (~ 
                                                   (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                                                     >> 9U) 
                                                    | ((1U 
                                                        == 
                                                        (3U 
                                                         & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                                                            >> 7U))) 
                                                       | (((((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                                                             >> 5U) 
                                                            | (1U 
                                                               == 
                                                               (3U 
                                                                & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                                                                   >> 3U)))) 
                                                           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_2)) 
                                                          | ((((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                                                               >> 1U) 
                                                              & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3)) 
                                                             | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_and_35_ssc)))))))));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__30__sel 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsDenorm_5U_10U_land_lpi_1_dfm;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__30__input_1 
        = (1U & (((IData)(0x11U) + (0x00000010U | (0x0000000fU 
                                                   & (~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__rtn))))) 
                 >> 4U));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__30__input_0 
        = (1U & (~ ((~ (IData)((0U != (0x7fffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))))) 
                    | ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                       >> 0x0000000eU))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__30__sel)
            ? (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__30__input_1)
            : (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__30__input_0));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__30__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_mux_2_nl 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__30__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__31__sel 
        = ((4U & ((~ (IData)(vlSelfRef.HLS_fp16_to_fp17_core_inst__DOT____VdfgRegularize_h5a0a11e1_0_0)) 
                  << 2U)) | (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsDenorm_5U_10U_land_lpi_1_dfm) 
                              << 1U) | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm)));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__31__input_1 
        = (0x0000000fU & ((IData)(1U) + (~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__rtn))));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__31__input_2 
        = (0x0000000fU & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                          >> 0x0aU));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = (0x0eU & (- (IData)((1U & (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__31__sel)))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__31__input_1) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__31__sel) 
                                  >> 1U))))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__31__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__31__sel) 
                                  >> 2U))))));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__31__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_mux1h_nl 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__31__Vfuncout;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__nl_FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg_s 
        = (0x0000003fU & ((IData)(1U) + VL_EXTEND_II(6,5, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__conv_u2u_4_5__24__vector 
                            = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__rtn;
                        vlSelfRef.__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__conv_u2u_4_5__24__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__conv_u2u_4_5__24__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__conv_u2u_4_5__24__Vfuncout)))));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__33__sbit 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                 >> 8U));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__33__arg2 
        = (0x0000001fU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__nl_FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg_s));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__33__arg1 
        = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__34__arg2 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__33__arg2;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__34__arg1 
        = (((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__33__sbit) 
            << 9U) | (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__33__arg1));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__34__arg1;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x000003ffU & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
                          << (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__34__arg2)));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__34__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__33__Vfuncout 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__34__Vfuncout;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_itm 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__33__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__32__sel 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__32__input_0 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_itm;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__32__sel)
            ? 0x03ffU : (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__32__input_0));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__32__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_or_1_nl 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__32__Vfuncout;
}

void Vsim_HLS_fp16_to_fp17___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_2__u_X_fp16_to_fp17__1(Vsim_HLS_fp16_to_fp17* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp16_to_fp17___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_2__u_X_fp16_to_fp17__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_2.FMcvt_out_rdy) 
              & (3U == (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_2.__PVT__vlds_out) 
                         >> 3U) & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_2.__VdfgRegularize_hb7786f49_0_3)))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__or_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
}

void Vsim_HLS_fp16_to_fp17___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_2__u_X_fp16_to_fp17__2(Vsim_HLS_fp16_to_fp17* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp16_to_fp17___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_2__u_X_fp16_to_fp17__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__25__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__25__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__25__input_0;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__25__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__25__input_1;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__25__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__25__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__25__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__26__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__26__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__26__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__26__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__27__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__27__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__27__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__27__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_2.FMcvt_in_vld) 
              & (3U == (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_2.__PVT__rdys_in) 
                         >> 3U) & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_2.__VdfgRegularize_hb7786f49_0_0)))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_19 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_38_cse 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
                        & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_13 
        = ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_4_mdf 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1 
        = ((~ (IData)(((0x7c00U == (0x7c00U & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                       & (0U != (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)))))) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__or_cse) 
               & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
                  & (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                       ? 2U : 1U) >> 1U))) | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_13)));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_4_mdf) 
                 | ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_4_mdf) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
                 & ((~ (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt))));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__25__sel 
        = (1U & (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__26__sel 
        = vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__26__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__26__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__25__input_1 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__26__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__27__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
            ? 0U : 1U);
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__27__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__27__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__25__input_0 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__27__Vfuncout;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__25__sel)
            ? (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__25__input_1)
            : (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__25__input_0));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__25__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__iExpoWidth_oExpoWidth_prb 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__25__Vfuncout;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_and_1_cse 
        = ((~ ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_38_cse) 
               | ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U))) & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen));
}

void Vsim_HLS_fp16_to_fp17___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_3__u_X_fp16_to_fp17__0(Vsim_HLS_fp16_to_fp17* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp16_to_fp17___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_3__u_X_fp16_to_fp17__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__40__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__40__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__40__input_0;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__40__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__40__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__40__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__41__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__41__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__41__input_0;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__41__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__41__input_1;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__41__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__41__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__41__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt)))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_and_1_cse) {
            __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__40__sel 
                = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsNaN_5U_10U_land_lpi_1_dfm;
            __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__40__input_0 
                = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_mux1h_nl;
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__40__sel)
                    ? 0x0fU : (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__40__input_0));
            __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__40__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_13_10 
                = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__40__Vfuncout;
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_15 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                         >> 0x0eU));
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_16 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                         >> 0x0fU));
        }
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt;
        if (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen) 
             & ((((((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_4_mdf) 
                    & (0x0c00U == (0x0c00U & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)))) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_8)) 
                  & (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                       ? 2U : 1U) >> 1U)) | (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_13) 
                                              & (0x0c00U 
                                                 == 
                                                 (0x0c00U 
                                                  & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)))) 
                                             & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_8))) 
                | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1)))) {
            __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__41__sel 
                = (1U & (~ ((IData)(vlSelfRef.HLS_fp16_to_fp17_core_inst__DOT____VdfgRegularize_h5a0a11e1_0_0) 
                            & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1))));
            __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__41__input_1 
                = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt));
            __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__41__input_0 
                = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_or_1_nl;
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__41__sel)
                    ? (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__41__input_1)
                    : (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__41__input_0));
            __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__41__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0 
                = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__41__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen) 
             & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0))) {
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct 
                = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen) 
             & (~ ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_38_cse) 
                   | ((~ (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                          & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))) 
                      & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                          ? 2U : 1U)))))) {
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_14 
                = (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_mux_2_nl) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm)) 
                   | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsNaN_5U_10U_land_lpi_1_dfm));
        }
        if (vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_iswt0 
                = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_4_mdf)) 
                            & (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                                 ? 2U : 1U) >> 1U))));
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_iswt0_cse 
                = vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0;
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var = 1U;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0) 
                | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_19)))) {
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_19)));
        }
    } else {
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_13_10 = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_15 = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_16 = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0 = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_iswt0 = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_iswt0_cse = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_14 = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse = 0U;
    }
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__core_wten 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_iswt0));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_iswt0_cse));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
}

void Vsim_HLS_fp16_to_fp17___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_3__u_X_fp16_to_fp17__0(Vsim_HLS_fp16_to_fp17* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp16_to_fp17___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_3__u_X_fp16_to_fp17__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__42__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__42__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__42__input_0;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__42__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__42__input_1;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__42__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__42__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__42__sel = 0;
    CData/*3:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__43__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__43__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__43__input_2;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__43__input_2 = 0;
    CData/*3:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__43__input_1;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__43__input_1 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__43__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__43__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__44__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__44__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__44__input_0;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__44__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__44__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__44__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__45__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__45__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__45__arg1;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__45__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__45__arg2;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__45__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__45__sbit;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__45__sbit = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__46__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__46__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__46__arg1;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__46__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__46__arg2;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__46__arg2 = 0;
    SData/*15:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__47__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__47__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__47__input_0;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__47__input_0 = 0;
    SData/*15:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__47__input_1;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__47__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__47__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__47__sel = 0;
    // Body
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__47__sel 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__47__input_1 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__47__input_0 
        = vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_3.fp16to17_in_X0;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__47__sel)
            ? (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__47__input_1)
            : (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__47__input_0));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__47__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__47__Vfuncout;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsNaN_5U_10U_land_lpi_1_dfm 
        = (IData)(((0x7c00U == (0x7c00U & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                   & (0U != (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_8 
        = (IData)(((0x7000U == (0x7000U & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                   & (0U != (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm 
        = (1U & (~ (IData)((0x7c00U != (0x7fffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsDenorm_5U_10U_land_lpi_1_dfm 
        = (IData)(((0U == (0x7c00U & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                   & (0U != (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_2 
        = (IData)((0U == (0x03c0U & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_wrs_c_18_3_sdt_3 
        = (IData)((0U == (0x003cU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))));
    vlSelfRef.HLS_fp16_to_fp17_core_inst__DOT____VdfgRegularize_h5a0a11e1_0_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm) 
           | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsDenorm_5U_10U_land_lpi_1_dfm));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_2) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_wrs_c_18_3_sdt_3));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_and_35_ssc 
        = ((0U == (3U & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__rtn 
        = ((((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3) 
             << 3U) | (((~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_wrs_c_18_3_sdt_3)) 
                        & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_2)) 
                       << 2U)) | ((((IData)((((0U == 
                                               (0x0300U 
                                                & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                                              & (~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3))) 
                                             & ((0U 
                                                 != 
                                                 (0x00c0U 
                                                  & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                                                | (0U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                                                       >> 4U)))))) 
                                    | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_and_35_ssc)) 
                                   << 1U) | (1U & (~ 
                                                   (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                                                     >> 9U) 
                                                    | ((1U 
                                                        == 
                                                        (3U 
                                                         & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                                                            >> 7U))) 
                                                       | (((((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                                                             >> 5U) 
                                                            | (1U 
                                                               == 
                                                               (3U 
                                                                & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                                                                   >> 3U)))) 
                                                           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_2)) 
                                                          | ((((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                                                               >> 1U) 
                                                              & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3)) 
                                                             | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_and_35_ssc)))))))));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__42__sel 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsDenorm_5U_10U_land_lpi_1_dfm;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__42__input_1 
        = (1U & (((IData)(0x11U) + (0x00000010U | (0x0000000fU 
                                                   & (~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__rtn))))) 
                 >> 4U));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__42__input_0 
        = (1U & (~ ((~ (IData)((0U != (0x7fffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))))) 
                    | ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                       >> 0x0000000eU))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__42__sel)
            ? (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__42__input_1)
            : (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__42__input_0));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__42__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_mux_2_nl 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__42__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__43__sel 
        = ((4U & ((~ (IData)(vlSelfRef.HLS_fp16_to_fp17_core_inst__DOT____VdfgRegularize_h5a0a11e1_0_0)) 
                  << 2U)) | (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsDenorm_5U_10U_land_lpi_1_dfm) 
                              << 1U) | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm)));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__43__input_1 
        = (0x0000000fU & ((IData)(1U) + (~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__rtn))));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__43__input_2 
        = (0x0000000fU & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                          >> 0x0aU));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = (0x0eU & (- (IData)((1U & (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__43__sel)))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__43__input_1) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__43__sel) 
                                  >> 1U))))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__43__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__43__sel) 
                                  >> 2U))))));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__43__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_mux1h_nl 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__43__Vfuncout;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__nl_FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg_s 
        = (0x0000003fU & ((IData)(1U) + VL_EXTEND_II(6,5, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__conv_u2u_4_5__36__vector 
                            = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__rtn;
                        vlSelfRef.__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__conv_u2u_4_5__36__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__conv_u2u_4_5__36__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__conv_u2u_4_5__36__Vfuncout)))));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__45__sbit 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                 >> 8U));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__45__arg2 
        = (0x0000001fU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__nl_FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg_s));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__45__arg1 
        = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__46__arg2 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__45__arg2;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__46__arg1 
        = (((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__45__sbit) 
            << 9U) | (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__45__arg1));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__46__arg1;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x000003ffU & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
                          << (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__46__arg2)));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__46__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__45__Vfuncout 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__46__Vfuncout;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_itm 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__45__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__44__sel 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__44__input_0 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_itm;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__44__sel)
            ? 0x03ffU : (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__44__input_0));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__44__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_or_1_nl 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__44__Vfuncout;
}

void Vsim_HLS_fp16_to_fp17___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_3__u_X_fp16_to_fp17__1(Vsim_HLS_fp16_to_fp17* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp16_to_fp17___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_3__u_X_fp16_to_fp17__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_3.FMcvt_out_rdy) 
              & (3U == (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_3.__PVT__vlds_out) 
                         >> 3U) & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_3.__VdfgRegularize_hb7786f49_0_3)))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__or_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
}

void Vsim_HLS_fp16_to_fp17___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_3__u_X_fp16_to_fp17__2(Vsim_HLS_fp16_to_fp17* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp16_to_fp17___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_3__u_X_fp16_to_fp17__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__37__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__37__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__37__input_0;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__37__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__37__input_1;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__37__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__37__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__37__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__38__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__38__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__38__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__38__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__39__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__39__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__39__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__39__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_3.FMcvt_in_vld) 
              & (3U == (((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_3.__PVT__rdys_in) 
                         >> 3U) & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_lut__DOT__u_fp_format_cvt_3.__VdfgRegularize_hb7786f49_0_0)))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_19 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_38_cse 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
                        & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_13 
        = ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_4_mdf 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1 
        = ((~ (IData)(((0x7c00U == (0x7c00U & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                       & (0U != (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)))))) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__or_cse) 
               & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
                  & (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                       ? 2U : 1U) >> 1U))) | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_13)));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_4_mdf) 
                 | ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_4_mdf) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
                 & ((~ (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt))));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__37__sel 
        = (1U & (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__38__sel 
        = vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__38__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__38__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__37__input_1 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__38__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__39__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
            ? 0U : 1U);
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__39__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__39__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__37__input_0 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__39__Vfuncout;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__37__sel)
            ? (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__37__input_1)
            : (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__37__input_0));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__37__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__iExpoWidth_oExpoWidth_prb 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__37__Vfuncout;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_and_1_cse 
        = ((~ ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_38_cse) 
               | ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U))) & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen));
}

void Vsim_HLS_fp16_to_fp17___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__le_uflow_scale__0(Vsim_HLS_fp16_to_fp17* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp16_to_fp17___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__le_uflow_scale__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__52__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__52__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__52__input_0;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__52__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__52__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__52__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__53__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__53__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__53__input_0;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__53__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__53__input_1;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__53__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__53__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__53__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen))))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen) 
             & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0))) {
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct 
                = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0;
        }
        if (vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_and_1_cse) {
            __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__52__sel 
                = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsNaN_5U_10U_land_lpi_1_dfm;
            __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__52__input_0 
                = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_mux1h_nl;
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__52__sel)
                    ? 0x0fU : (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__52__input_0));
            __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__52__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_13_10 
                = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__52__Vfuncout;
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_15 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                         >> 0x0eU));
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_16 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                         >> 0x0fU));
        }
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt;
        if (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen) 
             & ((((((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_4_mdf) 
                    & (0x0c00U == (0x0c00U & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)))) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_8)) 
                  & (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                       ? 2U : 1U) >> 1U)) | (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_13) 
                                              & (0x0c00U 
                                                 == 
                                                 (0x0c00U 
                                                  & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)))) 
                                             & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_8))) 
                | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1)))) {
            __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__53__sel 
                = (1U & (~ ((IData)(vlSelfRef.HLS_fp16_to_fp17_core_inst__DOT____VdfgRegularize_h5a0a11e1_0_0) 
                            & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1))));
            __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__53__input_1 
                = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt));
            __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__53__input_0 
                = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_or_1_nl;
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__53__sel)
                    ? (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__53__input_1)
                    : (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__53__input_0));
            __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__53__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0 
                = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__53__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen) 
             & (~ ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_38_cse) 
                   | ((~ (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                          & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))) 
                      & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                          ? 2U : 1U)))))) {
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_14 
                = (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_mux_2_nl) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm)) 
                   | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsNaN_5U_10U_land_lpi_1_dfm));
        }
        if (vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_iswt0_cse 
                = vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0;
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_iswt0 
                = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_4_mdf)) 
                            & (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                                 ? 2U : 1U) >> 1U))));
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var = 1U;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0) 
                | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_19)))) {
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_19)));
        }
    } else {
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_13_10 = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_iswt0_cse = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_15 = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_16 = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_iswt0 = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0 = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_14 = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse = 0U;
    }
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__core_wten 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_iswt0_cse));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_iswt0));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__or_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
}

void Vsim_HLS_fp16_to_fp17___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__le_uflow_scale__0(Vsim_HLS_fp16_to_fp17* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp16_to_fp17___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__le_uflow_scale__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__54__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__54__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__54__input_0;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__54__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__54__input_1;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__54__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__54__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__54__sel = 0;
    CData/*3:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__55__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__55__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__55__input_2;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__55__input_2 = 0;
    CData/*3:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__55__input_1;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__55__input_1 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__55__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__55__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__56__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__56__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__56__input_0;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__56__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__56__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__56__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__57__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__57__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__57__arg1;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__57__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__57__arg2;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__57__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__57__sbit;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__57__sbit = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__58__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__58__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__58__arg1;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__58__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__58__arg2;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__58__arg2 = 0;
    SData/*15:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__59__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__59__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__59__input_0;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__59__input_0 = 0;
    SData/*15:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__59__input_1;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__59__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__59__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__59__sel = 0;
    // Body
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__59__sel 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__59__input_1 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__59__input_0 
        = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_le_slope_uflow_scale;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__59__sel)
            ? (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__59__input_1)
            : (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__59__input_0));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__59__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__59__Vfuncout;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsNaN_5U_10U_land_lpi_1_dfm 
        = (IData)(((0x7c00U == (0x7c00U & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                   & (0U != (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_8 
        = (IData)(((0x7000U == (0x7000U & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                   & (0U != (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm 
        = (1U & (~ (IData)((0x7c00U != (0x7fffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsDenorm_5U_10U_land_lpi_1_dfm 
        = (IData)(((0U == (0x7c00U & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                   & (0U != (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_2 
        = (IData)((0U == (0x03c0U & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_wrs_c_18_3_sdt_3 
        = (IData)((0U == (0x003cU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))));
    vlSelfRef.HLS_fp16_to_fp17_core_inst__DOT____VdfgRegularize_h5a0a11e1_0_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm) 
           | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsDenorm_5U_10U_land_lpi_1_dfm));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_2) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_wrs_c_18_3_sdt_3));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_and_35_ssc 
        = ((0U == (3U & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__rtn 
        = ((((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3) 
             << 3U) | (((~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_wrs_c_18_3_sdt_3)) 
                        & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_2)) 
                       << 2U)) | ((((IData)((((0U == 
                                               (0x0300U 
                                                & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                                              & (~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3))) 
                                             & ((0U 
                                                 != 
                                                 (0x00c0U 
                                                  & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                                                | (0U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                                                       >> 4U)))))) 
                                    | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_and_35_ssc)) 
                                   << 1U) | (1U & (~ 
                                                   (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                                                     >> 9U) 
                                                    | ((1U 
                                                        == 
                                                        (3U 
                                                         & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                                                            >> 7U))) 
                                                       | (((((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                                                             >> 5U) 
                                                            | (1U 
                                                               == 
                                                               (3U 
                                                                & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                                                                   >> 3U)))) 
                                                           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_2)) 
                                                          | ((((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                                                               >> 1U) 
                                                              & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3)) 
                                                             | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_and_35_ssc)))))))));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__54__sel 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsDenorm_5U_10U_land_lpi_1_dfm;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__54__input_1 
        = (1U & (((IData)(0x11U) + (0x00000010U | (0x0000000fU 
                                                   & (~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__rtn))))) 
                 >> 4U));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__54__input_0 
        = (1U & (~ ((~ (IData)((0U != (0x7fffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))))) 
                    | ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                       >> 0x0000000eU))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__54__sel)
            ? (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__54__input_1)
            : (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__54__input_0));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__54__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_mux_2_nl 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__54__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__55__sel 
        = ((4U & ((~ (IData)(vlSelfRef.HLS_fp16_to_fp17_core_inst__DOT____VdfgRegularize_h5a0a11e1_0_0)) 
                  << 2U)) | (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsDenorm_5U_10U_land_lpi_1_dfm) 
                              << 1U) | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm)));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__55__input_1 
        = (0x0000000fU & ((IData)(1U) + (~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__rtn))));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__55__input_2 
        = (0x0000000fU & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                          >> 0x0aU));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = (0x0eU & (- (IData)((1U & (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__55__sel)))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__55__input_1) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__55__sel) 
                                  >> 1U))))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__55__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__55__sel) 
                                  >> 2U))))));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__55__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_mux1h_nl 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__55__Vfuncout;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__nl_FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg_s 
        = (0x0000003fU & ((IData)(1U) + VL_EXTEND_II(6,5, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__conv_u2u_4_5__48__vector 
                            = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__rtn;
                        vlSelfRef.__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__conv_u2u_4_5__48__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__conv_u2u_4_5__48__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__conv_u2u_4_5__48__Vfuncout)))));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__57__sbit 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                 >> 8U));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__57__arg2 
        = (0x0000001fU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__nl_FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg_s));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__57__arg1 
        = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__58__arg2 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__57__arg2;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__58__arg1 
        = (((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__57__sbit) 
            << 9U) | (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__57__arg1));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__58__arg1;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x000003ffU & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
                          << (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__58__arg2)));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__58__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__57__Vfuncout 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__58__Vfuncout;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_itm 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__57__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__56__sel 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__56__input_0 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_itm;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__56__sel)
            ? 0x03ffU : (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__56__input_0));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__56__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_or_1_nl 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__56__Vfuncout;
}

void Vsim_HLS_fp16_to_fp17___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__le_uflow_scale__1(Vsim_HLS_fp16_to_fp17* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp16_to_fp17___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__le_uflow_scale__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__49__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__49__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__49__input_0;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__49__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__49__input_1;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__49__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__49__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__49__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__50__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__50__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__50__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__50__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__51__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__51__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__51__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__51__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0) 
            | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt)) 
           & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_19 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_38_cse 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
                        & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_13 
        = ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_4_mdf 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_4_mdf) 
                 | ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_4_mdf) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
                 & ((~ (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt))));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__49__sel 
        = (1U & (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__50__sel 
        = vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__50__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__50__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__49__input_1 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__50__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__51__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
            ? 0U : 1U);
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__51__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__51__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__49__input_0 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__51__Vfuncout;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__49__sel)
            ? (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__49__input_1)
            : (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__49__input_0));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__49__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__iExpoWidth_oExpoWidth_prb 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__49__Vfuncout;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_and_1_cse 
        = ((~ ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_38_cse) 
               | ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U))) & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen));
}

void Vsim_HLS_fp16_to_fp17___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__le_uflow_scale__2(Vsim_HLS_fp16_to_fp17* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp16_to_fp17___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__le_uflow_scale__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1 
        = ((~ (IData)(((0x7c00U == (0x7c00U & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                       & (0U != (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)))))) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__or_cse) 
               & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
                  & (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                       ? 2U : 1U) >> 1U))) | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_13)));
}

void Vsim_HLS_fp16_to_fp17___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__le_oflow_scale__0(Vsim_HLS_fp16_to_fp17* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp16_to_fp17___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__le_oflow_scale__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__64__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__64__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__64__input_0;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__64__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__64__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__64__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__65__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__65__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__65__input_0;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__65__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__65__input_1;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__65__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__65__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__65__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen))))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen) 
             & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0))) {
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct 
                = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0;
        }
        if (vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_and_1_cse) {
            __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__64__sel 
                = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsNaN_5U_10U_land_lpi_1_dfm;
            __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__64__input_0 
                = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_mux1h_nl;
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__64__sel)
                    ? 0x0fU : (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__64__input_0));
            __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__64__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_13_10 
                = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__64__Vfuncout;
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_15 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                         >> 0x0eU));
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_16 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                         >> 0x0fU));
        }
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt;
        if (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen) 
             & ((((((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_4_mdf) 
                    & (0x0c00U == (0x0c00U & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)))) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_8)) 
                  & (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                       ? 2U : 1U) >> 1U)) | (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_13) 
                                              & (0x0c00U 
                                                 == 
                                                 (0x0c00U 
                                                  & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)))) 
                                             & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_8))) 
                | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1)))) {
            __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__65__sel 
                = (1U & (~ ((IData)(vlSelfRef.HLS_fp16_to_fp17_core_inst__DOT____VdfgRegularize_h5a0a11e1_0_0) 
                            & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1))));
            __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__65__input_1 
                = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt));
            __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__65__input_0 
                = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_or_1_nl;
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__65__sel)
                    ? (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__65__input_1)
                    : (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__65__input_0));
            __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__65__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0 
                = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__65__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen) 
             & (~ ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_38_cse) 
                   | ((~ (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                          & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))) 
                      & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                          ? 2U : 1U)))))) {
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_14 
                = (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_mux_2_nl) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm)) 
                   | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsNaN_5U_10U_land_lpi_1_dfm));
        }
        if (vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_iswt0_cse 
                = vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0;
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_iswt0 
                = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_4_mdf)) 
                            & (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                                 ? 2U : 1U) >> 1U))));
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var = 1U;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0) 
                | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_19)))) {
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_19)));
        }
    } else {
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_13_10 = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_iswt0_cse = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_15 = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_16 = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_iswt0 = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0 = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_14 = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse = 0U;
    }
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__core_wten 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_iswt0_cse));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_iswt0));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__or_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
}

void Vsim_HLS_fp16_to_fp17___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__le_oflow_scale__0(Vsim_HLS_fp16_to_fp17* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp16_to_fp17___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__le_oflow_scale__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__66__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__66__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__66__input_0;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__66__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__66__input_1;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__66__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__66__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__66__sel = 0;
    CData/*3:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__67__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__67__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__67__input_2;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__67__input_2 = 0;
    CData/*3:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__67__input_1;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__67__input_1 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__67__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__67__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__68__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__68__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__68__input_0;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__68__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__68__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__68__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__69__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__69__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__69__arg1;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__69__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__69__arg2;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__69__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__69__sbit;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__69__sbit = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__70__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__70__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__70__arg1;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__70__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__70__arg2;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__70__arg2 = 0;
    SData/*15:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__71__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__71__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__71__input_0;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__71__input_0 = 0;
    SData/*15:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__71__input_1;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__71__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__71__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__71__sel = 0;
    // Body
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__71__sel 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__71__input_1 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__71__input_0 
        = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_le_slope_oflow_scale;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__71__sel)
            ? (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__71__input_1)
            : (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__71__input_0));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__71__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__71__Vfuncout;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsNaN_5U_10U_land_lpi_1_dfm 
        = (IData)(((0x7c00U == (0x7c00U & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                   & (0U != (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_8 
        = (IData)(((0x7000U == (0x7000U & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                   & (0U != (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm 
        = (1U & (~ (IData)((0x7c00U != (0x7fffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsDenorm_5U_10U_land_lpi_1_dfm 
        = (IData)(((0U == (0x7c00U & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                   & (0U != (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_2 
        = (IData)((0U == (0x03c0U & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_wrs_c_18_3_sdt_3 
        = (IData)((0U == (0x003cU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))));
    vlSelfRef.HLS_fp16_to_fp17_core_inst__DOT____VdfgRegularize_h5a0a11e1_0_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm) 
           | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsDenorm_5U_10U_land_lpi_1_dfm));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_2) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_wrs_c_18_3_sdt_3));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_and_35_ssc 
        = ((0U == (3U & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__rtn 
        = ((((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3) 
             << 3U) | (((~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_wrs_c_18_3_sdt_3)) 
                        & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_2)) 
                       << 2U)) | ((((IData)((((0U == 
                                               (0x0300U 
                                                & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                                              & (~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3))) 
                                             & ((0U 
                                                 != 
                                                 (0x00c0U 
                                                  & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                                                | (0U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                                                       >> 4U)))))) 
                                    | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_and_35_ssc)) 
                                   << 1U) | (1U & (~ 
                                                   (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                                                     >> 9U) 
                                                    | ((1U 
                                                        == 
                                                        (3U 
                                                         & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                                                            >> 7U))) 
                                                       | (((((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                                                             >> 5U) 
                                                            | (1U 
                                                               == 
                                                               (3U 
                                                                & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                                                                   >> 3U)))) 
                                                           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_2)) 
                                                          | ((((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                                                               >> 1U) 
                                                              & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3)) 
                                                             | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_and_35_ssc)))))))));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__66__sel 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsDenorm_5U_10U_land_lpi_1_dfm;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__66__input_1 
        = (1U & (((IData)(0x11U) + (0x00000010U | (0x0000000fU 
                                                   & (~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__rtn))))) 
                 >> 4U));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__66__input_0 
        = (1U & (~ ((~ (IData)((0U != (0x7fffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))))) 
                    | ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                       >> 0x0000000eU))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__66__sel)
            ? (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__66__input_1)
            : (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__66__input_0));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__66__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_mux_2_nl 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__66__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__67__sel 
        = ((4U & ((~ (IData)(vlSelfRef.HLS_fp16_to_fp17_core_inst__DOT____VdfgRegularize_h5a0a11e1_0_0)) 
                  << 2U)) | (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsDenorm_5U_10U_land_lpi_1_dfm) 
                              << 1U) | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm)));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__67__input_1 
        = (0x0000000fU & ((IData)(1U) + (~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__rtn))));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__67__input_2 
        = (0x0000000fU & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                          >> 0x0aU));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = (0x0eU & (- (IData)((1U & (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__67__sel)))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__67__input_1) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__67__sel) 
                                  >> 1U))))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__67__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__67__sel) 
                                  >> 2U))))));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__67__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_mux1h_nl 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__67__Vfuncout;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__nl_FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg_s 
        = (0x0000003fU & ((IData)(1U) + VL_EXTEND_II(6,5, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__conv_u2u_4_5__60__vector 
                            = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__rtn;
                        vlSelfRef.__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__conv_u2u_4_5__60__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__conv_u2u_4_5__60__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__conv_u2u_4_5__60__Vfuncout)))));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__69__sbit 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                 >> 8U));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__69__arg2 
        = (0x0000001fU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__nl_FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg_s));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__69__arg1 
        = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__70__arg2 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__69__arg2;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__70__arg1 
        = (((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__69__sbit) 
            << 9U) | (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__69__arg1));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__70__arg1;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x000003ffU & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
                          << (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__70__arg2)));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__70__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__69__Vfuncout 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__70__Vfuncout;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_itm 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__69__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__68__sel 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__68__input_0 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_itm;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__68__sel)
            ? 0x03ffU : (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__68__input_0));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__68__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_or_1_nl 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__68__Vfuncout;
}

void Vsim_HLS_fp16_to_fp17___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__le_oflow_scale__1(Vsim_HLS_fp16_to_fp17* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp16_to_fp17___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__le_oflow_scale__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__61__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__61__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__61__input_0;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__61__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__61__input_1;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__61__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__61__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__61__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__62__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__62__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__62__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__62__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__63__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__63__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__63__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__63__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0) 
            | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt)) 
           & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_19 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_38_cse 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
                        & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_13 
        = ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_4_mdf 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_4_mdf) 
                 | ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_4_mdf) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
                 & ((~ (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt))));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__61__sel 
        = (1U & (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__62__sel 
        = vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__62__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__62__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__61__input_1 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__62__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__63__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
            ? 0U : 1U);
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__63__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__63__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__61__input_0 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__63__Vfuncout;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__61__sel)
            ? (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__61__input_1)
            : (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__61__input_0));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__61__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__iExpoWidth_oExpoWidth_prb 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__61__Vfuncout;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_and_1_cse 
        = ((~ ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_38_cse) 
               | ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U))) & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen));
}

void Vsim_HLS_fp16_to_fp17___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lo_uflow_scale__0(Vsim_HLS_fp16_to_fp17* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp16_to_fp17___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lo_uflow_scale__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__76__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__76__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__76__input_0;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__76__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__76__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__76__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__77__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__77__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__77__input_0;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__77__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__77__input_1;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__77__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__77__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__77__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen))))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen) 
             & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0))) {
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct 
                = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0;
        }
        if (vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_and_1_cse) {
            __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__76__sel 
                = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsNaN_5U_10U_land_lpi_1_dfm;
            __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__76__input_0 
                = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_mux1h_nl;
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__76__sel)
                    ? 0x0fU : (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__76__input_0));
            __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__76__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_13_10 
                = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__76__Vfuncout;
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_15 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                         >> 0x0eU));
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_16 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                         >> 0x0fU));
        }
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt;
        if (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen) 
             & ((((((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_4_mdf) 
                    & (0x0c00U == (0x0c00U & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)))) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_8)) 
                  & (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                       ? 2U : 1U) >> 1U)) | (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_13) 
                                              & (0x0c00U 
                                                 == 
                                                 (0x0c00U 
                                                  & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)))) 
                                             & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_8))) 
                | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1)))) {
            __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__77__sel 
                = (1U & (~ ((IData)(vlSelfRef.HLS_fp16_to_fp17_core_inst__DOT____VdfgRegularize_h5a0a11e1_0_0) 
                            & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1))));
            __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__77__input_1 
                = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt));
            __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__77__input_0 
                = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_or_1_nl;
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__77__sel)
                    ? (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__77__input_1)
                    : (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__77__input_0));
            __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__77__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0 
                = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__77__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen) 
             & (~ ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_38_cse) 
                   | ((~ (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                          & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))) 
                      & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                          ? 2U : 1U)))))) {
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_14 
                = (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_mux_2_nl) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm)) 
                   | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsNaN_5U_10U_land_lpi_1_dfm));
        }
        if (vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_iswt0_cse 
                = vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0;
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_iswt0 
                = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_4_mdf)) 
                            & (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                                 ? 2U : 1U) >> 1U))));
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var = 1U;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0) 
                | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_19)))) {
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_19)));
        }
    } else {
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_13_10 = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_iswt0_cse = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_15 = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_16 = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_iswt0 = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0 = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_14 = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse = 0U;
    }
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__core_wten 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_iswt0_cse));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_iswt0));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__or_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
}

void Vsim_HLS_fp16_to_fp17___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lo_uflow_scale__0(Vsim_HLS_fp16_to_fp17* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp16_to_fp17___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lo_uflow_scale__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__78__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__78__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__78__input_0;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__78__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__78__input_1;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__78__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__78__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__78__sel = 0;
    CData/*3:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__79__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__79__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__79__input_2;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__79__input_2 = 0;
    CData/*3:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__79__input_1;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__79__input_1 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__79__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__79__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__80__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__80__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__80__input_0;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__80__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__80__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__80__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__81__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__81__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__81__arg1;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__81__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__81__arg2;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__81__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__81__sbit;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__81__sbit = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__82__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__82__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__82__arg1;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__82__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__82__arg2;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__82__arg2 = 0;
    SData/*15:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__83__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__83__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__83__input_0;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__83__input_0 = 0;
    SData/*15:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__83__input_1;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__83__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__83__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__83__sel = 0;
    // Body
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__83__sel 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__83__input_1 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__83__input_0 
        = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_lo_slope_uflow_scale;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__83__sel)
            ? (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__83__input_1)
            : (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__83__input_0));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__83__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__83__Vfuncout;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsNaN_5U_10U_land_lpi_1_dfm 
        = (IData)(((0x7c00U == (0x7c00U & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                   & (0U != (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_8 
        = (IData)(((0x7000U == (0x7000U & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                   & (0U != (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm 
        = (1U & (~ (IData)((0x7c00U != (0x7fffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsDenorm_5U_10U_land_lpi_1_dfm 
        = (IData)(((0U == (0x7c00U & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                   & (0U != (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_2 
        = (IData)((0U == (0x03c0U & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_wrs_c_18_3_sdt_3 
        = (IData)((0U == (0x003cU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))));
    vlSelfRef.HLS_fp16_to_fp17_core_inst__DOT____VdfgRegularize_h5a0a11e1_0_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm) 
           | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsDenorm_5U_10U_land_lpi_1_dfm));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_2) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_wrs_c_18_3_sdt_3));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_and_35_ssc 
        = ((0U == (3U & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__rtn 
        = ((((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3) 
             << 3U) | (((~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_wrs_c_18_3_sdt_3)) 
                        & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_2)) 
                       << 2U)) | ((((IData)((((0U == 
                                               (0x0300U 
                                                & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                                              & (~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3))) 
                                             & ((0U 
                                                 != 
                                                 (0x00c0U 
                                                  & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                                                | (0U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                                                       >> 4U)))))) 
                                    | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_and_35_ssc)) 
                                   << 1U) | (1U & (~ 
                                                   (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                                                     >> 9U) 
                                                    | ((1U 
                                                        == 
                                                        (3U 
                                                         & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                                                            >> 7U))) 
                                                       | (((((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                                                             >> 5U) 
                                                            | (1U 
                                                               == 
                                                               (3U 
                                                                & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                                                                   >> 3U)))) 
                                                           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_2)) 
                                                          | ((((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                                                               >> 1U) 
                                                              & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3)) 
                                                             | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_and_35_ssc)))))))));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__78__sel 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsDenorm_5U_10U_land_lpi_1_dfm;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__78__input_1 
        = (1U & (((IData)(0x11U) + (0x00000010U | (0x0000000fU 
                                                   & (~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__rtn))))) 
                 >> 4U));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__78__input_0 
        = (1U & (~ ((~ (IData)((0U != (0x7fffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))))) 
                    | ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                       >> 0x0000000eU))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__78__sel)
            ? (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__78__input_1)
            : (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__78__input_0));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__78__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_mux_2_nl 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__78__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__79__sel 
        = ((4U & ((~ (IData)(vlSelfRef.HLS_fp16_to_fp17_core_inst__DOT____VdfgRegularize_h5a0a11e1_0_0)) 
                  << 2U)) | (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsDenorm_5U_10U_land_lpi_1_dfm) 
                              << 1U) | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm)));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__79__input_1 
        = (0x0000000fU & ((IData)(1U) + (~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__rtn))));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__79__input_2 
        = (0x0000000fU & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                          >> 0x0aU));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = (0x0eU & (- (IData)((1U & (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__79__sel)))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__79__input_1) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__79__sel) 
                                  >> 1U))))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__79__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__79__sel) 
                                  >> 2U))))));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__79__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_mux1h_nl 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__79__Vfuncout;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__nl_FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg_s 
        = (0x0000003fU & ((IData)(1U) + VL_EXTEND_II(6,5, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__conv_u2u_4_5__72__vector 
                            = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__rtn;
                        vlSelfRef.__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__conv_u2u_4_5__72__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__conv_u2u_4_5__72__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__conv_u2u_4_5__72__Vfuncout)))));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__81__sbit 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                 >> 8U));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__81__arg2 
        = (0x0000001fU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__nl_FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg_s));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__81__arg1 
        = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__82__arg2 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__81__arg2;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__82__arg1 
        = (((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__81__sbit) 
            << 9U) | (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__81__arg1));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__82__arg1;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x000003ffU & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
                          << (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__82__arg2)));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__82__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__81__Vfuncout 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__82__Vfuncout;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_itm 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__81__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__80__sel 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__80__input_0 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_itm;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__80__sel)
            ? 0x03ffU : (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__80__input_0));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__80__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_or_1_nl 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__80__Vfuncout;
}

void Vsim_HLS_fp16_to_fp17___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lo_uflow_scale__1(Vsim_HLS_fp16_to_fp17* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp16_to_fp17___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lo_uflow_scale__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__73__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__73__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__73__input_0;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__73__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__73__input_1;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__73__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__73__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__73__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__74__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__74__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__74__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__74__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__75__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__75__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__75__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__75__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0) 
            | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt)) 
           & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_19 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_38_cse 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
                        & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_13 
        = ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_4_mdf 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_4_mdf) 
                 | ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_4_mdf) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
                 & ((~ (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt))));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__73__sel 
        = (1U & (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__74__sel 
        = vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__74__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__74__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__73__input_1 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__74__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__75__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
            ? 0U : 1U);
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__75__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__75__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__73__input_0 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__75__Vfuncout;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__73__sel)
            ? (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__73__input_1)
            : (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__73__input_0));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__73__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__iExpoWidth_oExpoWidth_prb 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__73__Vfuncout;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_and_1_cse 
        = ((~ ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_38_cse) 
               | ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U))) & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen));
}

void Vsim_HLS_fp16_to_fp17___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lo_oflow_scale__0(Vsim_HLS_fp16_to_fp17* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp16_to_fp17___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lo_oflow_scale__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__88__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__88__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__88__input_0;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__88__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__88__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__88__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__89__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__89__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__89__input_0;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__89__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__89__input_1;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__89__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__89__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__89__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen))))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen) 
             & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0))) {
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct 
                = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0;
        }
        if (vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_and_1_cse) {
            __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__88__sel 
                = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsNaN_5U_10U_land_lpi_1_dfm;
            __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__88__input_0 
                = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_mux1h_nl;
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__88__sel)
                    ? 0x0fU : (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__88__input_0));
            __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__88__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_13_10 
                = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__88__Vfuncout;
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_15 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                         >> 0x0eU));
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_16 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                         >> 0x0fU));
        }
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt;
        if (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen) 
             & ((((((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_4_mdf) 
                    & (0x0c00U == (0x0c00U & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)))) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_8)) 
                  & (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                       ? 2U : 1U) >> 1U)) | (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_13) 
                                              & (0x0c00U 
                                                 == 
                                                 (0x0c00U 
                                                  & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)))) 
                                             & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_8))) 
                | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1)))) {
            __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__89__sel 
                = (1U & (~ ((IData)(vlSelfRef.HLS_fp16_to_fp17_core_inst__DOT____VdfgRegularize_h5a0a11e1_0_0) 
                            & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1))));
            __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__89__input_1 
                = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt));
            __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__89__input_0 
                = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_or_1_nl;
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__89__sel)
                    ? (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__89__input_1)
                    : (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__89__input_0));
            __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__89__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0 
                = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__89__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen) 
             & (~ ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_38_cse) 
                   | ((~ (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                          & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))) 
                      & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                          ? 2U : 1U)))))) {
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_14 
                = (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_mux_2_nl) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm)) 
                   | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsNaN_5U_10U_land_lpi_1_dfm));
        }
        if (vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_iswt0_cse 
                = vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0;
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_iswt0 
                = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_4_mdf)) 
                            & (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                                 ? 2U : 1U) >> 1U))));
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var = 1U;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0) 
                | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_19)))) {
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_19)));
        }
    } else {
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_13_10 = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_iswt0_cse = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_15 = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_16 = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_iswt0 = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0 = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_14 = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse = 0U;
    }
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__core_wten 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_iswt0_cse));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_iswt0));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__or_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
}

void Vsim_HLS_fp16_to_fp17___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lo_oflow_scale__0(Vsim_HLS_fp16_to_fp17* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp16_to_fp17___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lo_oflow_scale__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__90__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__90__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__90__input_0;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__90__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__90__input_1;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__90__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__90__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__90__sel = 0;
    CData/*3:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__91__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__91__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__91__input_2;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__91__input_2 = 0;
    CData/*3:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__91__input_1;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__91__input_1 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__91__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__91__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__92__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__92__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__92__input_0;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__92__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__92__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__92__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__93__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__93__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__93__arg1;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__93__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__93__arg2;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__93__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__93__sbit;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__93__sbit = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__94__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__94__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__94__arg1;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__94__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__94__arg2;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__94__arg2 = 0;
    SData/*15:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__95__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__95__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__95__input_0;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__95__input_0 = 0;
    SData/*15:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__95__input_1;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__95__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__95__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__95__sel = 0;
    // Body
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__95__sel 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__95__input_1 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__95__input_0 
        = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__reg2dp_lut_lo_slope_oflow_scale;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__95__sel)
            ? (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__95__input_1)
            : (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__95__input_0));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__95__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__95__Vfuncout;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsNaN_5U_10U_land_lpi_1_dfm 
        = (IData)(((0x7c00U == (0x7c00U & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                   & (0U != (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_8 
        = (IData)(((0x7000U == (0x7000U & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                   & (0U != (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm 
        = (1U & (~ (IData)((0x7c00U != (0x7fffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsDenorm_5U_10U_land_lpi_1_dfm 
        = (IData)(((0U == (0x7c00U & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                   & (0U != (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_2 
        = (IData)((0U == (0x03c0U & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_wrs_c_18_3_sdt_3 
        = (IData)((0U == (0x003cU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))));
    vlSelfRef.HLS_fp16_to_fp17_core_inst__DOT____VdfgRegularize_h5a0a11e1_0_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm) 
           | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsDenorm_5U_10U_land_lpi_1_dfm));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_2) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_wrs_c_18_3_sdt_3));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_and_35_ssc 
        = ((0U == (3U & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__rtn 
        = ((((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3) 
             << 3U) | (((~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_wrs_c_18_3_sdt_3)) 
                        & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_2)) 
                       << 2U)) | ((((IData)((((0U == 
                                               (0x0300U 
                                                & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                                              & (~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3))) 
                                             & ((0U 
                                                 != 
                                                 (0x00c0U 
                                                  & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                                                | (0U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                                                       >> 4U)))))) 
                                    | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_and_35_ssc)) 
                                   << 1U) | (1U & (~ 
                                                   (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                                                     >> 9U) 
                                                    | ((1U 
                                                        == 
                                                        (3U 
                                                         & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                                                            >> 7U))) 
                                                       | (((((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                                                             >> 5U) 
                                                            | (1U 
                                                               == 
                                                               (3U 
                                                                & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                                                                   >> 3U)))) 
                                                           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_2)) 
                                                          | ((((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                                                               >> 1U) 
                                                              & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3)) 
                                                             | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_and_35_ssc)))))))));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__90__sel 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsDenorm_5U_10U_land_lpi_1_dfm;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__90__input_1 
        = (1U & (((IData)(0x11U) + (0x00000010U | (0x0000000fU 
                                                   & (~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__rtn))))) 
                 >> 4U));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__90__input_0 
        = (1U & (~ ((~ (IData)((0U != (0x7fffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))))) 
                    | ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                       >> 0x0000000eU))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__90__sel)
            ? (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__90__input_1)
            : (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__90__input_0));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__90__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_mux_2_nl 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__90__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__91__sel 
        = ((4U & ((~ (IData)(vlSelfRef.HLS_fp16_to_fp17_core_inst__DOT____VdfgRegularize_h5a0a11e1_0_0)) 
                  << 2U)) | (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsDenorm_5U_10U_land_lpi_1_dfm) 
                              << 1U) | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm)));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__91__input_1 
        = (0x0000000fU & ((IData)(1U) + (~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__rtn))));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__91__input_2 
        = (0x0000000fU & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                          >> 0x0aU));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = (0x0eU & (- (IData)((1U & (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__91__sel)))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__91__input_1) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__91__sel) 
                                  >> 1U))))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__91__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__91__sel) 
                                  >> 2U))))));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__91__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_mux1h_nl 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__91__Vfuncout;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__nl_FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg_s 
        = (0x0000003fU & ((IData)(1U) + VL_EXTEND_II(6,5, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__conv_u2u_4_5__84__vector 
                            = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__rtn;
                        vlSelfRef.__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__conv_u2u_4_5__84__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__conv_u2u_4_5__84__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__conv_u2u_4_5__84__Vfuncout)))));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__93__sbit 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                 >> 8U));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__93__arg2 
        = (0x0000001fU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__nl_FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg_s));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__93__arg1 
        = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__94__arg2 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__93__arg2;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__94__arg1 
        = (((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__93__sbit) 
            << 9U) | (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__93__arg1));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__94__arg1;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x000003ffU & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
                          << (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__94__arg2)));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__94__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__93__Vfuncout 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__94__Vfuncout;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_itm 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__93__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__92__sel 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__92__input_0 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_itm;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__92__sel)
            ? 0x03ffU : (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__92__input_0));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__92__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_or_1_nl 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__92__Vfuncout;
}

void Vsim_HLS_fp16_to_fp17___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lo_oflow_scale__1(Vsim_HLS_fp16_to_fp17* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp16_to_fp17___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_intp__DOT__lo_oflow_scale__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__85__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__85__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__85__input_0;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__85__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__85__input_1;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__85__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__85__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__85__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__86__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__86__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__86__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__86__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__87__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__87__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__87__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__87__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0) 
            | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt)) 
           & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__fp16_en));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_19 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_38_cse 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
                        & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_13 
        = ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_4_mdf 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_4_mdf) 
                 | ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_4_mdf) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
                 & ((~ (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt))));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__85__sel 
        = (1U & (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__86__sel 
        = vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__86__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__86__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__85__input_1 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__86__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__87__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
            ? 0U : 1U);
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__87__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__87__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__85__input_0 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__87__Vfuncout;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__85__sel)
            ? (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__85__input_1)
            : (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__85__input_0));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__85__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__iExpoWidth_oExpoWidth_prb 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__85__Vfuncout;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_and_1_cse 
        = ((~ ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_38_cse) 
               | ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U))) & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen));
}

void Vsim_HLS_fp16_to_fp17___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__core_din_format_switch_0__0(Vsim_HLS_fp16_to_fp17* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp16_to_fp17___act_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__core_din_format_switch_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.nvdla_core_clk = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) 
                                & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_slcg_core__DOT__nvdla_core_clk_slcg_0__DOT__p_clkgate__DOT__qd));
}

void Vsim_HLS_fp16_to_fp17___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__core_din_format_switch_0__0(Vsim_HLS_fp16_to_fp17* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp16_to_fp17___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__core_din_format_switch_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__100__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__100__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__100__input_0;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__100__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__100__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__100__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__101__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__101__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__101__input_0;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__101__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__101__input_1;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__101__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__101__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__101__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt)))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_and_1_cse) {
            __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__100__sel 
                = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsNaN_5U_10U_land_lpi_1_dfm;
            __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__100__input_0 
                = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_mux1h_nl;
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__100__sel)
                    ? 0x0fU : (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__100__input_0));
            __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__100__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_13_10 
                = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__100__Vfuncout;
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_15 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                         >> 0x0eU));
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_16 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                         >> 0x0fU));
        }
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt;
        if (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen) 
             & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0))) {
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct 
                = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen) 
             & ((((((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_4_mdf) 
                    & (0x0c00U == (0x0c00U & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)))) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_8)) 
                  & (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                       ? 2U : 1U) >> 1U)) | (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_13) 
                                              & (0x0c00U 
                                                 == 
                                                 (0x0c00U 
                                                  & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)))) 
                                             & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_8))) 
                | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1)))) {
            __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__101__sel 
                = (1U & (~ ((IData)(vlSelfRef.HLS_fp16_to_fp17_core_inst__DOT____VdfgRegularize_h5a0a11e1_0_0) 
                            & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1))));
            __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__101__input_1 
                = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt));
            __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__101__input_0 
                = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_or_1_nl;
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__101__sel)
                    ? (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__101__input_1)
                    : (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__101__input_0));
            __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__101__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0 
                = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__101__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen) 
             & (~ ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_38_cse) 
                   | ((~ (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                          & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))) 
                      & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                          ? 2U : 1U)))))) {
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_14 
                = (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_mux_2_nl) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm)) 
                   | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsNaN_5U_10U_land_lpi_1_dfm));
        }
        if (vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_iswt0_cse 
                = vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0;
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_iswt0 
                = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_4_mdf)) 
                            & (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                                 ? 2U : 1U) >> 1U))));
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var = 1U;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0) 
                | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_19)))) {
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_19)));
        }
    } else {
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_13_10 = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_15 = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_16 = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_iswt0_cse = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0 = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_iswt0 = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_14 = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse = 0U;
    }
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__core_wten 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_iswt0_cse));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_iswt0));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
}

void Vsim_HLS_fp16_to_fp17___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__core_din_format_switch_0__1(Vsim_HLS_fp16_to_fp17* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp16_to_fp17___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__core_din_format_switch_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____VdfgRegularize_hff3fa78a_0_3) 
           & (0x0eU == (0x0eU & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__switch_out_vld))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__or_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
}

void Vsim_HLS_fp16_to_fp17___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__core_din_format_switch_0__1(Vsim_HLS_fp16_to_fp17* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp16_to_fp17___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__core_din_format_switch_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__97__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__97__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__97__input_0;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__97__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__97__input_1;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__97__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__97__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__97__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__98__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__98__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__98__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__98__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__99__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__99__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__99__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__99__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__102__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__102__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__102__input_0;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__102__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__102__input_1;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__102__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__102__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__102__sel = 0;
    CData/*3:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__103__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__103__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__103__input_2;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__103__input_2 = 0;
    CData/*3:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__103__input_1;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__103__input_1 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__103__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__103__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__104__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__104__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__104__input_0;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__104__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__104__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__104__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__105__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__105__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__105__arg1;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__105__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__105__arg2;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__105__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__105__sbit;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__105__sbit = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__106__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__106__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__106__arg1;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__106__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__106__arg2;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__106__arg2 = 0;
    SData/*15:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__107__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__107__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__107__input_0;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__107__input_0 = 0;
    SData/*15:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__107__input_1;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__107__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__107__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__107__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____VdfgRegularize_hff3fa78a_0_0) 
           & (0x0eU == (0x0eU & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__switch_in_rdy))));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__107__sel 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__107__input_1 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__107__input_0 
        = (0x0000ffffU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pdp_datin_pd_f_mux0[0U]);
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__107__sel)
            ? (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__107__input_1)
            : (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__107__input_0));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__107__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__107__Vfuncout;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsNaN_5U_10U_land_lpi_1_dfm 
        = (IData)(((0x7c00U == (0x7c00U & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                   & (0U != (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_8 
        = (IData)(((0x7000U == (0x7000U & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                   & (0U != (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm 
        = (1U & (~ (IData)((0x7c00U != (0x7fffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsDenorm_5U_10U_land_lpi_1_dfm 
        = (IData)(((0U == (0x7c00U & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                   & (0U != (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_2 
        = (IData)((0U == (0x03c0U & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_wrs_c_18_3_sdt_3 
        = (IData)((0U == (0x003cU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    vlSelfRef.HLS_fp16_to_fp17_core_inst__DOT____VdfgRegularize_h5a0a11e1_0_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm) 
           | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsDenorm_5U_10U_land_lpi_1_dfm));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_2) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_wrs_c_18_3_sdt_3));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_19 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_38_cse 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
                        & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_13 
        = ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_4_mdf 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_and_35_ssc 
        = ((0U == (3U & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1 
        = ((~ (IData)(((0x7c00U == (0x7c00U & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                       & (0U != (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)))))) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__or_cse) 
               & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
                  & (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                       ? 2U : 1U) >> 1U))) | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_13)));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_4_mdf) 
                 | ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_4_mdf) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__rtn 
        = ((((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3) 
             << 3U) | (((~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_wrs_c_18_3_sdt_3)) 
                        & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_2)) 
                       << 2U)) | ((((IData)((((0U == 
                                               (0x0300U 
                                                & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                                              & (~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3))) 
                                             & ((0U 
                                                 != 
                                                 (0x00c0U 
                                                  & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                                                | (0U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                                                       >> 4U)))))) 
                                    | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_and_35_ssc)) 
                                   << 1U) | (1U & (~ 
                                                   (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                                                     >> 9U) 
                                                    | ((1U 
                                                        == 
                                                        (3U 
                                                         & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                                                            >> 7U))) 
                                                       | (((((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                                                             >> 5U) 
                                                            | (1U 
                                                               == 
                                                               (3U 
                                                                & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                                                                   >> 3U)))) 
                                                           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_2)) 
                                                          | ((((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                                                               >> 1U) 
                                                              & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3)) 
                                                             | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_and_35_ssc)))))))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
                 & ((~ (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt))));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__97__sel 
        = (1U & (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__98__sel 
        = vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__98__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__98__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__97__input_1 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__98__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__99__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
            ? 0U : 1U);
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__99__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__99__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__97__input_0 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__99__Vfuncout;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__97__sel)
            ? (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__97__input_1)
            : (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__97__input_0));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__97__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__iExpoWidth_oExpoWidth_prb 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__97__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__102__sel 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsDenorm_5U_10U_land_lpi_1_dfm;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__102__input_1 
        = (1U & (((IData)(0x11U) + (0x00000010U | (0x0000000fU 
                                                   & (~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__rtn))))) 
                 >> 4U));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__102__input_0 
        = (1U & (~ ((~ (IData)((0U != (0x7fffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))))) 
                    | ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                       >> 0x0000000eU))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__102__sel)
            ? (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__102__input_1)
            : (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__102__input_0));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__102__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_mux_2_nl 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__102__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__103__sel 
        = ((4U & ((~ (IData)(vlSelfRef.HLS_fp16_to_fp17_core_inst__DOT____VdfgRegularize_h5a0a11e1_0_0)) 
                  << 2U)) | (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsDenorm_5U_10U_land_lpi_1_dfm) 
                              << 1U) | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm)));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__103__input_1 
        = (0x0000000fU & ((IData)(1U) + (~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__rtn))));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__103__input_2 
        = (0x0000000fU & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                          >> 0x0aU));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = (0x0eU & (- (IData)((1U & (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__103__sel)))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__103__input_1) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__103__sel) 
                                  >> 1U))))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__103__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__103__sel) 
                                  >> 2U))))));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__103__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_mux1h_nl 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__103__Vfuncout;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__nl_FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg_s 
        = (0x0000003fU & ((IData)(1U) + VL_EXTEND_II(6,5, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__conv_u2u_4_5__96__vector 
                            = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__rtn;
                        vlSelfRef.__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__conv_u2u_4_5__96__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__conv_u2u_4_5__96__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__conv_u2u_4_5__96__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_and_1_cse 
        = ((~ ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_38_cse) 
               | ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U))) & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__105__sbit 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                 >> 8U));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__105__arg2 
        = (0x0000001fU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__nl_FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg_s));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__105__arg1 
        = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__106__arg2 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__105__arg2;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__106__arg1 
        = (((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__105__sbit) 
            << 9U) | (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__105__arg1));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__106__arg1;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x000003ffU & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
                          << (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__106__arg2)));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__106__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__105__Vfuncout 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__106__Vfuncout;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_itm 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__105__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__104__sel 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__104__input_0 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_itm;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__104__sel)
            ? 0x03ffU : (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__104__input_0));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__104__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_or_1_nl 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__104__Vfuncout;
}

void Vsim_HLS_fp16_to_fp17___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__core_din_format_switch_1__0(Vsim_HLS_fp16_to_fp17* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp16_to_fp17___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__core_din_format_switch_1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__112__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__112__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__112__input_0;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__112__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__112__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__112__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__113__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__113__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__113__input_0;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__113__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__113__input_1;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__113__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__113__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__113__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt)))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_and_1_cse) {
            __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__112__sel 
                = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsNaN_5U_10U_land_lpi_1_dfm;
            __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__112__input_0 
                = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_mux1h_nl;
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__112__sel)
                    ? 0x0fU : (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__112__input_0));
            __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__112__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_13_10 
                = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__112__Vfuncout;
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_15 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                         >> 0x0eU));
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_16 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                         >> 0x0fU));
        }
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt;
        if (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen) 
             & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0))) {
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct 
                = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen) 
             & ((((((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_4_mdf) 
                    & (0x0c00U == (0x0c00U & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)))) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_8)) 
                  & (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                       ? 2U : 1U) >> 1U)) | (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_13) 
                                              & (0x0c00U 
                                                 == 
                                                 (0x0c00U 
                                                  & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)))) 
                                             & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_8))) 
                | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1)))) {
            __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__113__sel 
                = (1U & (~ ((IData)(vlSelfRef.HLS_fp16_to_fp17_core_inst__DOT____VdfgRegularize_h5a0a11e1_0_0) 
                            & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1))));
            __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__113__input_1 
                = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt));
            __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__113__input_0 
                = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_or_1_nl;
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__113__sel)
                    ? (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__113__input_1)
                    : (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__113__input_0));
            __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__113__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0 
                = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__113__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen) 
             & (~ ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_38_cse) 
                   | ((~ (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                          & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))) 
                      & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                          ? 2U : 1U)))))) {
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_14 
                = (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_mux_2_nl) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm)) 
                   | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsNaN_5U_10U_land_lpi_1_dfm));
        }
        if (vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_iswt0_cse 
                = vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0;
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_iswt0 
                = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_4_mdf)) 
                            & (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                                 ? 2U : 1U) >> 1U))));
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var = 1U;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0) 
                | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_19)))) {
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_19)));
        }
    } else {
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_13_10 = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_15 = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_16 = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_iswt0_cse = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0 = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_iswt0 = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_14 = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse = 0U;
    }
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__core_wten 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_iswt0_cse));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_iswt0));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
}

void Vsim_HLS_fp16_to_fp17___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__core_din_format_switch_1__1(Vsim_HLS_fp16_to_fp17* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp16_to_fp17___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__core_din_format_switch_1__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____VdfgRegularize_hff3fa78a_0_3) 
           & (IData)(((0x0cU == (0x0cU & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__switch_out_vld))) 
                      & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__core_din_format_switch_0.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__or_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
}

void Vsim_HLS_fp16_to_fp17___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__core_din_format_switch_1__0(Vsim_HLS_fp16_to_fp17* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp16_to_fp17___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__core_din_format_switch_1__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__109__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__109__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__109__input_0;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__109__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__109__input_1;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__109__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__109__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__109__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__110__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__110__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__110__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__110__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__111__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__111__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__111__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__111__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__114__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__114__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__114__input_0;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__114__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__114__input_1;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__114__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__114__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__114__sel = 0;
    CData/*3:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__115__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__115__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__115__input_2;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__115__input_2 = 0;
    CData/*3:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__115__input_1;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__115__input_1 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__115__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__115__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__116__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__116__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__116__input_0;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__116__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__116__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__116__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__117__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__117__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__117__arg1;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__117__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__117__arg2;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__117__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__117__sbit;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__117__sbit = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__118__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__118__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__118__arg1;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__118__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__118__arg2;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__118__arg2 = 0;
    SData/*15:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__119__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__119__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__119__input_0;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__119__input_0 = 0;
    SData/*15:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__119__input_1;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__119__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__119__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__119__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____VdfgRegularize_hff3fa78a_0_0) 
           & (IData)(((0x0cU == (0x0cU & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__switch_in_rdy))) 
                      & (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__core_din_format_switch_0.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld))));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__119__sel 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__119__input_1 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__119__input_0 
        = (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pdp_datin_pd_f_mux0[0U] 
           >> 0x00000010U);
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__119__sel)
            ? (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__119__input_1)
            : (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__119__input_0));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__119__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__119__Vfuncout;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsNaN_5U_10U_land_lpi_1_dfm 
        = (IData)(((0x7c00U == (0x7c00U & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                   & (0U != (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_8 
        = (IData)(((0x7000U == (0x7000U & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                   & (0U != (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm 
        = (1U & (~ (IData)((0x7c00U != (0x7fffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsDenorm_5U_10U_land_lpi_1_dfm 
        = (IData)(((0U == (0x7c00U & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                   & (0U != (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_2 
        = (IData)((0U == (0x03c0U & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_wrs_c_18_3_sdt_3 
        = (IData)((0U == (0x003cU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    vlSelfRef.HLS_fp16_to_fp17_core_inst__DOT____VdfgRegularize_h5a0a11e1_0_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm) 
           | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsDenorm_5U_10U_land_lpi_1_dfm));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_2) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_wrs_c_18_3_sdt_3));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_19 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_38_cse 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
                        & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_13 
        = ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_4_mdf 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_and_35_ssc 
        = ((0U == (3U & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1 
        = ((~ (IData)(((0x7c00U == (0x7c00U & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                       & (0U != (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)))))) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__or_cse) 
               & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
                  & (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                       ? 2U : 1U) >> 1U))) | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_13)));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_4_mdf) 
                 | ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_4_mdf) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__rtn 
        = ((((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3) 
             << 3U) | (((~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_wrs_c_18_3_sdt_3)) 
                        & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_2)) 
                       << 2U)) | ((((IData)((((0U == 
                                               (0x0300U 
                                                & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                                              & (~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3))) 
                                             & ((0U 
                                                 != 
                                                 (0x00c0U 
                                                  & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                                                | (0U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                                                       >> 4U)))))) 
                                    | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_and_35_ssc)) 
                                   << 1U) | (1U & (~ 
                                                   (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                                                     >> 9U) 
                                                    | ((1U 
                                                        == 
                                                        (3U 
                                                         & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                                                            >> 7U))) 
                                                       | (((((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                                                             >> 5U) 
                                                            | (1U 
                                                               == 
                                                               (3U 
                                                                & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                                                                   >> 3U)))) 
                                                           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_2)) 
                                                          | ((((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                                                               >> 1U) 
                                                              & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3)) 
                                                             | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_and_35_ssc)))))))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
                 & ((~ (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt))));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__109__sel 
        = (1U & (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__110__sel 
        = vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__110__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__110__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__109__input_1 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__110__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__111__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
            ? 0U : 1U);
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__111__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__111__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__109__input_0 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__111__Vfuncout;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__109__sel)
            ? (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__109__input_1)
            : (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__109__input_0));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__109__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__iExpoWidth_oExpoWidth_prb 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__109__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__114__sel 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsDenorm_5U_10U_land_lpi_1_dfm;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__114__input_1 
        = (1U & (((IData)(0x11U) + (0x00000010U | (0x0000000fU 
                                                   & (~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__rtn))))) 
                 >> 4U));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__114__input_0 
        = (1U & (~ ((~ (IData)((0U != (0x7fffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))))) 
                    | ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                       >> 0x0000000eU))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__114__sel)
            ? (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__114__input_1)
            : (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__114__input_0));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__114__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_mux_2_nl 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__114__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__115__sel 
        = ((4U & ((~ (IData)(vlSelfRef.HLS_fp16_to_fp17_core_inst__DOT____VdfgRegularize_h5a0a11e1_0_0)) 
                  << 2U)) | (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsDenorm_5U_10U_land_lpi_1_dfm) 
                              << 1U) | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm)));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__115__input_1 
        = (0x0000000fU & ((IData)(1U) + (~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__rtn))));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__115__input_2 
        = (0x0000000fU & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                          >> 0x0aU));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = (0x0eU & (- (IData)((1U & (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__115__sel)))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__115__input_1) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__115__sel) 
                                  >> 1U))))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__115__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__115__sel) 
                                  >> 2U))))));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__115__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_mux1h_nl 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__115__Vfuncout;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__nl_FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg_s 
        = (0x0000003fU & ((IData)(1U) + VL_EXTEND_II(6,5, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__conv_u2u_4_5__108__vector 
                            = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__rtn;
                        vlSelfRef.__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__conv_u2u_4_5__108__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__conv_u2u_4_5__108__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__conv_u2u_4_5__108__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_and_1_cse 
        = ((~ ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_38_cse) 
               | ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U))) & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__117__sbit 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                 >> 8U));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__117__arg2 
        = (0x0000001fU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__nl_FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg_s));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__117__arg1 
        = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__118__arg2 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__117__arg2;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__118__arg1 
        = (((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__117__sbit) 
            << 9U) | (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__117__arg1));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__118__arg1;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x000003ffU & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
                          << (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__118__arg2)));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__118__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__117__Vfuncout 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__118__Vfuncout;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_itm 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__117__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__116__sel 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__116__input_0 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_itm;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__116__sel)
            ? 0x03ffU : (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__116__input_0));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__116__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_or_1_nl 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__116__Vfuncout;
}

void Vsim_HLS_fp16_to_fp17___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__core_din_format_switch_2__0(Vsim_HLS_fp16_to_fp17* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp16_to_fp17___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__core_din_format_switch_2__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__124__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__124__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__124__input_0;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__124__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__124__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__124__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__125__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__125__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__125__input_0;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__125__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__125__input_1;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__125__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__125__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__125__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt)))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_and_1_cse) {
            __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__124__sel 
                = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsNaN_5U_10U_land_lpi_1_dfm;
            __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__124__input_0 
                = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_mux1h_nl;
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__124__sel)
                    ? 0x0fU : (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__124__input_0));
            __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__124__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_13_10 
                = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__124__Vfuncout;
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_15 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                         >> 0x0eU));
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_16 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                         >> 0x0fU));
        }
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt;
        if (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen) 
             & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0))) {
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct 
                = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen) 
             & ((((((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_4_mdf) 
                    & (0x0c00U == (0x0c00U & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)))) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_8)) 
                  & (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                       ? 2U : 1U) >> 1U)) | (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_13) 
                                              & (0x0c00U 
                                                 == 
                                                 (0x0c00U 
                                                  & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)))) 
                                             & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_8))) 
                | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1)))) {
            __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__125__sel 
                = (1U & (~ ((IData)(vlSelfRef.HLS_fp16_to_fp17_core_inst__DOT____VdfgRegularize_h5a0a11e1_0_0) 
                            & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1))));
            __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__125__input_1 
                = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt));
            __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__125__input_0 
                = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_or_1_nl;
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__125__sel)
                    ? (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__125__input_1)
                    : (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__125__input_0));
            __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__125__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0 
                = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__125__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen) 
             & (~ ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_38_cse) 
                   | ((~ (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                          & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))) 
                      & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                          ? 2U : 1U)))))) {
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_14 
                = (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_mux_2_nl) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm)) 
                   | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsNaN_5U_10U_land_lpi_1_dfm));
        }
        if (vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_iswt0_cse 
                = vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0;
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_iswt0 
                = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_4_mdf)) 
                            & (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                                 ? 2U : 1U) >> 1U))));
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var = 1U;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0) 
                | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_19)))) {
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_19)));
        }
    } else {
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_13_10 = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_15 = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_16 = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_iswt0_cse = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0 = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_iswt0 = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_14 = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse = 0U;
    }
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__core_wten 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_iswt0_cse));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_iswt0));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
}

void Vsim_HLS_fp16_to_fp17___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__core_din_format_switch_2__1(Vsim_HLS_fp16_to_fp17* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp16_to_fp17___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__core_din_format_switch_2__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____VdfgRegularize_hff3fa78a_0_3) 
           & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__core_din_format_switch_3.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld) 
              & (3U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____VdfgRegularize_hff3fa78a_0_36))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__or_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
}

void Vsim_HLS_fp16_to_fp17___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__core_din_format_switch_2__0(Vsim_HLS_fp16_to_fp17* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp16_to_fp17___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__core_din_format_switch_2__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__121__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__121__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__121__input_0;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__121__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__121__input_1;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__121__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__121__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__121__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__122__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__122__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__122__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__122__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__123__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__123__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__123__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__123__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__126__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__126__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__126__input_0;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__126__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__126__input_1;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__126__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__126__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__126__sel = 0;
    CData/*3:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__127__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__127__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__127__input_2;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__127__input_2 = 0;
    CData/*3:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__127__input_1;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__127__input_1 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__127__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__127__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__128__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__128__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__128__input_0;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__128__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__128__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__128__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__129__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__129__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__129__arg1;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__129__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__129__arg2;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__129__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__129__sbit;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__129__sbit = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__130__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__130__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__130__arg1;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__130__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__130__arg2;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__130__arg2 = 0;
    SData/*15:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__131__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__131__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__131__input_0;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__131__input_0 = 0;
    SData/*15:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__131__input_1;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__131__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__131__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__131__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____VdfgRegularize_hff3fa78a_0_0) 
           & ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__core_din_format_switch_3.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld) 
              & (3U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____VdfgRegularize_hff3fa78a_0_34))));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__131__sel 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__131__input_1 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__131__input_0 
        = (0x0000ffffU & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pdp_datin_pd_f_mux0[1U]);
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__131__sel)
            ? (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__131__input_1)
            : (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__131__input_0));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__131__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__131__Vfuncout;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsNaN_5U_10U_land_lpi_1_dfm 
        = (IData)(((0x7c00U == (0x7c00U & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                   & (0U != (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_8 
        = (IData)(((0x7000U == (0x7000U & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                   & (0U != (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm 
        = (1U & (~ (IData)((0x7c00U != (0x7fffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsDenorm_5U_10U_land_lpi_1_dfm 
        = (IData)(((0U == (0x7c00U & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                   & (0U != (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_2 
        = (IData)((0U == (0x03c0U & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_wrs_c_18_3_sdt_3 
        = (IData)((0U == (0x003cU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    vlSelfRef.HLS_fp16_to_fp17_core_inst__DOT____VdfgRegularize_h5a0a11e1_0_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm) 
           | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsDenorm_5U_10U_land_lpi_1_dfm));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_2) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_wrs_c_18_3_sdt_3));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_19 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_38_cse 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
                        & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_13 
        = ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_4_mdf 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_and_35_ssc 
        = ((0U == (3U & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1 
        = ((~ (IData)(((0x7c00U == (0x7c00U & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                       & (0U != (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)))))) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__or_cse) 
               & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
                  & (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                       ? 2U : 1U) >> 1U))) | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_13)));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_4_mdf) 
                 | ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_4_mdf) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__rtn 
        = ((((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3) 
             << 3U) | (((~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_wrs_c_18_3_sdt_3)) 
                        & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_2)) 
                       << 2U)) | ((((IData)((((0U == 
                                               (0x0300U 
                                                & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                                              & (~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3))) 
                                             & ((0U 
                                                 != 
                                                 (0x00c0U 
                                                  & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                                                | (0U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                                                       >> 4U)))))) 
                                    | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_and_35_ssc)) 
                                   << 1U) | (1U & (~ 
                                                   (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                                                     >> 9U) 
                                                    | ((1U 
                                                        == 
                                                        (3U 
                                                         & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                                                            >> 7U))) 
                                                       | (((((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                                                             >> 5U) 
                                                            | (1U 
                                                               == 
                                                               (3U 
                                                                & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                                                                   >> 3U)))) 
                                                           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_2)) 
                                                          | ((((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                                                               >> 1U) 
                                                              & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3)) 
                                                             | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_and_35_ssc)))))))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
                 & ((~ (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt))));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__121__sel 
        = (1U & (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__122__sel 
        = vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__122__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__122__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__121__input_1 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__122__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__123__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
            ? 0U : 1U);
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__123__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__123__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__121__input_0 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__123__Vfuncout;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__121__sel)
            ? (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__121__input_1)
            : (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__121__input_0));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__121__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__iExpoWidth_oExpoWidth_prb 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__121__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__126__sel 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsDenorm_5U_10U_land_lpi_1_dfm;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__126__input_1 
        = (1U & (((IData)(0x11U) + (0x00000010U | (0x0000000fU 
                                                   & (~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__rtn))))) 
                 >> 4U));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__126__input_0 
        = (1U & (~ ((~ (IData)((0U != (0x7fffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))))) 
                    | ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                       >> 0x0000000eU))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__126__sel)
            ? (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__126__input_1)
            : (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__126__input_0));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__126__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_mux_2_nl 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__126__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__127__sel 
        = ((4U & ((~ (IData)(vlSelfRef.HLS_fp16_to_fp17_core_inst__DOT____VdfgRegularize_h5a0a11e1_0_0)) 
                  << 2U)) | (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsDenorm_5U_10U_land_lpi_1_dfm) 
                              << 1U) | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm)));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__127__input_1 
        = (0x0000000fU & ((IData)(1U) + (~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__rtn))));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__127__input_2 
        = (0x0000000fU & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                          >> 0x0aU));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = (0x0eU & (- (IData)((1U & (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__127__sel)))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__127__input_1) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__127__sel) 
                                  >> 1U))))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__127__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__127__sel) 
                                  >> 2U))))));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__127__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_mux1h_nl 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__127__Vfuncout;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__nl_FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg_s 
        = (0x0000003fU & ((IData)(1U) + VL_EXTEND_II(6,5, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__conv_u2u_4_5__120__vector 
                            = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__rtn;
                        vlSelfRef.__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__conv_u2u_4_5__120__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__conv_u2u_4_5__120__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__conv_u2u_4_5__120__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_and_1_cse 
        = ((~ ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_38_cse) 
               | ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U))) & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__129__sbit 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                 >> 8U));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__129__arg2 
        = (0x0000001fU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__nl_FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg_s));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__129__arg1 
        = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__130__arg2 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__129__arg2;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__130__arg1 
        = (((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__129__sbit) 
            << 9U) | (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__129__arg1));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__130__arg1;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x000003ffU & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
                          << (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__130__arg2)));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__130__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__129__Vfuncout 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__130__Vfuncout;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_itm 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__129__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__128__sel 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__128__input_0 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_itm;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__128__sel)
            ? 0x03ffU : (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__128__input_0));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__128__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_or_1_nl 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__128__Vfuncout;
}

void Vsim_HLS_fp16_to_fp17___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__core_din_format_switch_3__0(Vsim_HLS_fp16_to_fp17* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp16_to_fp17___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__core_din_format_switch_3__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__136__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__136__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__136__input_0;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__136__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__136__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__136__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__137__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__137__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__137__input_0;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__137__input_0 = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__137__input_1;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__137__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__137__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__137__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt))) 
                        | ((IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen))))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt)))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt) 
                            | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0))) 
                        | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt)))));
    if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_and_1_cse) {
            __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__136__sel 
                = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsNaN_5U_10U_land_lpi_1_dfm;
            __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__136__input_0 
                = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_mux1h_nl;
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__136__sel)
                    ? 0x0fU : (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__136__input_0));
            __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__136__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_13_10 
                = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_4_2_2__136__Vfuncout;
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_15 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                         >> 0x0eU));
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_16 
                = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                         >> 0x0fU));
        }
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt 
            = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt;
        if (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen) 
             & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0))) {
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct 
                = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen) 
             & ((((((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_4_mdf) 
                    & (0x0c00U == (0x0c00U & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)))) 
                   & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_8)) 
                  & (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                       ? 2U : 1U) >> 1U)) | (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_13) 
                                              & (0x0c00U 
                                                 == 
                                                 (0x0c00U 
                                                  & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)))) 
                                             & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_8))) 
                | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1)))) {
            __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__137__sel 
                = (1U & (~ ((IData)(vlSelfRef.HLS_fp16_to_fp17_core_inst__DOT____VdfgRegularize_h5a0a11e1_0_0) 
                            & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1))));
            __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__137__input_1 
                = (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt));
            __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__137__input_0 
                = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_or_1_nl;
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
                = ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__137__sel)
                    ? (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__137__input_1)
                    : (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__137__input_0));
            __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__137__Vfuncout 
                = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0 
                = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__137__Vfuncout;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen) 
             & (~ ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_38_cse) 
                   | ((~ (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
                           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                          & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))) 
                      & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                          ? 2U : 1U)))))) {
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_14 
                = (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_mux_2_nl) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm)) 
                   | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsNaN_5U_10U_land_lpi_1_dfm));
        }
        if (vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen) {
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_iswt0_cse 
                = vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0;
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_iswt0 
                = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_4_mdf)) 
                            & (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                                 ? 2U : 1U) >> 1U))));
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var = 1U;
        }
        if (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen) 
             & ((IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0) 
                | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_19)))) {
            vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse 
                = (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_19)));
        }
    } else {
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_13_10 = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_15 = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_16 = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_iswt0_cse = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0 = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_iswt0 = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_14 = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var = 0U;
        vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse = 0U;
    }
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__core_wten 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_sync_core_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_iswt0_cse));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__core_wten)) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_iswt0));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_pdswt0) 
           | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_icwt));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__ld 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt));
}

void Vsim_HLS_fp16_to_fp17___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__core_din_format_switch_3__1(Vsim_HLS_fp16_to_fp17* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp16_to_fp17___nba_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__core_din_format_switch_3__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____VdfgRegularize_hff3fa78a_0_3) 
           & (7U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____VdfgRegularize_hff3fa78a_0_37)));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_ctrl_inst__DOT__chn_o_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__chn_o_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_biwt));
    vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__or_cse 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)));
}

void Vsim_HLS_fp16_to_fp17___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__core_din_format_switch_3__0(Vsim_HLS_fp16_to_fp17* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vsim_HLS_fp16_to_fp17___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__core_din_format_switch_3__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__133__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__133__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__133__input_0;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__133__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__133__input_1;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__133__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__133__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__133__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__134__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__134__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__134__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__134__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__135__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__135__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__135__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__135__sel = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__138__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__138__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__138__input_0;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__138__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__138__input_1;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__138__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__138__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__138__sel = 0;
    CData/*3:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__139__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__139__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__139__input_2;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__139__input_2 = 0;
    CData/*3:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__139__input_1;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__139__input_1 = 0;
    CData/*2:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__139__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__139__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__140__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__140__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__140__input_0;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__140__input_0 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__140__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__140__sel = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__141__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__141__Vfuncout = 0;
    SData/*8:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__141__arg1;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__141__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__141__arg2;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__141__arg2 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__141__sbit;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__141__sbit = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__142__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__142__Vfuncout = 0;
    SData/*9:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__142__arg1;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__142__arg1 = 0;
    CData/*4:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__142__arg2;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__142__arg2 = 0;
    SData/*15:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__143__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__143__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__143__input_0;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__143__input_0 = 0;
    SData/*15:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__143__input_1;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__143__input_1 = 0;
    CData/*0:0*/ __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__143__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__143__sel = 0;
    // Body
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____VdfgRegularize_hff3fa78a_0_0) 
           & (7U == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT____VdfgRegularize_hff3fa78a_0_35)));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__143__sel 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__143__input_1 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_d_bfwt;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__143__input_0 
        = (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__pdp_datin_pd_f_mux0[1U] 
           >> 0x00000010U);
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__143__sel)
            ? (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__143__input_1)
            : (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__143__input_0));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__143__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__MUX_v_16_2_2__143__Vfuncout;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_ctrl_inst__DOT__chn_a_rsci_ogwt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__chn_a_rsci__DOT__vd));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsNaN_5U_10U_land_lpi_1_dfm 
        = (IData)(((0x7c00U == (0x7c00U & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                   & (0U != (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_8 
        = (IData)(((0x7000U == (0x7000U & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                   & (0U != (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm 
        = (1U & (~ (IData)((0x7c00U != (0x7fffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsDenorm_5U_10U_land_lpi_1_dfm 
        = (IData)(((0U == (0x7c00U & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                   & (0U != (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_2 
        = (IData)((0U == (0x03c0U & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_wrs_c_18_3_sdt_3 
        = (IData)((0U == (0x003cU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_biwt));
    vlSelfRef.HLS_fp16_to_fp17_core_inst__DOT____VdfgRegularize_h5a0a11e1_0_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm) 
           | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsDenorm_5U_10U_land_lpi_1_dfm));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_2) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_wrs_c_18_3_sdt_3));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_19 
        = ((~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_38_cse 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt)) 
                        & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__reg_chn_o_rsci_ld_core_psct_cse))) 
                    & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_13 
        = ((IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_4_mdf 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__or_cse));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_and_35_ssc 
        = ((0U == (3U & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))) 
           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_rsci_d_9_0_mx0c1 
        = ((~ (IData)(((0x7c00U == (0x7c00U & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                       & (0U != (0x000003ffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt)))))) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__or_cse) 
               & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt) 
                  & (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                       ? 2U : 1U) >> 1U))) | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_dcpl_13)));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_ld_core_psct_mx0c0 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_4_mdf) 
                 | ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_4_mdf) 
           & (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                ? 2U : 1U) >> 1U));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__rtn 
        = ((((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3) 
             << 3U) | (((~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_wrs_c_18_3_sdt_3)) 
                        & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_2)) 
                       << 2U)) | ((((IData)((((0U == 
                                               (0x0300U 
                                                & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                                              & (~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3))) 
                                             & ((0U 
                                                 != 
                                                 (0x00c0U 
                                                  & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))) 
                                                | (0U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                                                       >> 4U)))))) 
                                    | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_and_35_ssc)) 
                                   << 1U) | (1U & (~ 
                                                   (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                                                     >> 9U) 
                                                    | ((1U 
                                                        == 
                                                        (3U 
                                                         & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                                                            >> 7U))) 
                                                       | (((((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                                                             >> 5U) 
                                                            | (1U 
                                                               == 
                                                               (3U 
                                                                & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                                                                   >> 3U)))) 
                                                           & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_2)) 
                                                          | ((((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                                                               >> 1U) 
                                                              & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__c_h_1_3)) 
                                                             | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__IntLeadZero_10U_leading_sign_10_0_rtn_and_35_ssc)))))))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_a_rsci_chn_a_wait_dp_inst__DOT__chn_a_rsci_bawt)) 
                 & ((~ (IData)(vlSelfRef.__PVT__chn_o_rsci_unreg_inst__DOT__in_0)) 
                    | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_inst__DOT__HLS_fp16_to_fp17_core_chn_o_rsci_chn_o_wait_dp_inst__DOT__chn_o_rsci_bawt))));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__133__sel 
        = (1U & (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__134__sel 
        = vlSelfRef.__PVT__chn_a_rsci_unreg_inst__DOT__in_0;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__134__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__134__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__133__input_1 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__134__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__135__sel 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
            ? 0U : 1U);
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__135__sel;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__135__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__Vstatic__result;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__133__input_0 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_s_1_1_2__135__Vfuncout;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__133__sel)
            ? (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__133__input_1)
            : (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__133__input_0));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__133__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__iExpoWidth_oExpoWidth_prb 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__133__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__138__sel 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsDenorm_5U_10U_land_lpi_1_dfm;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__138__input_1 
        = (1U & (((IData)(0x11U) + (0x00000010U | (0x0000000fU 
                                                   & (~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__rtn))))) 
                 >> 4U));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__138__input_0 
        = (1U & (~ ((~ (IData)((0U != (0x7fffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt))))) 
                    | ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                       >> 0x0000000eU))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__138__sel)
            ? (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__138__input_1)
            : (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__138__input_0));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__138__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_mux_2_nl 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_s_1_2_2__138__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__139__sel 
        = ((4U & ((~ (IData)(vlSelfRef.HLS_fp16_to_fp17_core_inst__DOT____VdfgRegularize_h5a0a11e1_0_0)) 
                  << 2U)) | (((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsDenorm_5U_10U_land_lpi_1_dfm) 
                              << 1U) | (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm)));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__139__input_1 
        = (0x0000000fU & ((IData)(1U) + (~ (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__rtn))));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__139__input_2 
        = (0x0000000fU & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                          >> 0x0aU));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = (0x0eU & (- (IData)((1U & (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__139__sel)))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__139__input_1) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__139__sel) 
                                  >> 1U))))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result 
        = ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result) 
           | ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__139__input_2) 
              & (- (IData)((1U & ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__139__sel) 
                                  >> 2U))))));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__139__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_mux1h_nl 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX1HOT_v_4_3_2__139__Vfuncout;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__nl_FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg_s 
        = (0x0000003fU & ((IData)(1U) + VL_EXTEND_II(6,5, 
                                                     ([&]() {
                        vlSelfRef.__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__conv_u2u_4_5__132__vector 
                            = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__leading_sign_10_0_rg__DOT__rtn;
                        vlSelfRef.__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__conv_u2u_4_5__132__Vfuncout 
                            = vlSelfRef.__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__conv_u2u_4_5__132__vector;
                    }(), (IData)(vlSelfRef.__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__conv_u2u_4_5__132__Vfuncout)))));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_o_and_1_cse 
        = ((~ ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__and_38_cse) 
               | ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U))) & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__HLS_fp16_to_fp17_core_core_fsm_inst__DOT__core_wen));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__141__sbit 
        = (1U & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt) 
                 >> 8U));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__141__arg2 
        = (0x0000001fU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__nl_FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg_s));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__141__arg1 
        = (0x000001ffU & (IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__chn_a_rsci_d_mxwt));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__142__arg2 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__141__arg2;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__142__arg1 
        = (((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__141__sbit) 
            << 9U) | (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__141__arg1));
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result_t 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__142__arg1;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result 
        = (0x000003ffU & ((IData)(vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result_t) 
                          << (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__142__arg2)));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__142__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__Vstatic__result;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__141__Vfuncout 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u_1__142__Vfuncout;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_itm 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_rg__DOT__fshl_u__141__Vfuncout;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__140__sel 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__IsInf_5U_10U_land_lpi_1_dfm;
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__140__input_0 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_if_1_if_lshift_itm;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result 
        = ((IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__140__sel)
            ? 0x03ffU : (IData)(__Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__140__input_0));
    __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__140__Vfuncout 
        = vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__Vstatic__result;
    vlSelfRef.__PVT__HLS_fp16_to_fp17_core_inst__DOT__FpExpoWidthInc_5U_6U_10U_1U_1U_FpExpoWidthInc_5U_6U_10U_1U_1U_or_1_nl 
        = __Vfunc_HLS_fp16_to_fp17_core_inst__DOT__MUX_v_10_2_2__140__Vfuncout;
}
