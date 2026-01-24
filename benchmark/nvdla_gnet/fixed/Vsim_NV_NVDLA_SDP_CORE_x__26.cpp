// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim_NV_NVDLA_SDP_CORE_x___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_bn__8(Vsim_NV_NVDLA_SDP_CORE_x* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_NV_NVDLA_SDP_CORE_x___nba_comb__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_bn__8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__X_relu_core_chn_relu_out_rsci_inst__DOT__X_relu_core_chn_relu_out_rsci_chn_relu_out_wait_dp_inst__DOT__chn_relu_out_rsci_biwt 
        = ((IData)(vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__X_relu_core_chn_relu_out_rsci_inst__DOT__X_relu_core_chn_relu_out_rsci_chn_relu_out_wait_ctrl_inst__DOT__chn_relu_out_rsci_ogwt) 
           & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__bn_data_out_prdy));
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__X_relu_core_chn_relu_out_rsci_inst__DOT__X_relu_core_chn_relu_out_rsci_chn_relu_out_wait_dp_inst__DOT__chn_relu_out_rsci_bawt 
        = ((IData)(vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__X_relu_core_chn_relu_out_rsci_inst__DOT__X_relu_core_chn_relu_out_rsci_chn_relu_out_wait_dp_inst__DOT__chn_relu_out_rsci_bcwt) 
           | (IData)(vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__X_relu_core_chn_relu_out_rsci_inst__DOT__X_relu_core_chn_relu_out_rsci_chn_relu_out_wait_dp_inst__DOT__chn_relu_out_rsci_biwt));
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__and_dcpl_1 
        = (((IData)(vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__X_relu_core_cfg_relu_bypass_rsc_triosy_obj_inst__DOT__X_relu_core_cfg_relu_bypass_rsc_triosy_obj_cfg_relu_bypass_rsc_triosy_wait_dp_inst__DOT__cfg_relu_bypass_rsc_triosy_obj_bcwt) 
            | (IData)(vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__X_relu_core_cfg_relu_bypass_rsc_triosy_obj_inst__DOT__cfg_relu_bypass_rsc_triosy_obj__DOT__ld)) 
           & (IData)(vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__X_relu_core_chn_relu_out_rsci_inst__DOT__X_relu_core_chn_relu_out_rsci_chn_relu_out_wait_dp_inst__DOT__chn_relu_out_rsci_bawt));
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__or_dcpl_2 
        = (1U & (~ ((~ ((~ (IData)(vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__and_dcpl_1)) 
                        & (IData)(vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__reg_chn_relu_out_rsci_ld_core_psct_cse))) 
                    & (IData)(vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__X_relu_core_chn_relu_in_rsci_inst__DOT__X_relu_core_chn_relu_in_rsci_chn_relu_in_wait_dp_inst__DOT__chn_relu_in_rsci_bawt))));
    vlSelfRef.__PVT__X_relu_inst__DOT__cfg_relu_bypass_rsc_triosy_obj_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__and_dcpl_1) 
           & (IData)(vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__reg_chn_relu_out_rsci_ld_core_psct_cse));
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__or_dcpl 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__reg_chn_relu_out_rsci_ld_core_psct_cse)) 
                 | (IData)(vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__and_dcpl_1)));
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__and_dcpl_15 
        = ((~ (IData)(vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__X_relu_core_chn_relu_in_rsci_inst__DOT__X_relu_core_chn_relu_in_rsci_chn_relu_in_wait_dp_inst__DOT__chn_relu_in_rsci_bawt)) 
           & (IData)(vlSelfRef.__PVT__X_relu_inst__DOT__cfg_relu_bypass_rsc_triosy_obj_unreg_inst__DOT__in_0));
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__and_32_cse 
        = ((IData)(vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__or_dcpl) 
           & ((IData)(vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__and_dcpl_7) 
              & (((IData)(vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__X_relu_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U)));
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__and_4_mdf 
        = ((IData)(vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__X_relu_core_chn_relu_in_rsci_inst__DOT__X_relu_core_chn_relu_in_rsci_chn_relu_in_wait_dp_inst__DOT__chn_relu_in_rsci_bawt) 
           & (IData)(vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__or_dcpl));
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__and_34_cse 
        = ((IData)(vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__or_dcpl) 
           & ((IData)(vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__and_dcpl_10) 
              & (((IData)(vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__X_relu_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U)));
    vlSelfRef.__PVT__X_relu_inst__DOT__chn_relu_in_rsci_unreg_inst__DOT__in_0 
        = ((IData)(vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__or_dcpl) 
           & ((IData)(vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__X_relu_core_chn_relu_in_rsci_inst__DOT__X_relu_core_chn_relu_in_rsci_chn_relu_in_wait_dp_inst__DOT__chn_relu_in_rsci_bawt) 
              & (((IData)(vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__X_relu_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U) >> 1U)));
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__chn_relu_in_rsci_ld_core_psct_mx0c0 
        = (1U & ((IData)(vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__and_4_mdf) 
                 | ((IData)(vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__X_relu_core_core_fsm_inst__DOT__state_var)
                     ? 2U : 1U)));
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__chn_relu_out_rsci_d_31_mx0c1 
        = ((IData)(vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__and_34_cse) 
           | ((IData)(vlSelfRef.__PVT__X_relu_inst__DOT__cfg_relu_bypass_rsc_triosy_obj_unreg_inst__DOT__in_0) 
              & (IData)(vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__and_dcpl_10)));
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__X_relu_core_core_fsm_inst__DOT__core_wen 
        = (1U & (((~ (IData)(vlSelfRef.__PVT__X_relu_inst__DOT__chn_relu_in_rsci_unreg_inst__DOT__in_0)) 
                  | (IData)(vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__X_relu_core_chn_relu_in_rsci_inst__DOT__X_relu_core_chn_relu_in_rsci_chn_relu_in_wait_dp_inst__DOT__chn_relu_in_rsci_bawt)) 
                 & ((~ (IData)(vlSelfRef.__PVT__X_relu_inst__DOT__cfg_relu_bypass_rsc_triosy_obj_unreg_inst__DOT__in_0)) 
                    | (IData)(vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__X_relu_core_chn_relu_out_rsci_inst__DOT__X_relu_core_chn_relu_out_rsci_chn_relu_out_wait_dp_inst__DOT__chn_relu_out_rsci_bawt))));
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__X_relu_core_cfg_relu_bypass_rsc_triosy_obj_inst__DOT__X_relu_core_cfg_relu_bypass_rsc_triosy_obj_cfg_relu_bypass_rsc_triosy_wait_dp_inst__DOT__cfg_relu_bypass_rsc_triosy_obj_bdwt 
        = ((IData)(vlSelfRef.__PVT__X_relu_inst__DOT__cfg_relu_bypass_rsc_triosy_obj_unreg_inst__DOT__in_0) 
           & (IData)(vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__X_relu_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__chn_relu_out_and_1_cse 
        = ((~ ((IData)(vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__or_dcpl_2) 
               | ((IData)(vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__X_relu_core_core_fsm_inst__DOT__state_var)
                   ? 2U : 1U))) & (IData)(vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__X_relu_core_core_fsm_inst__DOT__core_wen));
    vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__FpRelu_8U_23U_oelse_and_cse 
        = ((~ ((IData)(vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__or_dcpl_2) 
               | ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__cfg_bn_relu_bypass) 
                  | ((2U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__cfg_proc_precision)) 
                     | ((IData)(vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__X_relu_core_core_fsm_inst__DOT__state_var)
                         ? 2U : 1U))))) & (IData)(vlSelfRef.__PVT__X_relu_inst__DOT__X_relu_core_inst__DOT__X_relu_core_core_fsm_inst__DOT__core_wen));
}
